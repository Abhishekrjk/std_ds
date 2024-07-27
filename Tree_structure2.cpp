#include<iostream>
using namespace std ;
 class node
 {
 public:
    int data;
    node *left;
    node *right;
 };
 int main()
{
    int no;
    cout<<"Enter no to add in tree"<<endl;
    cin>>no;

    node *newnode = new node();

    newnode->data=no;
    newnode->left=NULL;
    newnode->right=NULL;
    node *root = new node();
    root->data =10;

   if(root ==NULL)
   {
       root = new node;
       cout<<root->data<<endl;
       cout<<root<<endl;
       cout<<newnode<<endl;


   }
   else {
    if(no < root->data)

    {
       root->left=newnode;
       cout<<"left"<<newnode->data<<endl;
       cout<<root->left<<endl;
       cout<<newnode<<endl;

    }
    else
    {



   root->right=newnode;
   cout<<newnode->data<<endl;
   cout<<root->right<<endl;
   cout<<newnode<<endl;
    }
   }
}

