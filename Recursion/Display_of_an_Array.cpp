#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void reversePrint(vector<int>&arr,int i)
{
	if(i==arr.size())return;
	reversePrint(arr,i+1);
	cout<<arr[i]<<" ";
}

void solve(vector<int>&arr,int i)
{
	if(i==arr.size())return;
	cout<<arr[i]<<" ";
	solve(arr,i+1);
}
int main()
{
	vector<int> arr={10,20,30,40,50};
	solve(arr,0);
	cout<<"\n";
	reversePrint(arr,0);
}