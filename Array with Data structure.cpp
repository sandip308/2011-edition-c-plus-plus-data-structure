#include<iostream>
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;
template<class X>
class Mr_Array
{
private:
    X *arr;
    int n=0,capacity;
    int flag=0;
public:
    ~Mr_Array()
    {delete arr;}
    int get_capacity()//size of the array
    {
        return capacity;
    }
    int get_elements()//count the elements
    {
        return n;
    }
    void insert_element();
    void insert_AT_pos();
    void delete_Array();
    void display();
};
Mr_Array<int>a1;
template<class X>
void Mr_Array<X>::insert_element()
{
    int k;
    cout<<"Enter the size of the array\n";
    cin>>capacity;
    arr=new X[a1.get_capacity()];
    cout<<"Enter the array elements\n";
    for(int i=0;i<a1.get_capacity();i++)
    {
        flag=1;
        n++;
        cin>>arr[i];
    }
}
template<class X>
void Mr_Array<X>::insert_AT_pos()
{
  int pos,data;
  if(flag==1)
  {
      capacity=capacity+1;
      if(a1.get_capacity()==n)
      {
          cout<<"Array is full... NO insertion can be performed"<<endl;
          return;
      }
      else
      {
          cout<<"Enter the array position"<<endl;
          cin>>pos;
          if(pos>a1.get_elements())
          {
            cout<<"Please enter the valid array index"<<endl;
            return;
          }
          else
          {
            cout<<"Enter the data which u want to insert"<<endl;
            cin>>data;
            pos=pos-1;
           for(int i=a1.get_elements();i>=pos;i--)
           {
             arr[i]=arr[i-1];
           }
           arr[pos]=data;
           n=n+1;
          }
      }
  }
  else
  {
      cout<<"First insert the elements into array... then proceed"<<endl;
      return;
  }
}
template<class X>
void Mr_Array<X>::delete_Array()
{
    int pos;
    if(flag==1)
    {
         if(a1.get_elements()==0)
         {
           cout<<"NO MORE ELEMENTS IN THE ARRAY"<<endl;
           return;
         }
         cout<<"Enter the array position"<<endl;
          cin>>pos;
          if(pos>a1.get_elements())
          {
            cout<<"Please enter the valid array index"<<endl;
            return;
          }
          pos=pos-1;
          for(int i=pos;i<a1.get_elements();i++)
          {
              arr[i]=arr[i+1];
          }
           n--;
    }
    else
    {
        cout<<"First insert the elements into array... then proceed"<<endl;
        return;
    }
}
template<class X>
void Mr_Array<X>::display()
{
   if(flag==1)
   {
       if(a1.get_elements()==0)
         {
           cout<<"NO MORE ELEMENTS IN THE ARRAY"<<endl;
           return;
         }
      for(int i=0;i<a1.get_elements();i++)
      {
          cout<<arr[i]<<endl;
      }
   }
   else
   {
       cout<<"First create the array ...then proceed\n";
       return;
   }
}
int main()
{
    int p;
    while(1)
    {
        cout<<endl<<endl;
       cout<<"\t\t\t........MENU ITEMS........"<<endl<<endl;;
       cout<<"\t\t\t Enter 1. to insert the elements into the array"<<endl;
       cout<<"\t\t\t Enter 2. to insert element in given position"<<endl;
       cout<<"\t\t\t Enter 3. to delete an element from the array"<<endl;
       cout<<"\t\t\t Enter 4. to display"<<endl;
       cout<<"Enter your choice : ";
       cin>>p;
       switch(p)
       {
         case 1:
         a1.insert_element();
         break;
         case 2:
            a1.insert_AT_pos();
            break;
         case 3:
            a1.delete_Array();
            break;
         case 4:
         a1.display();
         break;
         default:
         cout<<"You entered wrong choice...please try again"<<endl;
         break;
       }
    }
}

