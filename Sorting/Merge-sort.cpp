#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007

void merge(vector<int>&arr,int start,int mid,int end)
{
	vector<int>temp;
	int i=start, j=mid+1;
	while(i<=mid and j<=end)
	{
		if(arr[i]<=arr[j])
		{
			temp.push_back(arr[i++]);
		}
		else
		{ 
			temp.push_back(arr[j++]);
		}
	}
	while(i<=mid)
	{
		temp.push_back(arr[i++]);
	}
	while(j<=end)
	{
		temp.push_back(arr[j++]);
	}
	for(int i=start,j=0;i<=end;i++)
	{
      arr[i]=temp[j++];
	}
}
void mergeSort(vector<int>&a,int l,int r){
	if(l<r)
	{
		int mid=l+(r-l)/2;
		mergeSort(a,l,mid);
		mergeSort(a,mid+1,r);
		merge(a,l,mid,r);
	}
}
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
   mergeSort(v,0,v.size()-1);
   for(auto x:v)
   {
   	cout<<x<<" ";
   }

}