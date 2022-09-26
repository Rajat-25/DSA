#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void solve(int num,int ct,string ans)
{
	if(ct==num)
	{
		cout<<ans<<"\n";
		return;
	}
	for(int i=1;i<=num-ct;i++) solve(num,ct+i,ans+to_string(i));
}
int main()
{
	int num;
	cin>>num;
	solve(num,0,"");
}