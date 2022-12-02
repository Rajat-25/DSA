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
bool isPalindrome(node* head){
    node*pre=head,*curr=head,*temp=NULL;
    while(curr and curr->next){
            pre=pre->next;
            curr=curr->next->next;
        }
        reverseLL(pre);  
        while(head and pre){
            if(pre->data!=head->data)return false;
            pre=pre->next;
            head=head->next;
        }
        return true;
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

  cout<<isPalindrome(head1);
}