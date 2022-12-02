#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007

double solve(double x, long n){
         if(n<=0)return 1;
        double res=solve(x,n/2);
        res=res*res;
        if(n&1) res=x*res;
        return res;
    }
double myPow(double x, int n){
    long t=n;
    double res=solve(x,abs(t));
    if(n<0)res=(1/res);
    return res;
}
int main()
{  
    double x;
    int n;
    cin>>x>>n;
    cout<<myPow(x,n);
}