#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    vector<char>v1;
    char input;
    fout.open("sandip.txt",ios::out);
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
    ifstream fin;
    fin.open("sandip.txt",ios::in);
    char ch;
    int t=0,s=0,n=0,c=0;
    int p;
    fin>>ch;
    while(!fin.eof())
    {
        c++;
        ch=fin.get();
        if(ch=='\t')
        {
            t++;
        }
        if(ch==' ')
        {
            s++;
        }
        if(ch=='\n')
        {
            n++;
        }
    }
    p=t+s+n;
    cout<<"No of the character in this file is->"<<c<<endl;
    cout<<"No of the letter in this string is->"<<(c-p-1)<<endl;
    cout<<"No of the space in file is->"<<s<<endl;
    cout<<"No of the tabs in the file is->"<<t<<endl;
    cout<<"No of the new line in the file is->"<<n<<endl;
    fin.close();
}
