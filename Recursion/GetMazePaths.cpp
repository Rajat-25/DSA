#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
vector<string> solve(int sr,int sc,int dr,int dc)
{ 

   if(sr==dr and sc==dc)
   {
   	vector<string>temp={""};
   	return temp;
   }
		if(sr>dr or sc>dc)
		{ 
			vector<string> temp;
			return temp;
		}

    auto hpath=solve(sr,sc+1,dr,dc);
		auto vpath=solve(sr+1,sc,dr,dc);
		vector<string>ans;
		for(auto val:hpath) ans.push_back("h"+val);
		for(auto val:vpath) ans.push_back("v"+val);
		return ans;

}
int main()
{
	int sr,sc,dr,dc;
	cin>>sr>>sc>>dr>>dc;
	auto ans=solve(sr,sc,dr,dc);
	for(auto x:ans)cout<<x<<" ";
	cout<<"\n";	 
}