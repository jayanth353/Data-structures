# Ternary Search

* Ternary Search :It is a Divide and Conquer Algorithm used to perform search operation in a sorted array. This algorithm is similar to the Binary Search algorithm but rather 
than dividing the array into two parts, it divides the array into three equal parts.In this algorithm, the given array is divided into three parts and the key (element to be
searched) is compared to find the part in which it lies and that part is further divided into three parts.We can divide the array into three parts by taking mid1 and mid2 which
can be calculated as shown below. Initially, l and r will be equal to 0 and N-1 respectively, where N is the length of the array.
mid1 = l + (r-l)/3
mid2 = r – (r-l)/3
=
* Algorithm:
1.First, we compare the key with the element at mid1. If found equal, we return mid1.
2.If not, then we compare the key with the element at mid2. If found equal, we return mid2.
3.If not, then we check whether the key is less than the element at mid1. If yes, then recur to the first part.
4.If not, then we check whether the key is greater than the element at mid2. If yes, then recur to the third part.
5.If not, then we recur to the second (middle) part.
* Time Complexity: O(Log3N), where N is the number of elements in the array.


![](https://media.geeksforgeeks.org/wp-content/uploads/ternaryS-3.png)


#include<bits/stdc++.h>
using namespace std;
/*Recursive function
int TernarySearch(vector<int> v,int l,int r,int key)
{
  
 if(r>=l)
  {
   
      int mid1=l+(r-l)/3;
      int mid2=r-(r-l)/3;
      if(v[mid1]==key) return 1;
      if(v[mid2]==key) return 1;
      if(key<v[mid1]) return TernarySearch(v,l,mid1-1,key);
      else if(key>v[mid2]) return TernarySearch(v,mid2+1,r,key);
      else return TernarySearch(v,mid1+1,mid2-1,key);
      
  }
  return -1;
}
*/
/*Iterative function*/

int TernarySearch(vector<int> v,int l,int r,int key)
{
  
 while(r>=l)
  {
   
      int mid1=l+(r-l)/3;
      int mid2=r-(r-l)/3;
      if(v[mid1]==key) return 1;
      if(v[mid2]==key) return 1;
      if(key<v[mid1]) r=mid1-1;
      else if(key>v[mid2]) l=mid2+1;
      else  
      {
          l=mid1+1;
          r=mid2-1;
      }
      
  }
  return -1;
}

int main()
{
    int n,key;
    char ch;
    vector<int> v;
    cout<<"Enter size:";
    cin>>n;
    cout<<"\nEnter elements:";
    for(int k=0;k<n;k++)
    {
        int a;
        cin>>a;
        v.push_back(a);
     }
    cout<<"\nAre elements sorted...? y/n";
    cin>>ch;
    if(ch=='n')
    {
        sort(v.begin(),v.end());
    }
    cout<<"Enter search element:";
    cin>>key;
    int r=TernarySearch(v,0,n,key);
    if(r==1) cout<<"\n Element was found ";
    else cout<<"Element was not found";
}
