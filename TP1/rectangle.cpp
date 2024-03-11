#include <iostream>
#include<cmath>
using namespace std;
class point
{
public:
    int x;
    int y;
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    point()
    {
        x = 0;
        y = 0;
    }
    void affiche()
    {
        cout << "les coordonnees de point sont :"
             << "(" << x << "," << y << ")\n";
    }

    void setx(int a)
    {
        x = a;
    }
    void sety(int b)
    {
        y = b;
    }

    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
    void deplacer(int a, int b)
    {
        x = x + a;
        y += b;
    }
};
class rectangle : public point
{
private:
    double langeur;
    double largeur;

public:
    rectangle():point(){
        langeur=0;
        largeur=0;
    }
    rectangle(int n,int a, double L, double l)/*: point(n,a) */{
        langeur=L;
        largeur=l;
       point  p=point(n,a);
    }
    ~rectangle();
    double perimetre();
    double surface();
    double diagonale();
    void doublerDim();
    void affiche();
    double getlangeur();
    double getlargeur();
};
rectangle::~rectangle(){
    cout<<"destructure...................\n";
}
double rectangle::perimetre(){
    return 2*(langeur+largeur);
}
double rectangle::surface(){
    return largeur*langeur;
}
double rectangle::diagonale(){
    return sqrt(pow(langeur,2)+pow(largeur,2));
}
void rectangle::doublerDim(){
    langeur*=langeur;
    largeur*=largeur;
}
void rectangle::affiche(){
    point::affiche();
    cout<<"la largeur est : "<<largeur <<" et  langeur est : "<<langeur<<endl;
}
double rectangle::getlargeur(){
    return largeur;
}
double rectangle::getlangeur(){
    return langeur;
}
int main()
{
    rectangle r;
    r.affiche();
    r=rectangle(2,2,5,8);
    r.affiche();
    cout<<"le perimetre de votre rectangle est : "<<r.perimetre()<<endl;
    cout<<"la surface de votre rectangle est : "<<r.surface()<<endl;
    cout<<"le diagonale de votre rectangle est : "<<r.diagonale()<<endl;
    r.doublerDim();
    cout<<"les demnsion sont doubler alors langeur =  "<<r.getlangeur()<<" et largeur="<<r.getlargeur()<<endl;
    return 0;
}