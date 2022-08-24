#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void solve()
{
    //METHOD 1 
    // int a[3][4];
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<4;j++)cin>>a[i][j];
    // }
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<4;j++)cout<<a[i][j]<<" ";
    //         cout<<"\n";
    // }

    //Method 2
    
    //  int n,m;
    // cin>>n>>m;
    // vector<vector<int>>v(n,vector<int>());

    // for(int i=0;i<v.size();i++)
    // {  
    //     for(int j=0;j<n;j++)
    //     {
    //         int x;
    //         cin>>x;
    //         v[i].push_back(x);
    //     }
    // }


    //Method 3

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


    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
         cout<<v[i][j]<<" ";
        }
        cout<<"\n";   

    }

}

int main()
{
  solve();
}