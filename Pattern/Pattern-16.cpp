#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void solve()
{
	int n;
	cin>>n;
	int sp=2*n-3;

	 for(int i=1;i<=n;i++)
	 {
	 	int val=1;
	 	for(int j=1;j<=i;j++) cout<<val++<<" ";
	 	for(int j=1;j<=sp;j++) cout<<"  ";	
	 	int j= i!=n? i: i-1;
	 	for(;j>=1;j--) cout<<j<<" "; 		
	 	sp-=2;
	 	cout<<"\n";

	 }
 }
int main()
{
	 solve();
}