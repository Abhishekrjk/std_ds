#include<iostream>
using namespace std ;
 int main()
 {
    int arr[4]={6,7,2,8};
    int key,j;

     for(int i=1;i<4;i++){
        key=i;
        j=i-1;

     }
     while(j>=0 &&
           arr[j]>key)
            {
              arr[j+1]=arr[j];
              j=j-1;
            }
            arr[j+1]=key;

    for (int k=0;k<4;k++)
    {
      cout<<arr[k]<<"\t";
  }
 }
