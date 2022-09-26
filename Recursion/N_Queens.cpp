#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007

bool isSafe(vector<vector<int>>&v,int row,int col)
{
 for(int i=row-1,j=col;i>=0;i--) if(v[i][j]!=0) return false;
 for(int i=row-1,j=col-1;i>=0 &&j>=0;i--,j--) if(v[i][j]!=0) return false;
 for(int i=row-1,j=col+1;i>=0&& j<v[0].size();i--,j++) if(v[i][j]!=0) return false;
 return true;
}

void solve(vector<vector<int>>&v,int n,int row,string ans)
{
		if(row==n)
		{
			cout<<ans<<"\n";
			return;
		}
		for(int col=0;col<n;col++)
		{   
			if(isSafe(v,row,col))
			{
               v[row][col]=1;
			   solve(v,n,row+1,ans+to_string(row)+"-"+to_string(col)+",");
			   v[row][col]=0;
			}
		}

}
int main()
{   
	int n;
	cin>>n;
	vector<vector<int>>v(n,vector<int>(n));
	solve(v,n,0,"");
	
}