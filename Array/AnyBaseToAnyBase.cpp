#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
ll decimalToAnyBase(int B2,int N)
{
	ll ans=0,p=1;
    while(N)
    {
    	ll rem=N%B2;
    	N=N/B2;
    	ans+=rem*p;
    	p=10*p;
    }
    return ans;
}
int anyBaseToDecimal(int B1,int N)
{
	int ans=0,p=1;
    while(N)
    {
    	int rem=N%10;
    	N=N/10;
    	ans+=rem*p;
    	p=B1*p;
    }
    return ans;
}
void solve()
{
		int B1,B2,N;
		cin>>B1>>B2>>N;
		int num=anyBaseToDecimal(B1,N);
		ll ans=decimalToAnyBase(B2,num);
		cout<<ans;
}
int main()
{
	 solve();
}