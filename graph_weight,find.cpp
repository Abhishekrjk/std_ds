#include <iostream>
using namespace std;
 class graph
 {
     int g1[5][5];
 public:
    int data ;
    graph (int value)
    {
    data = value;
    for(int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            g1[i][j]=0;
        }
    }
    }
    void addEdge(int u,int v,int weight)
    {
        g1[u][v]=weight;//directed graph

        g1[v][u]=weight;//undirected graph


    }
    void print()
    {
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                cout<<g1[i][j]<<" ";

            }
            cout<<endl;
        }

    }
    bool edgeExists(int u,int v)
    {
        return  g1[u][v] !=0;
    }
    void findvertex(int v)
    {
        cout<<" vertex " << v<< "is connected  to ";
        for(int i=0;i<5;i++)
            if(g1[u][v] != 0)
        {
            cout<< i <<" weight "<<g1[v][i]<<")";

        }

    }

 };
 int main()
 {
     graph obj(5);
     obj.addEdge(0,5,8);
     obj.addEdge(0,1,4);
     obj.addEdge(5,0,3);
     obj.addEdge(1,2,5);
     obj.addEdge(2,3,7);
     obj.addEdge(3,5,9);
     obj.addEdge(1,5,3);
     obj.addEdge(5,2,1);
obj.print();
cout<<"edge exists of 4,0"<<"\t"<<(obj.edgeExists(4,0)?"yes":"no");
cout<<endl;
cout<<"edge exists of 4,0"<<"\t"<<(obj.edgeExists(4,3)?"yes":"no");

 obj1.findvertex(0);
 }
