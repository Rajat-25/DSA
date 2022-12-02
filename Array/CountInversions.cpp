#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007

long long merge(vector<long long>&arr,int l,int mid,int h){
    vector<long long>curr(h-l+1);
    int i=l,j=mid,k=0;
    long long inv=0;
    while(i<mid and j<=h)
    {
     if(arr[i]<=arr[j]) curr[k++]=arr[i++];
     else {
        inv+=(mid-i);
        curr[k++]=(arr[j++]);
    }
    }
    while(i<mid)curr[k++]=arr[i++];
    while(j<=h)curr[k++]=arr[j++];
    for(int i=l,k=0;i<=h;i++,k++)arr[i]=curr[k];
    return inv;
}

int inversionCount(vector<long long>&arr,int l,int h){
   
   long long int inv=0;
    if(l<h){
        int mid=(l+h)/2;
        inv+=inversionCount(arr,l,mid);
        inv+=inversionCount(arr,mid+1,h);
        inv+=merge(arr,l,mid+1,h);
    }
    return inv;
}

int main()
{
    int n;
    cin>>n;
    vector<long long>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<inversionCount(arr,0,n-1)<<"\n";

}