#include<bits/stdc++.h>
#include"linkedList.h"
using namespace std;
# define ll long long
# define mod 1000000007

 void reverseLL(node*&head){
   node*prev=NULL,*curr=head,*temp=head;
   while(curr)
   {
    temp=temp->next;
    curr->next=prev;
    prev=curr;
    curr=temp;
   }
   head=prev;
}
 node* reverseKGroup(node* head, int k) {
        if(!head or !head->next or k==1)return head;
        int ct=k-1;
        node*temp=head;
        while(ct--){
            temp=temp->next;
            if(!temp)return head;
        }
        node*nex=temp->next;
        temp->next=NULL;
        reverseLL(head);
        temp=head;
        while(temp->next)temp=temp->next;
        temp->next=reverseKGroup(nex,k);
        return head;
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
  head1=reverseKGroup(head1,2);
  l.display(head1);
}