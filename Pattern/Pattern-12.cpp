#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void solve()
{
	int n;
	cin>>n;
	int x=0,y=1;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=i;j++) 
			{
				cout<<x<<" ";
				int no=x+y;
				x=y;
				y=no;
			}
			cout<<"\n";
		}
}
int main()
{
	 solve();
}