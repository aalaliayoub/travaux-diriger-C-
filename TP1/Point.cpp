#include <iostream>
#include<cmath>
//TD1/TP1 Exercice1
using namespace std;
/*typedef struct t{
    int x;
    int y;
};
void zero(int*a,int*b){
    *a=0;
    *b=0;
}
void zero(int &a,int &b){
    a=0;
    b=0;
}
int main()
{
    t c;
    c.x=19;
    c.y=34;
    cout<< "passage par address : " <<endl;
    zero(&c.x,&c.y);
    cout << c.x <<endl<<c.y<< endl;
    cout<<"passage par reference :" <<endl;
    zero(c.x,c.y);
    cout << c.x <<endl<<c.y<< endl;
    return 0;
}*/
/*void fct(int n,int h){
    cout<<n<<endl<<h;
}
int main(){
    char a,b;
    a='c';
    b='b';
    fct(a,b);
return 0;
}
*/
//-------------------------------------exercice3-------------------------------------------------
/*    1=> ad1=new int ;
       2=> add=new double[100];
       delete ad1;
       delete[] add;

*/
///////////////////////////////////////Exerciece4//////////////////////////////////////////////////
class point {
    static int n;
public :
    int x;
    int y;
    ~point()
    {
        n--;
        cout << "destructure..............." << n << endl;
    }
void affiche(){
    cout<<"les coordonnees de votre point sont :"<<endl<<"("<<x<<","<<y<<")\n";
}
point(int a=0,int b=0){
     n++;
    cout<<"constructre..............."<<n<<endl;
    x=a;
    y=b;
}
void setx(int a){
    x=a;
}
void sety(int b){
    y=b;
}

int getx(){
    return x;
}
int gety(){
    return y;
}
void deplacer(int a,int b){
    x=x+a;
    y+=b;
}
friend point operator-(point&,point&);
friend point operator+(point&,point&);
friend point operator++(point&);
//friend point& operator=(point&,point&);
point& operator=(point&);
point operator++(int n){
    this->x++;
    this->y++;
    return *this;
}
};
point& point::operator=(point&q){
    if(this==&q){
        return *this;
    }
    this->x=q.x;
    this->y=q.y;
    return *this;
}
/*point& operator=(point &p,point &q){
    if(&p==&q){
        return q;
    }
    p.x=q.x;
    p.y=q.y;
    return p;
}*/
point operator+(point&p,point&q){
    point r;
    r.x=q.x+p.x;
    r.y=q.y+p.y;
    return r;
}
point operator-(point&p,point&q){
    point r;
    r.x=q.x-p.x;
    r.y=q.y-p.y;
    return r;
}
point operator++(point &p){
    p.x++;
    p.y++;
    return p;
}
int point::n=0;
int main (){
    point p,p10,p11;
    point p1(1,2);
    //p=point(3,6);
    p.affiche();
    p.setx(5);
    p.sety(12);
    p.affiche();
    p.deplacer(4,1);
    cout<<"le point a ete deplacer vers cette position :";
    p.affiche();
    p10=p1;
    cout<<p10.getx()<<"."<<p10.gety()<<endl;
    ++p1;
    p1.affiche();
    p11++;
    point pp;
    pp=p10;
    p11.affiche();
return 0;
}


