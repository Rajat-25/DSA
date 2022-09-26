#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007

// using Iteration
void solve1(int val1,int val2)
{
    int a=val1,b=val2,gcd=0,lcm=0;
	 while(b)
	 {
	 	  gcd=b;
	      b=a%b;
	      a=gcd;
	 }
    lcm=(val1*val2)/gcd;
    cout<<lcm<<" "<<gcd<<"\n";
}

//using recursion
int solve(int a,int b)
{
	if(b==0)return a;
	return solve(b,a%b);
}

int main()
{   
	int val1,val2;
	cin>>val1>>val2;
	solve1(val1,val2);
	cout<<solve(val1,val2);
}