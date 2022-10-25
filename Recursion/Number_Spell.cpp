#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
void solve(vector<string>&code,int n)
{
       if(n==0)return;
       solve(code,n/10); 
       int num=n%10;
       cout<<code[num]<<" ";

}
int main()
{
    vector<string>code={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    string ans;
    solve(code,n);
}