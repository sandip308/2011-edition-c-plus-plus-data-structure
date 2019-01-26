#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream din;
    char ch;
    din.open("My 1st file.txt",ios::in);
    din>>ch;
    while(!din.eof())
    {
        cout<<ch;
        din.get(ch);
    }
    din.close();
}
