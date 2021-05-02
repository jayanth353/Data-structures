# Bubble sort

* For every pass the the large number is sorted at last as a bubble float at the top
->1)First Pass: ( 5 1 4 2 8 ) --> ( 1 5 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1.
( 1 5 4 2 8 ) -->  ( 1 4 5 2 8 ), Swap since 5 > 4
( 1 4 5 2 8 ) -->  ( 1 4 2 5 8 ), Swap since 5 > 2
( 1 4 2 5 8 ) --> ( 1 4 2 5 8 ), Now, since these elements are already in order (8 > 5), algorithm does not swap them.
2)Second Pass: ( 1 4 2 5 8 ) --> ( 1 4 2 5 8 )
( 1 4 2 5 8 ) --> ( 1 2 4 5 8 ), Swap since 4 > 2
( 1 2 4 5 8 ) --> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) -->  ( 1 2 4 5 8 )
Now, the array is already sorted, but our algorithm does not know if it is completed. The algorithm needs one whole pass without any swap to know it is sorted.
3)Third Pass: ( 1 2 4 5 8 ) --> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) --> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) --> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) --> ( 1 2 4 5 8 )
->If there are n numbers then no.of passes are n-1
![](https://prepinsta.com/wp-content/uploads/2020/06/Bubble-Sort-In-C-Final.webp)


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
void bubblesort(int arr[],int n)
{
    int i, j; 
   for(i = 0; i < n-1; i++) 
   {
   for(j = 0; j < n-i-1; j++)  
     {
          if(arr[j] > arr[j+1]) 
          swap(&arr[j], &arr[j+1]); 
      }
   }
    cout<<"\nSorted elements:";
    for(int i=0;i<n;i++)
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
    bubblesort(a,n);
}
```

