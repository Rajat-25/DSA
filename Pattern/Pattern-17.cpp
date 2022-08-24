#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void solve()
{
	int n,val=1;
	cin>>n;
		for(int i=1;i<=n;i++)
		{

			for(int j=1;j<=n/2;j++)
			{ 
			  if(i!=(n+1)/2) cout<<"  ";
		      else cout<<"* ";
		    }
			for(int j=1;j<=val;j++) cout<<"*  ";
            if(i<=n/2) val++;
            else val--;
			cout<<"\n";
		}
}
int main()
{
	 solve();
}