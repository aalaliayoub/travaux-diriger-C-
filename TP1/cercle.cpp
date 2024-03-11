#include <iostream>
#include<cmath>
using namespace std;
class cercle{
public:
    double r,x,y;
cercle(double a, double b, double c){ //constructre
   r=a;
   x=b;
   y=c;
}
cercle(){
    r=x=y=0;
}
~cercle(){
    cout<<"destructure...............................\n";//destructeur
}
void setter(double a,double b,double c){
    r = a;
    x = b;
    y = c;
}
double getR(){
    return r;
}
double getX(){
    return x;
}
double getY(){
    return y;
}
void setcenter(double a,double b){
    //cout<<"le coordonnee de centre a ete modifiie de : ("<< x <<","<<y <<")"<<"vers le point ("<<x+a<<","<<y+b<<")\n";
    x=a;
    y=b;
}
double surface(){
    return M_PI*r*r;
}
bool estInterieur(double a, double b){
    double d;
    d=sqrt(pow(x-a,2)+pow(y-b,2));
    if(d>r){
        return false;
    }
    else{
        return true;
    }
}
};
int main()
{
    cercle c(12, 23, 32);
    c.setcenter(12, 34);
    cout << "les coordonnees de centre sont (" << c.getX() << "," << c.getY() << ")"
         << " et le rayon est : " << c.getR() << endl;
    cout << "l'interface de cercle est : " << c.surface() << endl;
    cout << "le point est a linterier de cerle : " << c.estInterieur(23, 4) << endl;
    cercle C(5, 0, 0);
    C.setcenter(4, 4);
    cout << "les coordonnees de centre sont (" << C.getX() << "," << C.getY() << ")"
         << " et le rayon est : " << C.getR() << endl;
    cout << "la surface de cercle est : " << C.surface() << endl;
    cout << "le point est a l'interier de cerle : " << C.estInterieur(1, 0) << endl;
    return 0;
}