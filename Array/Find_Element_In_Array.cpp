#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void solve()
{
	int n,key,ans=-1;
	cin>>n>>key;
	vector<int>a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(key==a[i]){ans=i;break;}
	}
	cout<<ans;	
}
int main()
{
	 solve();
}