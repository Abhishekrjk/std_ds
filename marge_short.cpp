#include<iostream>
using namespace std;
void merge(int arr[],int low,int high,int mid)
{
	int i=low;
	int j = mid +1;
	int k = low;
	int nArray[high];
	while(i <=mid && j <=high)
	{
		if(arr[i] < arr[j])
		{
			nArray[k]=arr[i];
			i++;
		    k++;
		}
		else
		{
			nArray[k] =arr[j];
			j++;
			k++;
		}
	}
	while(i <=mid)
	{
		nArray[k] =arr[i];
		i++;
		k++;
	}
	while(j <=high)
	{
		nArray[k] =arr[j];
		j++;
		k++;
	}
	for (i = low; i < k; i++)
	{
        arr[i] = nArray[i];
    }

}
void mergeSort(int arr[],int low,int high)
{
	int mid;
	if(low < high)
	{
	mid = (low + high)/2;
	mergeSort(arr,low,mid);
	mergeSort(arr,mid+1,high);
	merge(arr,low,high,mid);
	}

}
int main()
{
	 int myarray[10], num;
    cout<<"Enter number of elements to be sorted:";
    cin>>num;
    cout<<"Enter "<<num<<" elements to be sorted:";
    for (int i = 0; i < num; i++)
	{
	 cin>>myarray[i];
    }
    mergeSort(myarray, 0, num-1);
    cout<<"Sorted array\n";
    for (int i = 0; i < num; i++)
    {
        cout<<myarray[i]<<"\t";
    }
}
