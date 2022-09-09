#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
ll solve(int n,int src,int dest,int helper)
{
	    ll x=1;
		if(n==1)
		{
			cout<<"Move disk "<<n<<" from rod "<<src<<" to rod "<<dest<<"\n";
			return 1;
		}
		 x+=solve(n-1,src,helper,dest);
		cout<<"Move disk "<<n<<" from rod "<<src<<" to rod "<<dest<<"\n";
		 x+=solve(n-1,helper,dest,src);
		return x;

}
int main()
{
	int n,src,helper,dest;
	cin>>n;
	cin>>src>>helper>>dest;
	cout<<solve(n,src,dest,helper);
}