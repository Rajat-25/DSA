#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void solve()
{
	int n;
	cin>>n;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=i-1;j++)cout<<"  ";
			for(int j=1;j<=n-i+1;j++)cout<<"* ";
			cout<<"\n";
		}
}
int main()
{
	 solve();
}