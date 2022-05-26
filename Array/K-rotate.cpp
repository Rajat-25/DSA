#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void reverse(vector<int>&arr,int s,int e)
{
	while(s<e) 
		swap(arr[s++],arr[e--]);
}
void kRotate(vector<int>&arr,int k)
{
	int n=arr.size(),d=n-k;
	reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}

int main()
{
 vector<int> arr={1,2,3,4,5,6,7};
	kRotate(arr,3);
	for(auto x:arr)
	{
		cout<<x<<" ";
	}
}