#include<bits/stdc++.h>
#include"doubly_LL.h"
using namespace std;
# define ll long long
# define mod 1000000007
node* rotateDoubly(node*&head,int pos){
    node*temp=head,*pre=NULL;
    while(pos--){
        pre=temp;
        temp=temp->next;
        
    }
    pre->next=NULL;
    temp->prev=NULL;
    node*curr=temp;
    while(temp->next){
        temp=temp->next;
    }
    temp->next=head;
    head->prev=temp;
    head=curr;
    return head;
}
int main()
{
  node*head=NULL;
  doublyList dl;
  int n;
  cin>>n;
  while(n--){
    int x;
    cin>>x;
    dl.insertAtTail(head,x);
  }
  node*temp=rotateDoubly(head,2);
  dl.display(temp);
}