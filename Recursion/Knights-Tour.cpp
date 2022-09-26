#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void display(vector<vector<int>>&chess)
{
  int n=chess.size();
  for(int i=0;i<n;i++)
  {
  	for(int j=0;j<n;j++) cout<<chess[i][j]<<" ";
  	cout<<"\n";
  }
  cout<<"\n";
}

void solve(vector<vector<int>>&chess,int row,int col,int ms)
{ 
	if(row<0||col<0||row>=chess.size()|| col>=chess.size()|| chess[row][col]!=0) return;
	
	 if(ms==(chess.size()*chess.size()))
	 {
	 	chess[row][col]=ms;
	 	display(chess);
	 	chess[row][col]=0;
	 	return;
	 }

	chess[row][col]=ms;
	solve(chess,row-2,col+1,ms+1);
	solve(chess,row-1,col+2,ms+1);
	solve(chess,row+1,col+2,ms+1);
	solve(chess,row+2,col+1,ms+1);
	solve(chess,row+2,col-1,ms+1);
	solve(chess,row+1,col-2,ms+1);
	solve(chess,row-1,col-2,ms+1);
	solve(chess,row-2,col-1,ms+1);
	chess[row][col]=0;

}
int main()
{   
	int n;
	cin>>n;
	vector<vector<int>>chess(n,vector<int>(n));
	int row,col;
	cin>>row>>col;
	solve(chess,row,col,1);
}