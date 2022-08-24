#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
vector<int> solve(vector<vector<int>>arr,int m,int n)
{
        int sr=0,er=m-1,sc=0,ec=n-1,ct=0,size=n*m;
        vector<int>temp;
        while(ct<size)
        {
            int el=0;

            for(int row=sc;row<=er and ct<size;row++)
            {
              el= arr[row][ec];
              temp.push_back(el);
              ct++;
            }
            ec--;
            for(int row=er;row>=sr and ct<size;row--)
            {
              el= arr[row][ec];
              temp.push_back(el);
              ct++;   
            }
            ec--;
        }

return temp;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v (n,vector<int>(m));
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        { 
            cin>>v[i][j];
        }
    }
       auto ans=solve(v,n,m);

    for(auto x:ans)
    {  
        cout<<x<<" ";   
    }
        cout<<"\n";
    
    
}