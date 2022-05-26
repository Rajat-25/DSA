#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007


// bool check(int num)
// {
//     int ct=0;
//   while(num>0)
//   {
//     num=num/10;
//     ct++;
//   }
//   return ct%2==0?true:false;
// }

// Brute force approach O(n2)

// int findDigitsInANumber(vector<int>& nums) {
//         int ct=0;
//         for(auto x:nums)
//         {
//               if(check(x))ct++;

//                int num=(int)log10(x)+1;
//                num%2==0?ct++:ct;
//         }
//         return ct;
//     }

int findDigitsInANumber(vector<int>& nums) {
        int ct=0;
        for(auto x:nums)
        {
          int num=(int)log10(x)+1;
          num%2==0?ct++:ct;
        }
        return ct;
}
    
int main()
{
 vector<int>arr={12,345,2,6,7896,52};
 cout<<findDigitsInANumber(arr);
 

}