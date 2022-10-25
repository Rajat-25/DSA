#include <bits/stdc++.h>
using namespace std;
bool solve(vector<vector<char>> &board, string word,int sr,int sc,int m,int n,int i)
{
   if(word.length()==i)return true;
   if(sr<0 or sc<0 or sr==m or sc==n or board[sr][sc]!=word[i]) return false;
   char ch=board[sr][sc];
   board[sr][sc]='0';
   bool s1=solve(board,word,sr-1,sc,m,n,i+1);
   bool s2=solve(board,word,sr,sc-1,m,n,i+1);
   bool s3=solve(board,word,sr+1,sc,m,n,i+1);
   bool s4=solve(board,word,sr,sc+1,m,n,i+1);
   board[sr][sc]=ch;
   return s1 or s2 or s3 or s4;
}

bool wordSearch(vector<vector<char>> &board, string word)
{
   int m=board.size(),n=board[0].size();
   for(int i=0;i<m;i++)
   {
      for(int j=0;j<n;j++) if(word[0]==board[i][j] and solve(board,word,i,j,m,n,0))return true;
   }
   return false;
}

int main()
{
   vector<vector<char>> board = {{'a','g','b','c'},
                                 {'q','e','e','l'},
                                 {'g','b','k','s'}}; 
  string word = "geeks";
  cout<<wordSearch(board,word)<<"\n";
}