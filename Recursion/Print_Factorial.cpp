#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
int solve(int n)
{
	if(n==1) return 1;
	return n*solve(n-1);
}
int main()
{
	int n;
	cin>>n;
	cout<<solve(n);
}