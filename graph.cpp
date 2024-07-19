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
    void addEdge(int u,int v)
    {
        g1[u][v]=1;//directed graph

        g1[v][u]=1;//undirected graph


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

 };
 int main()
 {
     graph obj(5);
     obj.addEdge(0,5);
     obj.addEdge(0,1);
     obj.addEdge(5,0);
     obj.addEdge(1,2);
     obj.addEdge(2,3);
     obj.addEdge(3,5);
     obj.addEdge(1,5);
     obj.addEdge(5,2);
obj.print();

 }
