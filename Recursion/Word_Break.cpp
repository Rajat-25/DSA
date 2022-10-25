#include <bits/stdc++.h>
using namespace std;

int solve(vector<string> &dictionary,string str)
{
  
  if(str=="") return 1;
  int ans=0;
  for(int i=0;i<str.size();i++)
  {
     string left=str.substr(0,i+1);
     if(find(dictionary.begin(),dictionary.end(),left)!=dictionary.end())
     {
      ans+=solve(dictionary,str.substr(i+1));
     }
  }
  return ans;
}

int wordBreak(string str, vector<string> &dictionary){
   return solve(dictionary,str);
}

int main()
{
   vector<string>dictionary = { "i", "like", "sam", "sung", "samsung", "mobile"};
   string str = "ilikesamsungmobile";
   cout<<wordBreak(str,dictionary);

}