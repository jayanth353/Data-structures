# Insertion sort

* Insertion Sort is an In-Place sorting algorithm. This algorithm works in a similar way of sorting a deck of playing cards.The idea is to start iterating from the second element 
  of array till last element and for every element insert at its correct position in the subarray before it.In the below image you can see, how the array [4, 3, 2, 10, 12, 1, 5, 6] is being sorted in increasing order following the insertion sort algorithm.


  ![](https://media.geeksforgeeks.org/wp-content/uploads/insertionsort.png)
 
 Algorithm:

* Step 1: If the current element is 1st element of array, it is already sorted.
* Step 2: Pick next element
* Step 3: Compare the current element will all elements in the sorted sub-array before it.
* Step 4: Shift all of the elements in the sub-array before the current element which are greater than the curren element by one place and insert the current element 
          at the new empty space.
* Step 5: Repeat step 2-3 until the entire array is sorted.

 
 ```c++
 #include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) 
{ 
   int i, key, j; 
   for (i = 1; i < n; i++) 
   { 
       key = arr[i]; 
       j = i-1; 
  
       /* Move elements of arr[0..i-1], that are 
          greater than key, to one position ahead 
          of their current position */
       while (j >= 0 && arr[j] > key) 
       { 
           arr[j+1] = arr[j]; 
           j = j-1; 
       } 
       arr[j+1] = key; 
   } 
    cout<<"\nSorted array:";
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
} 

int main()
{
	int a[100],n;
    cout<<"Enter Array size:";
    cin>>n;
    cout<<"\nEnter Array elements:";
    for(int i=0;i<n;i++)
    cin>>a[i];
    insertionSort(a,n);
}

 ```
 
 ### Time Complexity: O(N^2), where N is the size of the array.
