#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007

// Method 2 (decimal to any conversion(except hex))

void solve1()
{
        ll N,B,ans=0,p=1;
        cin>>N>>B;
        

        while(N)
        {
            ll rem=N%B;
            N=N/B; 
            ans+=rem*p;  
            p=p*10;         
            
        }
        cout<<ans;
}

// Method 1 (decimal to any conversion)
void solve()
{
        ll N,B;
        cin>>N>>B;
        string ans;

        while(N)
        {
            ll rem=N%B;
            N=N/B;            
            if(rem<10)ans.push_back(rem+0);
            else ans.push_back(rem+55);
        }
        reverse(ans.begin(),ans.end());
        cout<<ans;
}
int main()
{
    string ans;
    ans.push_back(1+47);
    cout<<ans;
     // solve1();
}