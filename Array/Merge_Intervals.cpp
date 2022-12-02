#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
vector<vector<int>> solve(vector<vector<int>>temp)
{
        int n=temp.size(),k=1;
        if(n<=1)return temp;
        sort(temp.begin(),temp.end());
        pair<int,int>p;
        p={temp[0][0],temp[0][1]};
        vector<vector<int>>ans;
        while(k<n){
            if(p.second>=temp[k][0]){
                p.second=max(temp[k][1],p.second);
                k++;
            }
            else{
                ans.push_back({p.first,p.second});
                p.first=temp[k][0];
                p.second=temp[k][1];
            }
        }
        ans.push_back({p.first,p.second});
        return ans;  
}
int main()
{
    vector<vector<int>>temp={{1,3},{2,6},{8,10},{15,18}};
     auto ans=solve(temp);
     for(auto x:ans)
     {
         for(auto y:x) cout<<y<<" ";
         cout<<"\n";
     }
     cout<<"\n";
     
    
}