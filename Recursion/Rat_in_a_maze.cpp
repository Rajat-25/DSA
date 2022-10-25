#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007

void solve(vector<vector<int>> &m,int sr,int sc,int n,vector<string>&ans,string str)
{

  if(sr==n or sc==n or sr<0 or sc<0 or m[sr][sc]!=1)return;
  if(sr==n-1 and sc==n-1)
  { 
    ans.push_back(str);
  	return;
  }
  m[sr][sc]=0;
  solve(m,sr-1,sc,n,ans,str+'U');
  solve(m,sr+1,sc,n,ans,str+'D');
  solve(m,sr,sc-1,n,ans,str+'L');
  solve(m,sr,sc+1,n,ans,str+'R');
   m[sr][sc]=1;

}
vector<string> solve1(vector<vector<int>> &m, int n) {
    vector<string>ans;
    solve(m,0,0,n,ans,"");
    
    if(!ans.size())
    {
    	vector<string>x={"-1"};
    	return x;
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main()
{ 
	int n;
	cin>>n;
    vector<vector<int>>m (n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)cin>>m[i][j];
    }

	 auto ans=solve1(m,n);
	 for(auto x:ans)cout<<x<<"\n";

}