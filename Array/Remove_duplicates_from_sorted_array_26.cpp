#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
int removeDuplicatesFromSortedArray(vector<int>& nums) {
        int i=0;

        for(int j=1;j<nums.size();j++)
        {
           if(nums[i]!=nums[j]){
            i++;
            nums[i]=nums[j];
           }
            
        }
        return i+1;
    }

int main()
{
    vector<int >nums={0,0,1,1,1,2,2,3,3,4};
    cout<<removeDuplicatesFromSortedArray(nums)<<"\n";
    for(auto x:nums)cout<<x<<" ";
}