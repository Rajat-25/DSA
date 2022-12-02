#include<bits/stdc++.h>
#include"circular_LL.h"
using namespace std;
# define ll long long
# define mod 1000000007


int main()
{
  set<int>s;
  int n;
  cin>>n;
  while(n--){
    int x;
    cin>>x;
    s.insert(x);
  }
  for(auto x:s)
  {
    cout<<x<<" ";
  }
  cout<<"\n";
  
  // circularList cl;

  // node*head=NULL;
  // int n1;
  // cin>>n1;
  // while(n1--){
  //   int x;
  //   cin>>x;
  //   cl.insertAtTail(head,x);
  // }
  //  node*temp=insertinSortedCircular(head,4);
  // cl.display(temp);
}