#include<bits/stdc++.h>
#include "circular_LL.h"
using namespace std;
# define ll long long
# define mod 1000000007

node *detectCycle(node*&head)
{
   node*prev=head,*curr=head;
   while(curr and curr->next)
   {
   	if(curr==prev)return curr;
   	prev=prev->next;
   	curr=curr->next->next;
   }
   return NULL;
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
	 node*temp=detectCycle(head);
	 if(temp)cout<<temp->data;
}