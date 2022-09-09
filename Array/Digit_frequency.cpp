#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void solve(ll n,ll key)
{
	    int ct=0;
		while(n)
		{
			int rem=n%10;
			n=n/10;
			if(rem==key)ct++;
		}
         cout<<ct;
}
int main()
{
	ll n,key;
	cin>>n>>key;
	solve(n,key);
}