#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void printPairs(vector<int>v)
{
	int n=v.size();
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			cout<<"{"<<v[i]<<","<<v[j]<<"} ";
		}
	}
	
}
int main()
{
vector<int> v={1,2,3,4};

 printPairs(v);
}