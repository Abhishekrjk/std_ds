#include<iostream>
using namespace std;

//create bubbles function with two argument(array, size)
void bubblesort(int arr[],int n)
{
   //iterate pass
   for(int i=0;i<n-1;i++)//pass
   {
       cout<<"pass : "<<i+1<<" ";
       for(int j=0;j < n-i-1;j++)
       {
           if(arr[j]>arr[j+1])
       {
           swap(arr[j],arr[j+1]);
       }

    for (int r=0;r<=1;r++)
    {
      cout<<arr[r]<<"\t";
  }
       }
      cout<<" " <<endl;   }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
     cout<<endl;
}
int main()
{


int arr[5]={3,9,7,5,7};
int size =sizeof(arr)/sizeof(arr[0]);
cout<<"before call bubble sort "<<endl;
print(arr,size);
bubblesort(arr,size);
cout<<"after call  bubble sort "<<endl;
print(arr,size);
}

