#include<iostream>
#include<cmath>
using namespace std;
//class point 
class point {
public :
    int x;
    int y;
point(int a,int b){
    x=a;
    y=b;
}
point(){
    x=0;
    y=0;
}
void affiche(){
    cout<<"les coordonnees de votre point sont :"<<endl<<"("<<x<<","<<y<<")\n";
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
};
//        class segment
class segment {
private:
    point p1,p2;
public:
    double langeur();
    segment();
    segment(const point&,const point&);
    ~segment();
    bool appartient(const point &);
    void affiche();
};
double segment::langeur(){
   return sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
}
segment::segment(){
    p1=point(0,0);
    p2=point(0,0);
}
segment::segment(const point &q,const point &p){
    p1=q; //p1=point(q.x,q.y);
    p2=p; //p2=point(p.x,p.y);
}
segment::~segment(){
    cout<<"destructure..........................................\n";
}
bool segment::appartient(const point &q){
   if(q.y==((p2.y-p1.y)/(p2.x-p1.x))*q.x+(p1.y-((p2.y-p1.y)/(p2.x-p1.x))*p1.x)){
    return true;
   }
   else{
    return false;
   }
}
void segment::affiche(){
    cout<<"segment| A("<<p1.x<<","<<p1.y<<") ;  B("<<p2.x<<","<<p2.y<<") |"<<endl;
}
int main(){
    point p3(7,3);
    segment s;
    s.affiche();
    point p1(2,2);
    point p2(4,4);
    s=segment(p1,p2);
    s.affiche();
    if(s.appartient(p3)){
        cout<<"cette point apparient au cercle."<<endl;
    }
    else{
        cout<<"cette point n'apparient au cercle."<<endl;
    }
  return 0;
}