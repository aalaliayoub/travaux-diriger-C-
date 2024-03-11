#include <iostream>
using namespace std;
class point3d
{
    static int n;
private:
    int x, y, z;
public:
point3d(){
    x=y=z=0;
}
point3d(int,int,int);
~point3d();
void affiche();
void compare(point3d);
};
void point3d::compare(point3d p){
    if(this->x==p.x&&this->y==p.y&&this->z==z){
        cout<<"les deux point sont egaux. \n";
    }else{
        cout<<"les deux poits sont differents\n";
    }
}
point3d::point3d(int a,int b,int c){
    x=a;y=b;z=c;
}
point3d::~point3d(){
    cout<<"destrecture..............................\n";
}
void point3d::affiche(){
    cout<<"les coordonees de point sont : ("<<x<<","<<y<<","<<z<<")"<<endl;
}
int main()
{
    point3d p1,p2,p3;
    p1.affiche();
    p2.affiche();
    p3.affiche();
    p1=point3d(1,2,3);
    p2=point3d(1,2,3);
    p3=point3d(4,5,6);
    p1.affiche();
    p2.affiche();
    p3.affiche();
    p1.compare(p2);
    p2.compare(p3);
    p3.compare(p1);
    return 0;
}