#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
int longestConsecutive(vector<int>& nums) {
       if(nums.size()<=1)return nums.size();
        unordered_set<int>s;
        for(auto x:nums)s.insert(x);
        int num=0,ct=0,mx=0;
        for(auto x:s)
        {
          if(!s.count(x-1)){
            num=x,ct=0;
            while(s.count(num))++ct,++num;
            mx=max(ct,mx);
          }
        }
        return mx;
    }
int main()
{
     vector<int>temp={9,1,4,7,3,-1,0,5,8,-1,6};
     cout<<longestConsecutive(temp);
}