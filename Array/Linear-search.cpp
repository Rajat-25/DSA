#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
int linearSearch(int arr[],int key,int n)
{
	for(int i=0;i<n;i++)
    {
        if(arr[i]==key) 
            {return i;}
    }
    return -1;
}
int main()
{
 int arr[]={19,-1,5,16,4,8,21,3,9};
 int n=sizeof(arr)/sizeof(int);
 int key;
 cin>>key;
 int idx= linearSearch(arr,key,n);
 if(idx!=-1)
    {
      cout<<"Element found at index: "<<idx<<"\n";
    }
 else
    cout<<"Element not found "<<"\n";
}