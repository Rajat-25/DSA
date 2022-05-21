#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void selectionSort(vector<int>&v,int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min_pos=i;
		for(int j=i+1;j<n;j++)
		{
			if(v[j]<v[min_pos])
			{
				min_pos=j;
			}
		}
		swap(v[i],v[min_pos]);
	}
}
int main()
{

    int n;
	cin>>n;
    vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
 selectionSort(v,n);
    

 for(auto x:v)
 {
 	cout<<x<<" ";
 }

}