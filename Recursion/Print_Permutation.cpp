#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007

//Approach 2


// void solve(string str,int i)
// {
//     if(i==str.size()){
//         cout<<str<<"\n";
//         return;
//     }
//      for(int j=i;j<str.size();j++)
//         {
//             swap(str[i],str[j]);
//             solve(str,i+1);
//             swap(str[i],str[j]);
//         }   
// }
void solve(string str,string ans)
{
	if(str=="")
	{
		cout<<ans<<"\n";
		return;
	}
		
		for(int i=0;i<str.size();i++)
		{
			string s=str.substr(0,i)+str.substr(i+1);
            solve(s,ans+str[i]);
		}
}
int main()
{
	string str;
	cin>>str;
	solve(str,"");
}