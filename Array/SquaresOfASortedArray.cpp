#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007

// O(n)
vector<int> SquaresOfASortedArray(vector<int> &arr){

  int i=0,j=arr.size()-1,k=j;
  vector<int>temp(j+1);
  while(i<=j)
  {
    int num1=arr[i]*arr[i],num2=arr[j]*arr[j];
    if(num1>num2)
    {
      temp[k--]=num1;
      i++;
    }
    else 
    {
      temp[k--]=num2;
      j--;
    }
  }
   return temp;
}
    
int main()
{
 vector<int>arr={-7,-3,2,3,11};

 auto nums=SquaresOfASortedArray(arr);

 for(auto x:nums)cout<<x<<" ";
 

}