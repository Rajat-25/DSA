#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void mergeSortedArray(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
       int k=nums1.size()-1,i=m-1,j=n-1;  
       int ct=0;
       while(j>=0)
       {
           if(i>=0 and nums1[i]>nums2[j])
           	nums1[k--]=nums1[i--];
           else 
           	nums1[k--]=nums2[j--];
       }
    }

int main()
{
	vector<int>nums1 = {0},  nums2 = {1};
	int m = 0, n = 1;
	mergeSortedArray(nums1,m,nums2,n);
	for(auto x:nums1)cout<<x<<" ";
}