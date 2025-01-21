#include<iostream>
using namespace std;
int add(int a,int b)
{

return a + b;
}
double add ( double a ,double b)
{
    return a + b;
}

int add(int i , int j ,int k){
    return  i + j + k;
}

int main()
{
int result =   add(5,10);
double result_d = add (5.33,7.88);
int reusult_three =  add(10,9,57);
cout<<" result "<<result<<endl;
cout<<"this : "<<result_d<<endl;
cout<<"to : "<<reusult_three;
}
