#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void merge(vector<int>&temp,int s,int mid,int e)
{
   int i=s,j=mid+1;

   vector<int>nu;

   while(i<=mid and  j<=e)
   {
     if(temp[i]>temp[j]) nu.push_back(temp[j++]);
     else nu.push_back(temp[i++]);
   }

   while(i<=mid) nu.push_back(temp[i++]);
   while(j<=e)   nu.push_back(temp[j++]);

   for(int i=s,k=0;i<=e;i++,k++) temp[i]=nu[k];
   
}
void mergeSort(vector<int>&temp,int s,int e)
{
    if(s>=e)return;
    int mid=(s+e)/2;
    mergeSort(temp,s,mid);
    mergeSort(temp,mid+1,e);
    merge(temp,s,mid,e);
}
int main()
{
    vector<int>temp={-1,1,-3,2,6,4,13,9,11,-5};
    mergeSort(temp,0,temp.size()-1);
    for(auto x:temp) cout<<x<<" ";
    
}