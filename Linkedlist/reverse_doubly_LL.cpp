#include<bits/stdc++.h>
#include "doubly_LL.h"
using namespace std;
# define ll long long
# define mod 1000000007
void reversedoublyLL(node*&head){
	node *temp=head,*curr=head,*pre=NULL;
	while(curr){
		temp=temp->next;
		curr->prev=temp;
		curr->next=pre;
		pre=curr;
		curr=temp;
	}
   head=pre;
}


int main()
{
	 node*head=NULL;
	 doublyList dl;
	 dl.insertAtTail(head,1);
	 dl.insertAtTail(head,7);
	 dl.insertAtTail(head,3);
	 dl.insertAtTail(head,5);
	 dl.insertAtTail(head,8);
	 dl.insertAtTail(head,2);
	 dl.insertAtTail(head,9);
	 dl.insertAtTail(head,6);
	 reversedoublyLL(head);
	 dl.display(head);


}