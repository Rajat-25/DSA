#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void solve(string codes[],string inp,string ans)
{
	if(inp=="")
	{
		cout<<ans<<"\n";
		return;
	}
		string str=codes[inp[0]-'0'];
		string rem=inp.substr(1);
		for(int i=0;i<str.size();i++)
		{
		  char ch=str[i];
			solve(codes,rem,ans+ch);
		}
}
int main()
{
	string inp;
	string codes[]={".,","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
	cin>>inp;
	solve(codes,inp,"");
}