#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void solve(int n)
{
	if(!n) return;
	cout<<n<<"\n";	
	solve(n-1);
}
int main()
{
	int n;
	cin>>n;
	solve(n);
}