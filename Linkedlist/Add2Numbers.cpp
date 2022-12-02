#include<bits/stdc++.h>
#include"linkedList.h"
using namespace std;
# define ll long long
# define mod 1000000007
  
void reverseLL(node*&head)
{
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

node* solve(node* l1, node* l2,int cr){
        int num=0,rem=0;
         node*temp;
        if(!l1 and !l2){
            if(!cr)return NULL;
            else {
                temp=new node(cr);
                return temp;
            }
        }
        
        else if(!l1){
            num=l2->data+cr;
            rem=num%10;
            cr=num/10;
            temp=new node(rem);
            temp->next=solve(NULL,l2->next,cr);

        }
        else if(!l2){
            num=l1->data+cr;
            rem=num%10;
            cr=num/10;
            temp=new node(rem);
            temp->next=solve(l1->next,NULL,cr);
        }
        else{
            num=l1->data+l2->data+cr;
            rem=num%10;
            cr=num/10;
            temp=new node(rem);

            temp->next=solve(l1->next,l2->next,cr);
        }
        return temp;

    }
node* addTwoNumbers(node* l1, node* l2) {
        reverseLL(l1);
        reverseLL(l2);
        node*temp=solve(l1,l2,0);
        reverseLL(temp);
        return temp;
    }
int main()
{
  linkedList l;
  node*head1=NULL,*head2=NULL;
  int n1,n2;
  cin>>n1>>n2;
  while(n1--){
    int x;
    cin>>x;
    l.insertAtTail(head1,x);
  }
  while(n2--){
    int x;
    cin>>x;
    l.insertAtTail(head2,x);
  }
  node*temp=addTwoNumbers(head1,head2);
  l.display(temp);
}