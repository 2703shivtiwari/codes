#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream inFile("example.txt");
    string line;
    if(inFile.is_open())
    {
        while (getline(inFile, line))

        {
            cout<<line<<endl;
        }        
    }else{
        cout<<" error : could "<<endl;
    }
    inFile.close();
    return 0;
}