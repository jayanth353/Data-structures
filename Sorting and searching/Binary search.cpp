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
