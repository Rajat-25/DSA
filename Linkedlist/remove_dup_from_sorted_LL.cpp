#include<bits/stdc++.h>
#include "linkedList.h"
using namespace std;
# define ll long long
# define mod 1000000007

void removeDuplicates(node*&head)
{
  node*prev=NULL,*curr=head;
  bool flag;
  while(curr)
  {
  	prev=curr;
  	curr=curr->next;
  	flag=false;
  		while(curr and prev->data==curr->data )
  		{
  			curr=curr->next;
  			flag=true;
  		}
  		if(flag)prev->next=curr;
  }
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
	 removeDuplicates(head);
	 l.display(head);

}