#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007

int lowerBound(vector<int> v, int val) 
{
    int n=v.size();
    if(v[0]>val) return -1;
    for(int i=0;i<n;i++)
    {
        if(v[i]==val) return v[i];
        else if(v[i]>val) return v[i-1];
    }
    return v[n-1];
}

int main()
{
 vector<int> A{1,2,3,4,6};
 cout<<lowerBound(A,7);
}