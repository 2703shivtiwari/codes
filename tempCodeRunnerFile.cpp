#include <iostream>
using namespace std;

class A{

public:
int Area(int l,int b)

{
    return l*b;
}
double Area( double r)
{
    double const Pi = 3.14;
    return Pi*r*r;

}
float Area(float h,float b)
{
return 0.5f*h*b;

}
};
int main()
{
    A ar;
    cout<<"Area of rectangle : "<< ar.Area(4,8)<<endl;
    cout<<"Area of circle : "<<ar.Area(5)<<endl;
    cout<<"Area of Triangle : "<<ar.Area(8.0f,10.1f);
    cout<< 'hello';
    return 0;

}