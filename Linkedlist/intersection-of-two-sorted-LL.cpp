#include<bits/stdc++.h>
#include "linkedList.h"
using namespace std;
# define ll long long
# define mod 1000000007

node* findIntersection(node* head1, node* head2)
{
    // Your Code Here
    node*temp=head1,*temp1=head2,*res=NULL;
    while(temp->data !=temp1->data)
    {
        if(temp1->data>temp->data)temp=temp->next;
        else temp1=temp1->next;
    }
    res=new node(temp->data);
    temp=temp->next;
    temp1=temp1->next;
    node*t=res;
    while(temp and temp1)
    {
        if(temp->data==temp1->data)
        { 
          node*n=new node(temp->data);
          t->next=n;
          t=n;
          temp=temp->next;
          temp1=temp1->next;
        }
        else if(temp->data>temp1->data) temp1=temp1->next;
        else temp=temp->next;
    }
    return res;
}
int main()
{
	 node*head1=NULL,*head2=NULL;
	 linkedList l;
	 int n1,n2;
	 cin>>n1>>n2;
	 while(n1--)
	 {
	 	int x;
	 	cin>>x;
	 	l.insertAtTail(head1,x);
	 }
	  while(n2--)
	 {
	 	int x;
	 	cin>>x;
	 	l.insertAtTail(head2,x);
	 }
	 node*temp=findIntersection(head1,head2);
	 l.display(temp);
}