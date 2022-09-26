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
	for(int i=1;i<=dc-sc;i++) solve(sr,sc+1,dr,dc,ans+"h"+to_string(i));
	for(int i=1;i<=dr-sr;i++) solve(sr+1,sc,dr,dc,ans+"v"+to_string(i));
	for(int i=1;i<=dr-sr and i<=dc-sc;i++) solve(sr+1,sc+1,dr,dc,ans+"d"+to_string(i));
}
int main()
{
	int sr,sc,dr,dc;
	cin>>sr>>sc>>dr>>dc;
	solve(sr,sc,dr,dc,"");
}