#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007


int main()
{
  int n=4;
  int **arr=new int* [n];

  for(int i=0;i<n;i++) *(arr+i)=new int [n];

  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++) *(*(arr+i)+j)=;
  }

  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++) cout<< *( *(arr+i) +j )<<" ";    
      cout<<"\n";
  }

    for(int i=0;i<n;i++) delete [] *(arr+i);

    delete [] *arr;
}