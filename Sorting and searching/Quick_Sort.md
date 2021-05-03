# Quick Sort

* QuickSort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot. There are many different versions of 
  quickSort that pick pivot in different ways.
  1. Always pick first element as pivot.
  2. Always pick last element as pivot (implemented below)
  3. Pick a random element as pivot.
  4. Pick median as pivot.
#### The key process in quickSort is partition(). Target of partitions is, given an array and an element x of array as pivot, put x at its correct position in sorted array and put all smaller elements (smaller than x) before x, and put all greater elements (greater than x) after x. All this should be done in linear time.



![](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2014/01/QuickSort2.png)

```c++
#include<iostream>
using namespace std;
void swap(int *i,int *j)
{
    int t=*i;
    *i=*j;
    *j=t;
    
}
int partition(int arr[], int low, int high)
{
    
    int pivot=arr[high];
    int i=low-1;
    
    for(int  j=low;j<=high-1;j++)
    {
        if(arr[j]<pivot)
        {
            
            i++;
            swap(&arr[i],&arr[j]);
         }
    }
    swap(&arr[high],&arr[i+1]);
    return (i+1);
}
void qsort(int arr[], int low,int high)
{
    if(low<high)
    {
    int part;
    part=partition(arr,low,high);
    qsort(arr,low,part-1);
     qsort(arr,part+1,high);
    }
}
int main()
{
	int arr[100],n;
    cout<<"Enter Array size:";
    cin>>n;
    cout<<"\nArray elements:";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    qsort(arr,0,n-1);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
```
