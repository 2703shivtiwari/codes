#include<iostream>
#include<deque>

using namespace std;
int main()
{
    deque<int> a ;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>a[i];

    }
 

    for(int i: a){
        cout<<i;

    }
     cout<<a.at(1);
    a.pop_back();
    a.pop_front();

   for(int i: a){
        cout<<i;
   }

    return 0;
} 