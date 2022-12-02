#include<bits/stdc++.h>
#include"linkedList.h"
using namespace std;
# define ll long long
# define mod 1000000007

void makeCycle(node*head,int pos){
node*temp=head,*last=head;
pos=pos-1;
while(pos--)temp=temp->next;
while(last->next)last=last->next;
last->next=temp;
}

node* detectCycle(node*head){
    makeCycle(head,2);
      node*curr=head,*pre=head,*temp=head;
        while(curr and curr->next){
            pre=pre->next;
            curr=curr->next->next;
            if(pre==curr)break;
        }
        if(!curr or !curr->next)return NULL;
        
        while(temp){
            if(temp==pre)break;
            pre=pre->next;
            temp=temp->next;
        }
        return temp;
}
int main()
{
  linkedList l;
  node*head1=NULL;
  int n1;
  cin>>n1;
  while(n1--){
    int x;
    cin>>x;
    l.insertAtTail(head1,x);
  }
  cout<<solve(head1)->data;
}