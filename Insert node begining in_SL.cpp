#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
template<class T>
class Node
{
   public:
   T data;
   Node *link;
};
template<class T>
class LList
{
   Node<T> *Header;
public:
   LList()
   {
      Header= NULL;
   }
   ~LList()
   {

   }
   void insert_at_begining();
   void print();
};
template<class T>
void LList<T>::insert_at_begining()
{
   Node<T> *new_node, *ptr;
   new_node= new Node<T>;
	cout<<"Enter a new node element\n";
	cin>>new_node->data;
	new_node->link=NULL;
	if(Header==NULL)
	Header=new_node;
	else
	{
		ptr=Header;
		new_node->link=ptr;
		Header=new_node;
	}
}
template<class T>
void LList<T>::print()
{
   Node<T> *ptr3;
    if(Header==NULL)
    {
    	cout<<"Linked list is empty\n";
	}
	else
	{
	  ptr3=Header;
    while(ptr3!=NULL)
    {
        cout<<ptr3->data<<endl;
        ptr3=ptr3->link;
    }
   }
}
int main()
{
   int n;
   LList<int> L;
    while(1)
    {
        cout<<"\t\t 1. to insert data at begining\n";
        cout<<"\t\t 2. to display the linked list elements\n";
        cout<<"\t\t 3. to exit\n";
        cout<<"Enter your choice: ";
        cin>>n;
        switch(n)
        {
        case 1:
            L.insert_at_begining();
            break;
        case 2:
            L.print();
            break;
        case 3:
            exit(0);
            break;
        default:
            cout<<"You entered wrong choice\n";
        }
    }
    return 0;
}
