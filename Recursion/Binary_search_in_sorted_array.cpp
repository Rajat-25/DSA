#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
int solve(vector<int>&temp,int s,int e,int key)
{
    while(s<=e)
    {

        int mid=(s+e)/2;
        if(temp[mid]==key)return mid;
        else if(temp[s]<=temp[mid])
        {
            if(key>=temp[s] and key<temp[mid])e=mid-1;
            else s=mid+1;
        }
        else{
            if(key>temp[mid] and key<=temp[e])s=mid+1;
            else e=mid-1;
        }
    }
    return -1;

}
int main()
{
    vector<int>temp={20,30,40,50,60,5,10};
    cout<<solve(temp,0,temp.size()-1,50);
}