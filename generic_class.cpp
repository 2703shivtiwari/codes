#include<iostream>
using namespace std;

template<class R>
class abc{
    public:
    R a = 9;
    void display(){
        cout<<a;
    }
};
int main()
{
    abc <int> a;
    a.display();
    return 0;
}