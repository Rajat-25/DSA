#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007

//Approach 2 using lower bound O(nLogm)

int maxOnes (vector <vector <int>> &Mat, int N, int M)
{
            int row=0,mx=INT_MIN;
            for(int i=0;i<N;i++)
            {
               int c=lower_bound(Mat[i].begin(),Mat[i].end(),1)-Mat[i].begin();
               c=M-c;
               if(c>mx)mx=c,row=i;
            }
            return row;
}

// Approach 1 O(n+M);
// int maxOnes (vector <vector <int>> &Mat, int N, int M)
// {
//                int row=0,col=M-1;

//                int c=lower_bound(Mat[1].begin(),Mat[1].end(),1)-Mat[1].begin();
//                cout<<c<<" \n";
//             for(int i=0;i<N;i++)
//             {
//                 for(int j=col;j>=0;j--)
//                 {
//                     if(Mat[i][j]==1) col--,row=i;
//                     else if(Mat[i][j]==0) break; 
//                 }
//             }
//             return row;
// }
      
int main()
{
       vector<vector<int>>v = {{0,1,1, 1 },
                               {0, 0, 1, 1},
                               {0, 0, 1, 1} };
     auto ans=maxOnes(v,3,4);
     cout<<ans<<" ";
        
}