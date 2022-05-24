#include<bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x){
    // your code goes here

    int n=arr.size(),cdiff=INT_MAX;
    pair<int,int>p;
	for(int i=0;i<n;i++)
	{
		int k=arr[i];
		for(int j=i+1;j<n;j++)
		{
			int y=arr[j],sum=k+y,diff=x-sum;
			if(diff<cdiff and diff>=0)
			{
				cdiff=diff;
				p.first=k;
				p.second=y;
			}
		}
	}
    return p;
}




int main()
{
	vector<int> arr={10,22,28,29,30,40};
	auto x=closestSum(arr,54);
    cout<<x.first<<" "<<x.second<<"\n";
}
