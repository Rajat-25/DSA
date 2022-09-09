#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void printSubsets()
{
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int lim=pow(2,n);
	for(int i=0;i<lim;i++)
	{
		string ans;
		int temp=i;
		for(int j=n-1;j>=0;j--)
		{
			int r=temp%2;
			temp/=2;
			if(!r)ans="- "+ans;
			else ans=to_string(arr[j])+" "+ans;
		}
		cout<<ans<<"\n";
	}
}
int main()
{
 printSubsets();
}