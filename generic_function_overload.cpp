#include<iostream>
using namespace std;
template<class  T>
void func1(T a, T b){
    cout<< a;
   
}
template<class A> void  func1(A x){
    cout<<x;

}

int main()
{
    int a  =  5;
    int b = 6;
    int x=9;
    func1(a,b);
    func1(x);
    return 0;
}