#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
int solve(int n,int x)
{
	if(!x)return 1;
	return n*solve(n,x-1);
}
int main()
{
	int n,x;
	cin>>n>>x;
	cout<<solve(n,x);
}