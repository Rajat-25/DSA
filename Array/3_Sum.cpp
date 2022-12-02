#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
vector<vector<int>> solve(){
  int n;
  cin>>n;
  vector<int>nums(n);
  for(int i=0;i<n;i++)cin>>nums[i];
  
  sort(nums.begin(),nums.end());
  int target=0,val=0;
  vector<vector<int>>temp;
  for(int i=0;i<n-2;i++)
  {
    if(i==0 or nums[i]!=nums[i-1]){  
       target=-nums[i];
        for(int j=i+1,k=n-1;j<k;){ 
           val=nums[j]+nums[k];
          if(val==target){
            temp.push_back({nums[i],nums[j],nums[k]});
            while(j<k and nums[j]==nums[j+1] )j++;
            while(j<k and nums[k]==nums[k-1] )k--;
            j++,k--;
          }
          else if(val>target)k--;
          else j++;
      }
    }
}
  return temp;

}
int main()
{
auto ans=solve();
for(auto x:ans)
{
  for(auto y:x)cout<<y<<" ";
    cout<<"\n";
}
}