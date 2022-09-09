#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007


void solve()
{
	int n,m,size;
	cin>>n>>m;
	size=n;
	int arr[size]={0},i=n-1,j=m-1,cr=0,el=0;

	vector<int>a(n),b(m);
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<m;i++) cin>>b[i];
    size--;

	while(size>=0)
	{
		  el=cr;
		  int val= j>=0?b[j]:0;	 
            if(a[i]+el<val )el+=10+a[i]-val,cr=-1;
            else el+=a[i]-val,cr=0;
		    arr[size]=el;
		    i--,j--,size--;
	}
	int idx=0;
	for( idx=0;idx<n;idx++)if(arr[idx]) break;
		
	for(;idx<n;idx++) cout<<arr[idx]<<" ";
}
int main()
{
	 solve();
}