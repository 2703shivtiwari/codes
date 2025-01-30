#include<iostream>
#include<list>

using namespace std;
int main()
{
    list<int> a;
    a.push_back(10);
    a.push_back(30);
    a.push_back(25);
    a.push_back(30);

    for(int i:a){
        cout<<i<<endl;
    }
    a.pop_back();
    a.pop_front();
    for(auto i =a.begin(); i!= a.end();i++){
        cout<<*i;
    }

    return 0;
}