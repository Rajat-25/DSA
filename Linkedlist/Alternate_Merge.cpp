#include<bits/stdc++.h>
#include"linkedList.h"
using namespace std;
# define ll long long
# define mod 1000000007
node* solve(node*head1,node*head2){
	node*temp=NULL,*head=NULL,*temp1=head1,*temp2=head2,*pre=NULL,*curr=NULL;

	while(temp1 and temp2){
		pre=temp1->next,curr=temp2->next;
		if(!head){
			head=temp=temp1;
			temp=temp->next=temp2;
		}
		else{
			temp->next=temp1;
			temp=temp->next->next=temp2;
		}
		temp1=pre;
		temp2=curr;
	}

	if(temp1)temp->next=temp1;
	if(temp2)temp->next=temp2;
	return head;

}
int main(){
	linkedList l;
	node*head1=NULL,*head2=NULL,*head=NULL;
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
	head=solve(head1,head2);
	l.display(head);

}