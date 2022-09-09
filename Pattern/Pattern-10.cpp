#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void solve()
{
	int n;
	cin>>n;
	int sp=n/2,is=-1;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=sp;j++)cout<<"  ";
			cout<<"* ";
			for(int j=1;j<=is;j++)cout<<"  ";
			if(i>1 and i<n) cout<<"*  ";
		   if(i<=n/2)sp--,is+=2;
		   else sp++,is-=2;
			cout<<"\n";
		}
}
int main()
{
	 solve();
}