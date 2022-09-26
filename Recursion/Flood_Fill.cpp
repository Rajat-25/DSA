#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void solve(vector<vector<int>>&v,int sr,int sc,int row,int col,string ans)
{
	if(sr<0 or sc<0 or sc==col or sr==row or v[sr][sc]!=0) return;
	
	if(sr==row-1 and sc==col-1)
	{
		cout<<ans<<"\n";
		return;
	}
	v[sr][sc]=-1;
	solve(v,sr-1,sc,row,col,ans+"t");
	solve(v,sr,sc-1,row,col,ans+"l");
	solve(v,sr+1,sc,row,col,ans+"d");
	solve(v,sr,sc+1,row,col,ans+"r");
	v[sr][sc]=0;

}
int main()
{
	int row,col;
	cin>>row>>col;
	vector<vector<int>>v(6,vector<int>(7));
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++) cin>>v[i][j];
	}
	solve(v,0,0,row,col,"");
}