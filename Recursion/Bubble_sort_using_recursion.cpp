#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void solve1(int arr[],int n,int j)
{
    if(n==0)return;
    if(j==n){
        solve1(arr,n-1,0);
        return;
    }
        if(arr[j]>arr[j+1])swap(arr[j],arr[j+1]);
        solve1(arr,n,j+1);
}

void solve(int arr[],int n)
{
        if(n==1)return;
        for(int j=0;j<n-1;j++) if(arr[j]>arr[j+1])swap(arr[j],arr[j+1]);
        solve(arr,n-1);
}
int main()
{
     int arr[]={-1,1,-3,2,6,4,13,9,11,-5};
     int n=sizeof(arr)/sizeof(arr[0]);
     // solve(arr,n); // Method 1
     solve1(arr,n-1,0);  //Method 2
     for(int i=0;i<n;i++) cout<<arr[i]<<" ";
     cout<<"\n";
     
}