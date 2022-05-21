#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
int partition(vector<int>&v,int start,int end)
{
   int pivot=v[start],i=start,j=end;
	while(i<j)
	{
		while(v[i]<=pivot){i++;}
		while(v[j]>pivot){j--;}
		if(i<j)
		{
			swap(v[i],v[j]);
		}
	}
swap(v[start],v[j]);
return j;
}
void quickSort(vector<int>&v,int start,int end)
{
	if(start<end)
	{
		int index=partition(v,start,end);
		quickSort(v,start,index-1);
		quickSort(v,index+1,end);
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
    quickSort(v,0,v.size()-1);
    for(auto x:v)
   {
   	cout<<x<<" ";
   }
}

