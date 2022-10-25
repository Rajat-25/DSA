#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &nums,vector<vector<int>>&ans,int i,vector<int>&temp)
{
  if(i==nums.size()){
    ans.push_back(temp);
    return;
  }
  temp.push_back(nums[i]);
  solve(nums,ans,i+1,temp);
  temp.pop_back();
  while(i+1<nums.size() and nums[i]==nums[i+1])i++;
  solve(nums,ans,i+1,temp);
}

vector<vector<int>> uniqueSubsets(vector<int> nums){
    sort(nums.begin(),nums.end());
    vector<int>temp;
    vector<vector<int>>ans;
    solve(nums,ans,0,temp);
    sort(ans.begin(),ans.end());
    return ans;
}

int main()
{
  vector<int>x={8, 1, 8, 6, 8};
  auto ans=uniqueSubsets(x);
  for(auto x:ans)
  {
    for(auto y:x)cout<<y<<" ";
    cout<<"\n";
  }

}