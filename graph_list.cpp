# include <iostream>
using namespace std;
int max_size=10;
class node
{
  int vertex;
  node *next;
  public:
     node(int v)
     {
     vertex=v;
     next = NULL;
     }
}
class List
{
   node *adjList[max_size];
   int novertext;
   public:
       list()
       {
           novertex=0;
           for(int i=0;i<max_size;i++)
           {
               adjList[i] = NULL;


           }
           novertext=0;
       }
       void addvertex()
       {
           if(novertext >= 0 && novertex < max_size)
           {
               novertex++;
               cout<<"vertex add "<<"\t"<<novertex;

           }
         else
         {
             cout<<" Graph is full"<<novertext<<endl;
         }
       }
       voidaddedge(int src,int dest)
       {
           node *newnode = new node(dest);
           new node->next = adjlist[src-1];
           adjList[src-1]=newnode;

           newnode=new node(scr);
           newnode->next = adjList[dest-1];
           adjList[dest-1]=newnode;
           cout<<src<<" "<<dest<<" "<<"added"<<endl;
       }
       void print()
       {
           for(int j=0;j<max_size;j++)
           {
               node *temp =adjList[j];
               while(temp!=NULL)
               {
                   cout<<temp->vertex<<" ";
                   temp=temp->next;
               }
               cout<<endl;
           }
       }

}
int main()
{
    List obj;
    for( int j=0;j<11;j++)
    {

    }
}
