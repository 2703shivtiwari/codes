#include<iostream>
using namespace std;

template<class R> R findMax(R a, R b)

{
    if(a.size()>b.size())
    {
        return a;
    }
    else  {
        return b;
    }
    
}
int main()
{
    //int a = 10;
    //int b = 12;
    //int c = findMax(a,b);
    string a = "hello";
    string b = "world";
    string c = findMax(a,b);
    cout<<c;
    
}