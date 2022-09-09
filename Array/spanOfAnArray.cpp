#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void solve()
{
	int n,mi=INT_MAX,mx=INT_MIN;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		mi=min(mi,a[i]);
		mx=max(mx,a[i]);
	}
	cout<<mx-mi;	
}
int main()
{
	 solve();
}