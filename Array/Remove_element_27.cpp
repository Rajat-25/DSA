#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
int removeElement(vector<int>& nums, int val) {

    //Brute force apprach O(nlogn) 
        // int i=0,j=nums.size()-1,ct=0;
        // while(i<nums.size())
        // {
        //     if(nums[i]==val)nums[i]='_',ct++;
        //     i++;
        // }
        // sort(nums.begin(),nums.end());
        // return j-ct+1;

       // O(n)
       int curr=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[curr++]=nums[i];
            }
        }
        return curr;
    }
int main()
{
    vector<int >nums={0,1,2,2,3,0,4,2};
    
    cout<<removeElement(nums,2)<<"\n";
    for(auto x:nums)cout<<x<<" ";
}