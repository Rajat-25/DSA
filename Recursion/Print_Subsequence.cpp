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
char ch=str[0];
string rem=str.substr(1);
solve(rem,ans+"");	
solve( rem,ans+ch);

}
int main()
{
	string str;
	cin>>str;
	solve(str,"");
}