#include<iostream>
#include<string.h>
using namespace std;
void string_replace(char *str,char *rep,char *sub,int i)
{
   int sli,len,j,p=0;
   int k=0;
   sli=(i-strlen(sub))+1;
   len=strlen(str)+strlen(rep)-strlen(sub);
   char arr[len];
   for(j=0;j<len;j++)
   {
      if(j<sli)
      {
         arr[j]=str[k];
         k++;
      }
      else if(j>=strlen(rep)+sli)
      {
         arr[j]=str[i+1];
         i++;
      }
      else
      {
         if(p<strlen(rep))
         {
            arr[j]=rep[p];
            p++;
         }
      }
   }
   for(int s=0;s<len;s++)
   {
      cout<<arr[s];
   }
}
int main()
{
   char str[20],sub[20],rep[20];
   char ch;
   cout<<"Enter a string: ";
   cin>>str;
   cout<<"Enter a substring: ";
   cin>>sub;
   int i,j=0,c=0;
   int n,flag=0;
   for(i=0;i<strlen(str);i++)
   {
      while(j<strlen(sub))
      {
         if(str[i]==sub[j])
         {
            c++;
            j++;
            break;
         }
         else
         {
            j=0;
            c=0;
            break;
         }
      }
      if(c==strlen(sub))
      {
         flag=1;
         cout<<"Substring is found on this string"<<endl;
         n=i;
         cout<<"Do you want to replace the string with new string"<<endl;
         cout<<"Enter your choice by Y/y: "<<endl;
         cin>>ch;
         if(ch=='Y'||ch=='y')
         {
            cout<<"Enter a replace string"<<endl;
            cin>>rep;
            string_replace(str,rep,sub,n);
         }
         break;
      }
   }
   if(flag==0)
   {
      cout<<"Substring is not found in this string"<<endl;
      cout<<"You can't replace a string without matching the substring"<<endl;
   }
}
