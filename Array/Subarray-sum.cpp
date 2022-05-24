#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007

//O(N2)
void subArraySum2(vector<int>&v)
{
	int n=v.size(),sum=INT_MIN;
	vector<int> arr(n);
	arr[0]=v[0];
	for(int i=1;i<n;i++)
	{
		arr[i]=arr[i-1]+v[i];
	}

	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			int csum=i>0?arr[j]-arr[i-1]:arr[j];
			sum=max(sum,csum);

		}
	}
	cout<<sum<<" \n";

}

// O(N3)
void subArraySum1(vector<int>&v)
{
	int sum=0,n=v.size();

	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			int csum=0;
			for(int k=i;k<=j;k++)
			{
				csum+=v[k];
			}
			sum=max(csum,sum);
		}
	}
	cout<<sum<<" \n";
}


// using Kadane Algo O(n)
void subArraySum3(vector<int>&v)
{
	int csum=0,msum=0;
	for(auto x:v)
	{
		csum=csum+x;
		if(csum<x)csum=x;
		msum=max(msum,csum);
	}

	// for(auto x:v)
	// {
	// 	csum=csum+x;
	// 	if(csum<0)csum=0;
	// 	msum=max(csum,msum);
	// }
	
	cout<<msum;

}
int main()
{
vector<int> v={3,1,-4,5,-4};
subArraySum3(v);
}
