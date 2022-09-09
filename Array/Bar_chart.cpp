#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void solve()
{
	int n,mx=INT_MIN;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		mx=max(mx,a[i]);
	}
	for(int i=mx;i>=1;i--)
	{
		for(int j=0;j<n;j++)
		{
			if(a[j]>=i)cout<<"* ";
			else cout<<"  ";
		}
		cout<<"\n";
	}

}
int main()
{
	 solve();
}