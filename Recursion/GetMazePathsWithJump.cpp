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
	
		vector<string>ans;
   
   for(int i=1;i<=dc-sc;i++)
   {
     auto hpath=solve(sr,sc+i,dr,dc);
     for(auto val:hpath)ans.push_back("h"+to_string(i)+val);
   }
   for(int i=1;i<=dr-sr;i++)
   {
     auto vpath=solve(sr+i,sc,dr,dc);
     for(auto val:vpath)ans.push_back("v"+to_string(i)+val);
   }
   for(int i=1;i<=dc-sc and i<=dr-sr;i++)
   {
     auto dpath=solve(sr+i,sc+i,dr,dc);
     for(auto val:dpath)ans.push_back("d"+to_string(i)+val);
   }
   
		return ans;

}
int main()
{
	int sr,sc,dr,dc;
	cin>>sr>>sc>>dr>>dc;
	auto ans=solve(sr,sc,dr,dc);
	for(auto x:ans)cout<<x<<"\n";
	cout<<"\n";	 
}