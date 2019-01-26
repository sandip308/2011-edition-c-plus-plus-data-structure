#include<iostream>
#include<algorithm>
#include<array>
#include<vector>
using namespace std;
class Array_list
{
private:
    vector<int>v1;
    int flag=0;
public:
    void insert_element();
    void delete_element();
    void insert_at_pos();
    void sort_Asc();
    void sort_Dsc();
    void display();
};
void Array_list::insert_element()
{
    int p;
    int input=0;
         cout<<"Enter the size of the array"<<endl;
          cin>>p;
        cout<<"Enter the array elements"<<endl;
     for(int i=0;i<p;i++)
     {
         flag=1;
        cin>>input;
       v1.push_back(input);
     }
}
void Array_list::insert_at_pos()
{
    int k,data;
    if(flag==1)
    {
       cout<<"Enter the array position"<<endl;
       cin>>k;
       if(k>v1.size())
       {
           cout<<"Please enter a valid array position"<<endl;
           return;
       }
       else
       {
           cout<<"Enter the array elements"<<endl;
           cin>>data;
           vector<int>::iterator it=v1.begin();
           v1.insert(it+(k-1),data);
       }
    }
    else
    {
        cout<<"First create the array then proceed\n"<<endl;
        return;
    }
}
void Array_list::sort_Asc()
{
    if(flag==1)
    {
        sort(v1.begin(),v1.end());
    }
    else
    {
        cout<<"First insert the element into the array"<<endl;
        return;
    }
}
void Array_list::sort_Dsc()
{
    if(flag==1)
    {
       for(int i=0;i<v1.size();i++)
       {
           for(int j=i+1;j<v1.size();j++)
           {
               if(v1[i]<v1[j])
               {
                   int temp=v1[i];
                   v1[i]=v1[j];
                   v1[j]=temp;
               }
           }
       }
    }
    else
    {
        cout<<"First insert the element into the array"<<endl;
        return;
    }
}
void Array_list::delete_element()
{
    int k;
    if(flag==1)
    {
        cout<<"Enter the array position"<<endl;
        cin>>k;
       if(k>v1.size())
       {
        cout<<"Please enter valid array position"<<endl;
        return;
       }
       else
       {
        v1.erase(v1.begin()+(k-1));
       }
    }
    else
    {
        cout<<"First insert the element into the array\n";
        return;
    }
}
void Array_list::display()
{
    if(flag==1)
    {
        if(v1.size()==0)
       {
        cout<<"NO MORE ELEMENTS....Insert element now"<<endl;
       }
       for(int i=0;i<v1.size();i++)
      {
        cout<<v1[i]<<endl;;
      }
    }
    else
    {
        cout<<"First create the array then proceed\n";
        return;
    }
}
int main()
{
    Array_list a1;
    int n;
    while(1)
    {
         cout<<endl<<endl;
         cout<<"\t\t\t\t......MENU ITEMS......"<<endl;
         cout<<endl;
         cout<<"\t\t\t Enter 1 to insert the element in the array\n";
         cout<<"\t\t\t Enter 2 to delete the element from the array\n";
         cout<<"\t\t\t Enter 3 to insert an element in specific position\n";
         cout<<"\t\t\t Enter 4 to sort the array elements in ascending order\n";
         cout<<"\t\t\t Enter 5 to sort array elements in descending order\n";
         cout<<"\t\t\t Enter 6 to display\n";
         cout<<"Enter your choice : ";
         cin>>n;
        switch(n)
        {
         case 1:
          a1.insert_element();
          break;
         case 2:
            a1.delete_element();
            break;
         case 3:
            a1.insert_at_pos();
            break;
         case 4:
            a1.sort_Asc();
            break;
         case 5:
            a1.sort_Dsc();
            break;
         case 6:
            a1.display();
            break;
         default:
            cout<<"You entered wrong key...please try again"<<endl;
            break;
        }
    }
}
