#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void solve(vector<int>&v,int idx,int sum,string ans,int target)
{
	if(idx==v.size())
	{
		if(sum==target) cout<<ans<<"\n";
		return;
	}	
		string x=to_string(v[idx]);
		solve(v,idx+1,sum+v[idx],ans+x+" ",target);
		solve(v,idx+1,sum,ans,target);
}
int main()
{
	 vector<int> v={10,20,30,40,50};
	 int target;
	 cin>>target;
	 solve(v,0,0,"",target);
}