#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
vector<string> solve(int n)
{
		if(n==0){
        vector<string>v={""};
        return v;
		}
		if(n<0) {
			vector<string> v;
			return v;
		}

   auto path1=solve(n-1);
   auto path2=solve(n-2);
   auto path3=solve(n-3);

   vector<string> ans;
   for(auto val:path1) ans.push_back("1"+val);
   
   for(auto val:path2) ans.push_back("2"+val);
   
   for(auto val:path3) ans.push_back("3"+val);

   	return ans;
}
int main()
{
	int n;
	cin>>n;
	 auto ans=solve(n);
	 for(auto x:ans)
	 {
	 	cout<<x<<" ";
	 }
	 cout<<"\n";
	 
}