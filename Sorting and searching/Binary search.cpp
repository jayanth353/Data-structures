/*
Binary Search is a searching algorithm for searching an element in a sorted list or array. Binary Search is efficient than Linear Search algorithm and performs the search
operation in logarithmic time complexity for sorted arrays or lists.

Binary Search performs the search operation by repeatedly dividing the search interval in half. The idea is to begin with an interval covering the whole array. If the value of 
the search key is less than the item in the middle of the interval, narrow the interval to the lower half. Otherwise narrow it to the upper half. Repeatedly check until the
value is found or the interval is empty.
===============================================================================================================================================================================
Algorithm: We basically ignore half of the elements just after one comparison.
1.Compare X with the middle element of the array.
2.If X matches with middle element, we return the mid index.
3.Else If X is greater than the mid element, then X can only lie in right half subarray after the mid element. So we will now look for X in only the right half ignoring the complete left half.
4.Else if X is smaller, search for X in the left half ignoring the right half.
Time Complexity: O(Log N), where N is the number of elements in the array.
*/
#include<bits/stdc++.h>
using namespace std;
/*Iterative function*/
int Bsearch(int n,vector<int> v,int key)
{
  int l=0,h=n-1;
  while(l<=h)
  {
    int mid=(l+h)/2;
      if(v[mid]==key) return mid;
      else if(key>v[mid]) l=mid+1;
      else h=mid-1;
      
  }
  return -1;
}
/* Recursive function 
int Bsearch(vector<int> v,int l,int h,int key)
{
 
  while(l<=h)
  {
    int mid=(l+(h-1))/2;
      if(v[mid]==key) return 1;
      else if(key>v[mid]) return Bsearch(v,mid+1,h,key);
      else return Bsearch(v,l,mid-1,key);
      
  }
  return -1;
}
*/
int main()
{
    int n,key;
    char ch;
    vector<int> v; // int v[10]
    cout<<"Enter size:";
    cin>>n;
    cout<<"\nEnter elements:";
    for(int k=0;k<n;k++)
    {
        int z;
        cin>>z;
        v.push_back(z);
     }
    cout<<"\nAre elements sorted...? y/n";
    cin>>ch;
    if(ch=='n')
    {
        sort(v.begin(),v.end());
    }
    cout<<"Enter search element:";
    cin>>key;
    int r=Bsearch(n,v,key);
    if(r) cout<<"\n Element was found.......! ";
    else cout<<"Element was not found............!!!!";
}
