#include<iostream>
#include<cstdlib>
using namespace std;
typedef struct Node
{
   int data;
   struct Node *npx;
}node;
node *Head;
class Xor_list
{
public:
   node* create_XOR_Address(node* , node* );
   void insert_item(node **, int );
   void display(node *Head);
   Xor_list()
   {
      Head=NULL;
   }
};
node* Xor_list::create_XOR_Address(node *a , node *b)
{
   return (node*) ((unsigned int)(a) ^ (unsigned int)(b));
}
void Xor_list::insert_item(node **Head_ref, int data)
{
   node *newnode;
   newnode= new(node);
   newnode->data=data;
   newnode->npx=create_XOR_Address((*Head_ref) , NULL);
   if(*Head_ref!=NULL)
   {
      node *next;
      next = create_XOR_Address((*Head_ref)->npx , NULL);
      (*Head_ref)->npx=create_XOR_Address(newnode,next);
   }
   (*Head_ref)=newnode; //CHANGE THE HEAD;
}
void Xor_list::display(node *Head)
{
   node *curr=Head;
   node *prev=NULL;
   node *next;
   cout<<"The XOR elements are: "<<endl;
   while(curr!=NULL)
   {
      cout<<curr->data<<" ";
      next= create_XOR_Address(prev,curr->npx);
      prev=curr;
      curr=next;
   }
   cout<<endl;
}
int main()
{
   Xor_list x1;
   int item,n,data;
   while(1)
   {
      cout<<"\n\n\n\n";
      cout<<"Enter 1. to insert the elements in list first "<<endl;
      cout<<"Enter 2. to display the list"<<endl;
      cout<<"Enter 3. to exit"<<endl;
      cout<<"Enter your choice: ";
      cin>>n;
      switch(n)
      {
      case 1:
         cout<<"Enter the data which u want to insert"<<endl;
         cin>>item;
         x1.insert_item(&Head,item);
         break;
      case 2:
         x1.display(Head);
         break;
      case 3:
         exit(0);
      default:
         cout<<"You entered wrong number"<<endl;
      }
   }
}

