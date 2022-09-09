#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007

// Method 1 (any base conversion to decimal except hex)
void solve()
{
        ll N,B,p=1,ans=0;
        cin>>N>>B;

        while(N)
        {
            ll rem=N%10;
            N=N/10; 
            ans+= rem*p;
            p=B*p;         
        }
        cout<<ans;
}
int main()
{
    solve();
}