#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void solve(string str,string ans)
{
	if(str=="")
	{
		cout<<ans<<"\n";
		return;
	}
		
		for(int i=0;i<str.size();i++)
		{
			string s=str.substr(0,i)+str.substr(i+1);
            solve(s,ans+str[i]);
		}
}
int main()
{
	string str;
	cin>>str;
	solve(str,"");
}