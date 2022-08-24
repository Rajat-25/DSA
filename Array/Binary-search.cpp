#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
int binarySearch(vector<int>&v,int key,int n)
{
	int start=0,end=n-1;
	while(start<=end)
	{
		int mid=start+(end-start)/2;
		if(v[mid]==key){return mid;}
		else if(v[mid]>key)end=mid-1;
		else start=mid+1;
	}
    return -1;
}
int main()
{
vector<int> v={1,1,1,1,1,1,1};
int key;
cin>>key;
int idx=binarySearch(v,key,v.size());
if(idx!=-1)
	cout<<"Element is present at idx: "<<idx<<"\n";
else
	cout<<"Element not found\n";

}