#include<iostream>
using namespace std;
template<class SV> void swapValues(SV& a,SV& b){

    SV temp = a;
    a = b;
    b = temp;
}




int main(){
    int x = 10; int y = 13;

    swapValues(x,y);
    cout<<"x : "<<x<<" "<<"y : "<<y<<endl;

    string s1 = "hello"; string s2 = "desi";


    swapValues(s1,s2);
        cout<<"x : "<<s1<<" "<<"y : "<<s2;


    return 0;
    
}