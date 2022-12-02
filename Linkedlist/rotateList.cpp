#include<bits/stdc++.h>
#include"linkedList.h"
using namespace std;
# define ll long long
# define mod 1000000007

node* rotateList(node* head, int k){
        if(!head )return NULL;
        if(!head->next or k==0) return head;
        int ct=0;
        node*temp=head,*curr=head,*pre=NULL;
        while(temp->next){
            temp=temp->next;
            ct++;
        }
        ct++;
        k=k%ct;
        if(!k)return head;
        ct=ct-k;
        while(ct--)pre=curr,curr=curr->next;
        pre->next=NULL;
        temp->next=head;
        return curr; 
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
  head1=rotateList(head1,2);
  l.display(head1);
}