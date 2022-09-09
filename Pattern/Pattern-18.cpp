#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void solve()
{
	int n;
	cin>>n;
	int val=n,os=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=os;j++) cout<<"  ";
			for(int j=1;j<=val;j++)
			{
				if(i>1 and j>1 and j<val and i<=n/2)cout<<"  ";
				else cout<<"* ";
			}
            if(i<=n/2) val-=2,os++;
            else val+=2,os--;
			cout<<"\n";
		}
}
int main()
{
	 solve();
}