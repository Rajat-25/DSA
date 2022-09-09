#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void solve()
{
	int n,m,size,size1;
	cin>>n>>m;
	size1=size=max(n,m)+1;
	int arr[size]={0},i=n-1,j=m-1,cr=0,el=0;
	vector<int>a(n),b(m);
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<m;i++) cin>>b[i];
    size--;
	while(size)
	{
		el=cr;
		if(i>=0)el+=a[i--];
		if(j>=0)el+=b[j--];
		if(el>9)el=el%10,cr=1;
		else cr=0;
		arr[size--]=el;
	}
	if(cr)arr[0]=1;
	for(int i=0;i<size1;i++) cout<<arr[i]<<" ";
	

}
int main()
{
	 solve();
}