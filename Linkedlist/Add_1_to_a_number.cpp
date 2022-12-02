#include<bits/stdc++.h>
#include "linkedList.h"
using namespace std;
# define ll long long
# define mod 1000000007


void revLL(node*&head)
{
    node*prev=NULL,*curr=head,*temp=head;
    while(curr){
        temp=temp->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    head=prev;
}

node* solve(node*&head)
{
	  int cr=1;
	  revLL(head);
    node*first=head,*temp=NULL;
    while(first)
    {
       int num=first->data+cr;
       first->data=num%10;
       cr=num/10;
       if(!first->next){
       	temp=first;
       }
       first=first->next;

    }
    if(cr){
        node*curr=new node(cr);
        temp->next=curr;
    }
    revLL(head);
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
	node*temp=solve(head);
	l.display(head);

}