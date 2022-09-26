#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007


int solve(vector<int>&arr,int i,int key)
{
	if(i==arr.size())return -1;
	if(arr[i]==key)return i;
	int idx=solve(arr,i+1,key);
    return idx;
}

int main()
{
	vector<int> arr={13,20,10,50,100};
	cout<<solve(arr,0,10);
}