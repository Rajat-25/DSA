#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void solve()
{
	int n;
	cin>>n;
	int sp=n/2,val=1,cval;
		for(int i=1;i<=n;i++)
		{
			if(i<=n/2) cval=i;
			else cval=n+1-i;
			
			for(int j=1;j<=sp;j++)  cout<<"  ";
			
			for(int j=1;j<=val;j++)
			{
				cout<<cval<<" ";
				if(j<=val/2)cval++;
				else cval--;
			}

			if(i<=n/2)sp--,val+=2;
			else sp++,val-=2;
			cout<<"\n";
		}
}
int main()
{
	 solve();
}