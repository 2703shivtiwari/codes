#include<iostream>
using namespace std;
template <class T,class C> void func1(T a ,C b)
{
   //T  c = a+b;
   //return c;
cout<<a;
cout<<b;

    
}
int main()
{
    int a = 5;
    //cout<<c;
    float b = 7.2;
    func1(a,b);
     //cout<<c;
    return 0;

}