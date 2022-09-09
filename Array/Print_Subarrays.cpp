#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void printSubarrays(vector<int>v)
{
	int n=v.size();
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			for(int k=i;k<=j;k++)
			{
				cout<<v[k]<<" ";
			}
			cout<<"\n";
		}
	}
	
}
int main()
{
vector<int> v={10,20,30};

 printSubarrays(v);
}