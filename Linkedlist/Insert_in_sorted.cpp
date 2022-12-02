#include<bits/stdc++.h>
#include "linkedList.h"
using namespace std;
# define ll long long
# define mod 1000000007

void insertinSorted(node*&head,int key){
 node*curr=head,*prev=NULL;
 while(curr and (curr->data)<=key){
 	prev=curr;
 	curr=curr->next;
 }
 node*temp=new node(key);

 if(!prev){
 temp->next=curr;
 head=temp;
 }
 else{
 	temp->next=curr;
  	prev->next=temp;
  }

}
int main()
{
	 node*head=NULL;
	 linkedList l;
	 l.insertAtTail(head,1);
	 l.insertAtTail(head,2);
	 l.insertAtTail(head,3);
	 l.insertAtTail(head,5);
	 l.insertAtTail(head,8);
	 l.insertAtTail(head,9);
	 insertinSorted(head,-1);
	 l.display(head);


}