#include<iostream>
#include<list>
using namespace std;
int main(){

    list<int> a;
    auto x=  a.begin();
    ++x;
    a.insert(x,10);

    //using functions
    a.emplace_back();
    a.emplace_front();
    //erase 
    auto y = a.begin();
++y;
a.erase(y);
//
auto y = a.end();
--y;
a.erase(y);

//to remove the duplicate
a.unique();


    return 0;
}
