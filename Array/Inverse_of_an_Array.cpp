#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007


void solve()
{
	int n;
	cin>>n;
	vector<int>a(n),b(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		b[a[i]]=i;
	}
	for(auto x:b)
	{
		cout<<x<<" ";
	}
	cout<<"\n";
	
	

}
int main()
{
	 solve();
}