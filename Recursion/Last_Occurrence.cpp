#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007


int solve(vector<int>&arr,int i,int key)
{
	if(i<0)return -1;
	if(arr[i]==key)return i;
	int idx=solve(arr,i-1,key);
    return idx;
}

int main()
{
	vector<int> arr={10,20,100,50,100,23,50,11,2};
	cout<<solve(arr,arr.size()-1,10);
}