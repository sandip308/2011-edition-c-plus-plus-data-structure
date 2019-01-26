#include<iostream>
#include<iomanip>
using namespace std;
template<class T>
class node
{
   public:
   T data;
   node<T> *link;
};
template<class T>
class Linked_list
{
private:
   node<T>*Header;
public:
   Linked_list()
   {
      Header = NULL;
   }
   ~Linked_list()
   {

   }
   void insert_at_end();
   void insert_any();
   void delete_first();
   void delete_last();
   void delete_any(int);
   void display();
};
template<class T>
void Linked_list<T>::insert_at_end()
{
    node<T> *ptr, *t;
    ptr=new node<T>;
    cout<<"Enter a element to be insert end\n";
    cin>>ptr->data;
    ptr->link=NULL;
    if(Header==NULL)
    Header=ptr;
    else
    {
      t=Header;
	  while (t->link!=NULL)
	  	t=t->link;
		  t->link=ptr;
	}
}
template<class T>
void Linked_list<T>::insert_any()
{
   node<T> *temp, *t;
	int X,key;
	temp= new node<T>;
	if(Header==NULL)
   {
      cout<<"Linked list is empty\n";
      return;
   }
   cout<<"Enter the existing data: ";
   cin>>key;
	cout<<"Enter the new node data: ";
	cin>>X;
	temp->link=NULL;
	if(temp==NULL)
	{
		cout<<"Insufficient memory\n";
		exit(0);
	}
	else
	{
		t=Header;
		while(t->data!=key && t->link!=NULL)
		{
			t=t->link;
		}
		if(t->data==key)
		{
			temp->link=t->link;
			t->link=temp;
			temp->data =X;
		}
		else
		cout<<"Key is not found\n";
	}
}
template<class T>
void Linked_list<T>::delete_first()
{
   node<T> *temp;
	if(Header==NULL)
	{
		cout<<"Already linked list empty\n";
		exit(0);
	}
	else
	{
		temp=Header;
	  Header=Header->link;
	  temp->link=NULL;
	  delete temp;
    }
}
template<class T>
void Linked_list<T>::delete_last()
{
  node<T> *ptr, *ptr1;
	ptr=Header;
	if(ptr==NULL)
	{
		cout<<"Link List is empty\n";
		exit(0);
	}
	else if(ptr->link==NULL)
    {
        Header=NULL;
    }
	else
	{
		while(ptr->link!=NULL)
		{
			ptr1=ptr;
			ptr=ptr->link;
		}
		ptr1->link=NULL;
		delete ptr;
	}
}
template<class T>
void Linked_list<T>::delete_any(int key)
{
   node<T> *ptr, *ptr1;
    ptr=Header;
    if(Header==NULL)
    {
        printf("List is empty\n");
        exit(0);
    }
    else
    {
        if(ptr->data==key)
        {
            Header=Header->link;
            ptr->link=NULL;
            delete ptr;
        }
        else
        {
          while(ptr->link!=NULL && ptr->data!=key)
          {
            ptr1=ptr;
            ptr=ptr->link;
          }
           if(ptr->data==key)
           {
              ptr1->link=ptr->link;
              ptr->link=NULL;
              delete ptr;
           }
           else
            cout<<"Key is not found...Try again\n";
      }
    }
}
template<class T>
void Linked_list<T>::display()
{
   node<T> *ptr3;
    if(Header==NULL)
    {
    	cout<<"Linked list is empty\n";
	}
	else
	{
	  ptr3=Header;
    while(ptr3!=NULL)
    {
        cout<<ptr3->data<<" " ;
        ptr3=ptr3->link;
    }
   }
}
int main()
{
   int n,key;
   Linked_list<int>L;
    while(1)
    {
        cout<<"\n\n\n";
        cout<<"\t\t\t 1. to insert data at end position\n";
        cout<<"\t\t\t 2. to insert data at any position\n";
        cout<<"\t\t\t 3. to display the linked list elements\n";
        cout<<"\t\t\t 4. to delete 1st position element from list\n";
        cout<<"\t\t\t 5. to delete last position element from list\n";
        cout<<"\t\t\t 6. to delete any element from linked list\n";
        cout<<"\t\t\t 7. to exit\n";
        cout<<"Enter your choice: ";
        cin>>n;
        switch(n)
        {
        case 1:
            L.insert_at_end();
            break;
        case 2:
            L.insert_any();
            break;
        case 3:
            L.display();
            break;
        case 4:
         L.delete_first();
         break;
        case 5:
         L.delete_last();
         break;
        case 6:
         cout<<"Enter the value that u want to delete: ";
         cin>>key;
         L.delete_any(key);
         break;
        case 7:
            exit(0);
            break;
        default:
            printf("You entered wrong choice\n");
        }
    }
    return 0;
}

