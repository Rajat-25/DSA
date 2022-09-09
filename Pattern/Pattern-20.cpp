#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void solve()
{
	int n;
	cin>>n;
		for(int i=1;i<=n;i++)
		{	
			for(int j=1;j<=n;j++)
			  {
			  		if(j==1 or j==n)cout<<"* ";
			  		else if(i>n/2 and (j==1 or j==n or i==j or i+j==n+1))cout<<"* ";
                    else cout<<"  ";
			  }
			  cout<<"\n";
		}
}
int main()
{
	 solve();
}