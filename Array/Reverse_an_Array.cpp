#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void reverseArray(vector<int>&v,int n)
{
	int s=0,e=n-1;
	while(s<e)
	{
      swap(v[s],v[e]);
      s++;
      e--;
	}
}
int main()
{
 vector<int> v={-1,2,6,4,8,22,11,3,10};
 reverseArray(v,v.size());
	 for(auto x:v)
	 {
	 	cout<<x<<" ";
	 }
}