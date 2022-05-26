#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007

int findMaxConsecutiveOnes(vector<int>& nums)
 {
        int mx=0,current_count=0;
        for(auto x:nums)
        {
            if(x==1)
            {
             current_count++;
             mx=max(current_count,mx);
            }
            else current_count=0;
        }
        return mx;
  }
int main()
{
 vector<int>arr={1,0,1,1,0,0,1};
 cout<<findMaxConsecutiveOnes(arr);
 

}