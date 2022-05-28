#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007

void duplicateZeros(vector<int>& arr) 
{
        vector<int>temp;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0)
            {
                temp.push_back(0);
                temp.push_back(0);
            }
            else temp.push_back(arr[i]);
        }
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=temp[i];
        }  
}

int main()
{
 vector<int>arr={1,0,2,3,0,4,5,0};

  duplicateZeros(arr);

 for(auto x:arr)cout<<x<<" ";
 
}