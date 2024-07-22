#include <iostream>
using namespace std;
class node
{public:
    int data;
    node *left;
    node *right;
    node(int value)
    {
        data=value;
        left=NULL;
        right=NULL;
    }

} ;
node * insert(node *root,int data)
{
    if(root==NULL)
    {
       return new node(data);
    }
    if(data<root->data)
    {
        root->left=insert(root->left,data);

    }
    else if(data>root->data)
    {
        root->right=insert(root->right,data);
    }

return root;
}
void inOrder(node *root)
{
   if(root!=NULL)
   {
        inOrder(root->left);
    cout<<root->data<<"  ";
     inOrder(root->right);
   }
}
void preOrder(node *root)
{
   if(root!=NULL)
   {
        cout<<root->data<<"  ";
    preOrder(root->left);
    preOrder(root->right);

   }
}
void postOrder(node *root)
{
if(root!=NULL)
{


    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<"  ";
}
}
void *findmin(node *root)
{
    while(root->left!=NULL)
    {
        root=(root->left);

    }
     cout<<root->data<<endl;
}
void *findmax(node *root)
{
    while(root->right!=NULL)
    {
        root=(root->right);

    }
     cout<<root->data<<endl;
}
 node* findvalue(node *root,int value)
 {
     if(root==NULL||root->data==value)
     {
      return root;
     }
      if(value < root->data)
      {
          root=findvalue(root->left,value);
      }
      else if(value > root->data)
      {
          root=findvalue(root->right,value);
      }

      else
      {
          cout<<"This value is not present in tree"<<endl;
      }
 }
int main()
{
    node *root=NULL;
    root = insert(root,50);//create new root
    insert (root,12);
    insert (root,20);
    insert (root,22);
    insert (root,25);
    insert (root,32);
    insert (root,42);
    insert (root,52);
    insert (root,92);
    insert (root,45);
    insert (root,55);
    insert (root,27);

 node*n=findvalue(root,72);
    cout<<n->data<<endl;

 findmax(root);
    cout<<endl;
    findmin(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
     preOrder(root);
    cout<<endl;
     postOrder(root);
    cout<<endl;

}
