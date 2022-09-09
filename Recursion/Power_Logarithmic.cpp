#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
int solve(int n,int x)
{
	if(!x)return 1;
	if(x & 1) return n*solve(n,x/2)*solve(n,x/2);
    else return solve(n,x/2)*solve(n,x/2);
	
}
int main()
{
	int n,x;
	cin>>n>>x;
	cout<<solve(n,x);
}