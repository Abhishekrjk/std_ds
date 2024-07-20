#include <iostream>
using namespace std;
class node
{
public:
    int data ;
    node* lnode;
    node* rnode;
    node(int value)
    {
        data=value;
        lnode = NULL;
        rnode = NULL;
    }
};
node* insert(node *root,int data)
{
if(root==NULL)
{
    return new node(data);
}
if(data<root->data)
{
    root->lnode = insert(root->lnode,data);
}
else if(data>root->data)
{
    root->rnode=insert(root->rnode,data);
}
return root;

}
void inOrder(node *root)
{
    if(root!=NULL)
    {
        inOrder(root->lnode);
        cout<<root->data<<"  ";
        inOrder(root->rnode);
    }
}
int main()
{
    node *root=NULL;
    root = insert(root,50);//creating root element
    insert(root,60);
    insert(root,40);
    insert(root,20);
    insert(root,80);
    insert(root,35);
    insert(root,70);
    inOrder(root);
}
