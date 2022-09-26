#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007


vector<string> solve(string s)
{
	if(s=="")
	{
		vector<string>temp;
		temp.push_back("");
		return temp;
	}
	char ch=s[0];
	string newStr=s.substr(1);
	auto data=solve(newStr);

	vector<string>res;

	for(auto x:data) res.push_back("_"+x);

	for(auto x:data) res.push_back(x+ch);
	
	return res;	

}

int main()
{
	auto ans=solve("abc");

	for(auto x:ans) cout<<x<<"\n";	
}