#include<bits/stdc++.h>
using namespace std;
int linearSearch(int n,vector<int> v,int key)
{
    for(int i=0;i<n;i++)
    {
        if(v[i]==key) return i;
    }
    return -1;
}
int main()
{
    vector<int> v;
    int n,key;
    cout<<"Enter size:";
    cin>>n;
    cout<<"\nEnter elements:";
    for(int j=0;j<n;j++)
    {
        int t;
        cin>>t;
        v.push_back(t);
    }
    cout<<"\n Enter key :";
    cin>>key;
    int r=linearSearch(n,v,key);
    if(r>0) cout<<"\n Element is founded at "<<r<<"th index";
    else cout<<"Element was not found";
    
}
