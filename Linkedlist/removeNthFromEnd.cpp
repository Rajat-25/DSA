#include<bits/stdc++.h>
#include"linkedList.h"
using namespace std;
# define ll long long
# define mod 1000000007

node* removeNthFromEnd(node* head, int n) {
        int ct=0;
       if(!head->next and n==1)return NULL;
       node* temp=head,*curr=head,*pre=NULL;
       while(temp){
           ct++;
           temp=temp->next;
       }
      ct=ct-n;
       if(!ct){
           head=head->next;
           delete curr;
           return head;
       }
        while(ct--){
            pre=curr;
             curr=curr->next;
          }
        pre->next=curr->next;
        delete curr;
        return head;
    }
int main()
{
  linkedList l;
  node*head=NULL;
  int n;
  cin>>n;
  while(n--){
    int x;
    cin>>x;
    l.insertAtTail(head,x);
  }
  head=removeNthFromEnd(head,2);
   l.display(head);
}