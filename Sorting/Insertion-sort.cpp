#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void insertionSort(vector<int>&v,int n)
{
	for(int i=1;i<n;i++)
	{
		int curr=v[i];
		int prev=i-1;
		while(prev>=0 and v[prev]>curr)
		{
			v[prev+1]=v[prev];
			prev--;
		}
		v[prev+1]=curr;
	}
}
int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
   insertionSort(v,n);
	for(auto x:v)
	{
		cout<<x<<" ";
	}

}