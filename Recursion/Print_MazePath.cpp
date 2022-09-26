#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
int ct=0;
void solve(int sr,int sc,int dr,int dc,string ans )
{
	if(sr==dr and sc==dc)
	{
		cout<<ans<<"\n";
		return;
	}	
	if(sc<dc)
	{
		solve(sr,sc+1,dr,dc,ans+"h");
	}
	if(sr<dr)
	{
		solve(sr+1,sc,dr,dc,ans+"v");
	}

}
int main()
{
	int sr,sc,dr,dc;
	cin>>sr>>sc>>dr>>dc;
	solve(sr,sc,dr,dc,"");
}