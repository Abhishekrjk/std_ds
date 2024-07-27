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
void preOrder(node *root)
{
    if(root!=NULL)
    {
        cout<<root->data<<"  ";
        preOrder(root->lnode);
        preOrder(root->rnode);


    }
}
void postOrder(node *root)
{
    if(root!=NULL)
    {
        postOrder(root->lnode);

        postOrder(root->rnode);
         cout<<root->data<<"  ";
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
    insert(root,15);
    insert(root,28);
    insert(root,25);
    insert(root,55);
    insert(root,79);

    inOrder(root);
    cout<<endl;
    preOrder(root);
    cout<<endl;
    postOrder(root);
    cout<<endl;
}
