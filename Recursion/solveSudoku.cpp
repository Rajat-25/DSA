// 5 3 0 0 7 0 0 0 0
// 6 0 0 1 9 5 0 0 0
// 0 9 8 0 0 0 0 6 0 
// 8 0 0 0 6 0 0 0 3
// 4 0 0 8 0 3 0 0 1
// 7 0 0 0 2 0 0 0 6
// 0 6 0 0 0 0 2 8 0
// 0 0 0 4 1 9 0 0 5
// 0 0 0 0 8 0 0 7 0


#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007

void printSudoku(vector<vector<int>>&v,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)cout<<v[i][j]<<" ";
        cout<<"\n";
    }
}
bool isSafe(vector<vector<int>>&v,int row,int col,int n,int no)
{
    for(int i=0;i<n;i++) if(v[row][i]==no||v[i][col]==no) return false;

    int sr=(row/3)*3;
    int sc=(col/3)*3;


    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)if(v[sr+i][sc+j]==no){ return false;}
    }

    //  for(int i=sr;i<sr+3;i++)
    // {
    //     for(int j=sc;j<sc+3;j++)if(v[i][j]==no) return false;
    // }
    return true; 
}
bool solveSudoku(vector<vector<int>>&v,int row,int col,int n)
{
  if(row==n){ printSudoku(v,n);return true; }
  if(col==n)return solveSudoku(v,row+1,0,n);
  if(v[row][col]!=0) return solveSudoku(v,row,col+1,n);
  for(int no=1;no<=n;no++)
  {
      if(isSafe(v,row,col,n,no))
      {
        v[row][col]=no;
        bool subProblem=solveSudoku(v,row,col+1,n);
        if(subProblem)return true;
      }
  }
  v[row][col]=0;
  return false;
}
int main()
{
    int n=9;
    vector<vector<int>>v(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)cin>>v[i][j];
    }
     solveSudoku(v,0,0,n);
}