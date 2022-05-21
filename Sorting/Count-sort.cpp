#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void countingSort(vector<int>&v,int n)
{
	int largest=-1;
	for(auto x:v)
	{
        largest=max(x,largest);

	}

	vector<int> arr(largest+1);
	for(auto x:v)
	{
		arr[x]++;
	}
		
     int j=0;
	for(int i=0;i<=largest;i++)
	{
		while(arr[i]>0)
		{
			v[j]=i;
			j++;
			arr[i]--;
		}
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
    countingSort(v,n);

 for(auto x:v)
 {
 	cout<<x<<" ";
 }

}