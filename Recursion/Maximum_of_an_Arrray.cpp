#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007

// int  solve1(vector<int>&arr,int i,int mx)
// {
// 	if(i==arr.size())return mx;
// 	if(arr[i]>mx)mx=arr[i];
// 	solve1(arr,i+1,mx);
// }

int solve(vector<int>&arr,int i,int mx)
{
	if(i==arr.size())return mx;
	int ans=solve(arr,i+1,mx);
    return arr[i]>ans?arr[i]:ans;
}

int main()
{
	vector<int> arr={130,20,10,30,50,40};
	cout<<solve(arr,1,arr[0]);
}