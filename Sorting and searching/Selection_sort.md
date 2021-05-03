# Selection sort

* The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. 
The algorithm maintains two subarrays in a given array.
 1. The subarray which is already sorted.
 2. Remaining subarray which is unsorted.
* In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray.
 
 
 ![](https://static.packt-cdn.com/products/9781785888731/graphics/image_13_007-1.jpg)
 
 ```c++
#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;

        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
    cout<<"\nSorted Array:";
     for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
 
int main()
{
	int a[100],n;
    cout<<"Enter Array size:";
    cin>>n;
    cout<<"\nArray elements:";
    for(int i=0;i<n;i++)
    cin>>a[i];
   selectionSort(a,n);
}

```
### Time Complexity: O(N^2),where N is size of the array
