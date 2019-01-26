#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main()
{
    ofstream fout;
    vector<char>v1;
     char input;
   fout.open("copy.txt",ios::out);
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
           if(input=='#')
           {
               break;
           }
           input=cin.get();
           v1.push_back(input);
           fout.put(input);
       }
    }
    fout.close();
    ifstream fin;
    ofstream dout;
    char ch;
    fin.open("copy.txt",ios::in);
    dout.open("copy2.txt",ios::out);
    if(fin.fail())
    {
        cout<<"File can't open"<<endl;
        exit(0);
    }
    if(dout.fail())
    {
        cout<<"File can't open"<<endl;
        exit(0);
    }
    while(1)
    {
        ch=fin.get();
        if(ch==EOF)
        {
            break;
        }
        dout.put(ch);
    }
    cout<<"File Content copied successfully"<<endl;
    fin.close();
    dout.close();
}
