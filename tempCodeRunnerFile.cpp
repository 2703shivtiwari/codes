#include<iostream>
using namespace std;


class Volume 
{
    public:
 int Volumeof(int a)
 {
    return a*a*a;
 }
 int  Volumeof(int l,int b,int h)
 {
    return l*b*h;
 }
 double Volumeof(double r,double h)
 {
    double const  Pi = 3.14;
    return Pi*r*r*h;
 }

};
int main()
{

    Volume V;
    cout<<"Volume of cube : "<<V.Volumeof(5)<<endl;
    cout<<"Volume of Rectangle : "<<V.Volumeof(78,24,7)<<endl;
    cout<<"Volume of Cylinder : "<<V.Volumeof(5.3,6.8)<<endl;
}