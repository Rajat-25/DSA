#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007
int partition(vector<int>&temp,int s,int e)
{
   int i=s-1,el=temp[e];

   for(int j=s;j<e;j++)
   {
       if(temp[j]<el) 
       {
         i++; swap(temp[i],temp[j]);
       }
   }
   swap(temp[i+1],temp[e]);
   return i+1;

}

void quickSort(vector<int>&temp,int s,int e)
{
    if(s>=e)return;
    int pivot=partition(temp,s,e); 
    quickSort(temp,s,pivot-1);       
    quickSort(temp,pivot+1,e);       
}

int main()
{
    vector<int>temp={-1,1,-3,2,6,4,13,9,11,-5};
    quickSort(temp,0,temp.size()-1);
    for(auto x:temp) cout<<x<<" ";

}