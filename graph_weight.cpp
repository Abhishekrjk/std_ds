#include <iostream>
using namespace std;
 class graph
 {
     int g1[6][6];
 public:
    int data ;
    graph (int value)
    {
    data = value;
    for(int i=0;i<6;i++)
    {
        for (int j=0;j<6;j++)
        {
            g1[i][j]=0;
        }
    }
    }
    void addEdge(int u,int v,int weight)
    {
        g1[u][v]=weight;//directed graph
        g1[u][v]=weight;//directed graph




    }
    void print()
    {
        for(int i=0;i<6;i++)
        {
            for(int j=0;j<6;j++)
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
     obj.addEdge(0,1,5);
     obj.addEdge(0,2,7);
     obj.addEdge(0,3,1);
     obj.addEdge(0,4,9);
     obj.addEdge(1,0,6);
     obj.addEdge(1,3,4);
     obj.addEdge(2,0,8);
     obj.addEdge(2,3,2);
     obj.addEdge(2,4,4);
     obj.addEdge(2,5,6);
     obj.addEdge(3,1,2);
     obj.addEdge(3,0,5);
     obj.addEdge(3,5,6);
     obj.addEdge(3,2,4);
     obj.addEdge(4,0,3);
     obj.addEdge(4,2,7);
     obj.addEdge(5,2,1);
     obj.addEdge(5,3,8);
obj.print();

 }
