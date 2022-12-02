#include<bits/stdc++.h>
#include"linkedList.h"
using namespace std;
# define ll long long
# define mod 1000000007
void nextPermutation(vector<int>& nums) {
        int idx1=-1,idx2=-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx1=i;
                break;
            }
        }
        if(idx1==-1){
            sort(nums.begin(),nums.end());
            return ;
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]>nums[idx1]){
                idx2=i;
                break;
            }
        }
        swap(nums[idx1],nums[idx2]);
        idx1++;
        sort(nums.begin()+idx1,nums.end());  
    }
int main()
{  
  int n;
  cin>>n;
  vector<int>nums(n);
  for(int i=0;i<n;i++) cin>>nums[i];
    nextPermutation(nums);
  for(auto x:nums)cout<<x<<" ";

}