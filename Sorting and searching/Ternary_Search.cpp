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
