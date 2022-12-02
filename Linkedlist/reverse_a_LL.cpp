#include<bits/stdc++.h>
#include "linkedList.h"
using namespace std;
# define ll long long
# define mod 1000000007

// Iterative approach

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


int main()
{
	 node *first=NULL;
	 linkedList f;
         
	 int n;
	 cin>>n;
	 while(n--)
	 {
	 	int x;
	 	cin>>x;
	    f.insertAtTail(first,x);
	 }
	
	 reverseLL(first);
	 f.display(first);

}