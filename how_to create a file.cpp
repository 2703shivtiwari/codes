#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream outFile("exampl.txt");

    if(outFile.is_open())

    {
    outFile<<"Hello "<<endl;
    outFile<<"this ia an example "<<endl;
    cout<<"Data written succesfully"<<endl;
    }
    else{
        cout<<"Error :could not open the file for writting "<<endl;
    }
    outFile.close();
return 0;
}