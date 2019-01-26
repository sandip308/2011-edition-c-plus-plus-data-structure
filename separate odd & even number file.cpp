#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main()
{
    ofstream fout;
    vector<int>v1;
    int input;
    int n;
    fout.open("All number.txt",ios::out);
    if(fout.fail())
    {
        cout<<"File can not open"<<endl;
        exit(0);
    }
    else
    {
       cout<<"Enter the size of the array"<<endl;
       cin>>n;
       cout<<"Enter the numbers"<<endl;
       for(int i=0;i<n;i++)
       {
           cin>>input;
           v1.push_back(input);
           fout<<input<<endl;
       }
       fout.close();
    }
     ofstream dout,nout;
     ifstream fin;
     int p;
     fin.open("All number.txt",ios::in);
     dout.open("Even number.txt",ios::out);
     nout.open("Odd number.txt",ios::out);
     while(!fin.eof())
     {
         fin>>p;
         if(p%2==0)
         {
            dout<<p<<endl;
         }
         else
         {
             nout<<p<<endl;
         }

     }
     cout<<"Separation complete"<<endl;
     nout.close();
     dout.close();
     fin.close();
}
