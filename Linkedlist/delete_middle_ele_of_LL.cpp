#include<bits/stdc++.h>
#include "linkedList.h"
using namespace std;
# define ll long long
# define mod 1000000007
int deleteMiddle(node*&head)
{
	node*temp=NULL,*prev=head,*curr=head;
	while(curr and curr->next){
		temp=prev;
		prev=prev->next;
		curr=curr->next->next;
	}
	temp->next=temp->next->next;
	prev->next=NULL;
	delete prev;
	return temp->data;
}

int main()
{
	 node *head=NULL;
	 linkedList l;
	 int n;
	 cin>>n;
	 while(n--)
	 {
	 	int x;
	 	cin>>x;
	    l.insertAtTail(head,x);
	 }
	 cout<<deleteMiddle(head);
	 cout<<"\n";
	 l.display(head);

}