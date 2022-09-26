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
	int  fi=str[0]-'0';
	char x='a'+fi-1;
	int si= stoi(str.substr(0,2));
	char y='a'+si-1;

    if(fi!=0)solve(str.substr(1),ans+x);
    if(si>=10 and si<=26)solve(str.substr(2),ans+y);
}
int main()
{
	string num;
	cin>>num;
	solve(num,"");
}