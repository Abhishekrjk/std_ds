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
    node *root = new node();
    root->data =10;
    root->left=NULL;
    root->right=NULL;

   node *n1 = new node();
    root->data =10;
    root->left=NULL;
    root->right=NULL;

        root->left = n1;

        node *n2 =new node();
        n2->data =20;
        n2->left=NULL;
        n2->right=NULL;

        root->right=n2;

           node *n3 =new node();
        n3->data =9;
        n3->left=NULL;
        n3->right=NULL;


       n1->right =n3;

            node *n4 =new node();
        n4->data =18;
        n4->left=NULL;
        n4->right=NULL;

         n2->left=n4;

       cout<<"address of n1"<<root->left<<endl;
       cout<<"address of n2"<<root->left->right<<endl;
       cout<<"address of n2"<<root->right->left<<endl;
       cout<<"address of n2 = "<<root->right->left->data<<endl;

}
