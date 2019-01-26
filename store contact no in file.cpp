#include<iostream>
#include<string>
#include<algorithm>
#include<fstream>
using namespace std;
int valid_contact_NO(string);
int main()
{
   int n,z;
   string ch;
   string contact;
   string result;
   do
   {
         if(n==1)
         {
            cout<<"Enter the customer name "<<endl;
            fflush(stdin);
            getline(cin,ch);
            cout<<"Enter the contact no of the customer"<<endl;
            fflush(stdin);
            cin>>contact;
            z=valid_contact_NO(contact);
             if(z==1)
             {
                 ofstream fout;
                 fout.open("Customer data.txt",ios::out|ios::app);
                 if(fout.fail())
                 {
                  cout<<"File not open"<<endl;
                  exit(0);
                 }
                 else
                 {
                    result="Name :";
                    result=result+ch;
                    result=result+"\n";
                    fout<<result;
                    result="Contact NO->";
                    result=result+contact;
                    result=result+"\n";
                    fout<<result;
                    fout<<"...........................................\n";
                    cout<<"Contact has been successfully stored in file"<<endl;
                 }
                 fout.close();
              }
               else
               {
                cout<<"Contact NO is not valid"<<endl;
               }
         }
           if(n==2)
           {
                char ch;
                ifstream fin;
                fin.open("Customer data.txt",ios::in|ios::app);
                 if(fin.fail())
                 {
                  cout<<"File not open"<<endl;
                  exit(0);
                 }
                 fin>>ch;
                 while(!fin.eof())
                 {
                    cout<<ch;
                    fin.get(ch);
                    if(ch=='\n')
                    {
                       cout<<endl;
                    }
                 }
                 fin.close();
           }
        cout<<endl<<endl;
        cout<<"\t\t\t 1. to store customer information"<<endl;
        cout<<"\t\t\t 2. to view the customer information"<<endl;
        cout<<"Enter your choice: ";
        cin>>n;
      }while(n==1||n==2);
  }
int valid_contact_NO(string contact)
{
   int flag;
   if(contact.size()==10)
   {
      flag=1;
      for(int i=0;i<10;i++)
      {
         if(!isdigit(contact[i]))
         {
            flag=0;
         }
      }
   }
   else
   {
      return(0);
   }
   return(flag);
}
