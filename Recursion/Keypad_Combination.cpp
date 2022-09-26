#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
vector<string> solve(string code[],string str)
{
  if(str==""){
  	vector<string>temp={""};
  	return temp;
  }

char ch=str[0];
string rem=str.substr(1);
auto data=solve(code,rem);
string curr=code[ch-'0'];
vector<string> ans;

  for(int i=0;i<curr.size();i++)
  {
    for(int j=0;j<data.size();j++) ans.push_back(curr[i]+data[j]);
  }

  return ans;
}
int main()
{
	string code[]={"abc","def","ghi","jkl","mnop","qrst","uv","wxyz", ",;" ,"?!"}; 
	string str;
	cin>>str;
	auto ans= solve(code,str);
	for(auto x:ans)
	{
		cout<<x<<" ";
	}
	cout<<"\n";
	
}