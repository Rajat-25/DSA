#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007


vector<int> solve(vector<int>&arr,int i,int key,vector<int>&temp)
{
	if(i==arr.size()){
		return temp;
	}
	if(arr[i]==key)temp.push_back(i);
	auto ans=solve(arr,i+1,key,temp);
	return ans;	
}

int main()
{
	vector<int> arr={10,20,10,50,10,23,50,10,2};
	vector<int>temp;
	auto ans=solve(arr,0,10,temp);
	for(auto x:ans)
	{
		cout<<x<<" ";
	}
	cout<<"\n";
	
}