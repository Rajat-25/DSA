#include<bits/stdc++.h>
#include "circular_LL.h"
using namespace std;
# define ll long long
# define mod 1000000007

node *detectCycle(node*&head)
{
   node*prev=head,*curr=head;
   while(curr)
   {
   	prev=prev->next;
   	curr=curr->next->next;
   	if(curr==prev)return curr;
   }
   return NULL;
}

void makeCycle(node*head,int pos)
{
	pos=pos-1;
	node*temp=head,*n=head;
   while(pos--)temp=temp->next;
  do{
    n=n->next;
  }while(n->next!=head);
  n->next=temp;
}

node* detectIntersectionPoint(node*head){
  node*pt=detectCycle(head);
  node*temp=head;
  while(temp!=pt){
  	temp=temp->next;
  	pt=pt->next;
  }
  return temp;
}

int detectLength_ofLoop(node*temp,node*head){
node*n=temp;
int ct=0;
do{
	n=n->next;
	ct++;
}while(n!=temp);
return ct;
}

int main()
{
	 node*head=NULL;
	 circularList cl;
	 cl.insertAtTail(head,1);
	 cl.insertAtTail(head,7);
	 cl.insertAtTail(head,3);
	 cl.insertAtTail(head,5);
	 cl.insertAtTail(head,8);
	 cl.insertAtTail(head,2);
	 cl.insertAtTail(head,9);
	 cl.insertAtTail(head,6);
	 cl.display(head);
	 makeCycle(head,4);
	 node*temp=detectIntersectionPoint(head);
	 auto ans=detectLength_ofLoop(temp,head);
	 cout<<ans<<"\n";


}