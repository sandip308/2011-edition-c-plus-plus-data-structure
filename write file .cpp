#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main()
{
    ofstream fout;
    vector<char>v1;
    char input;
    fout.open("My 1st file.txt",ios::out);
    if(fout.fail())
    {
        cout<<"File can not open"<<endl;
        exit(0);
    }
    else
    {
       cout<<"Enter the line which you want to write in file"<<endl;
       input=cin.get();
       fout<<input;
       while(1)
       {
           if(input=='.')
           {
               break;
           }
           input=cin.get();
           v1.push_back(input);
           fout.put(input);
       }
    }
     fout.close();
}
