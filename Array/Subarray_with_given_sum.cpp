#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007

// O(N2)
vector<int> solve(vector<int>arr,int n,int s)
{
	
	vector<int>ans;
    int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=arr[i];
		for(int j=i+1;j<=n;j++)
		{
			if(sum==s){
				ans={i+1,j};
				return ans;
			}
			else if(sum>s)
			{
				sum=sum-arr[i];
				break;
			}
			sum+=arr[j];
		}
	}
	ans={-1};	
	return ans;
}

// O(n)
vector<int> solve1(vector<int>arr,int n,int s){
         vector<int>ans;
        int sum = 0,start = 0, i = 0;	
   
        while(i <= n) 
        {
            if(sum == s and s>0) {
    			ans.push_back(start+1);
    			ans.push_back(i);
    			return ans;
            } else if(sum > s) {
                sum = sum - arr[start];
                start++;
            } else {
                sum = sum + arr[i];
                i++;
            }
        }
    	ans.push_back(-1);
    	return ans;
}

vector<int>solve2( vector<int>arr,int n,int s){




}
int main()
{
	vector<int> arr={1,2,3,7,5};
	int n=5,s=12;
    auto ans=solve(arr,n,s);
    for(auto x:ans)cout<<x<<" ";
}

