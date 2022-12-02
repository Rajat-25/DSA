#include<bits/stdc++.h>
#include "linkedList.h"
using namespace std;
# define ll long long
# define mod 1000000007

void removeDuplicatesUnsorted(node*&head)
{
  unordered_set<int>s;
  node*prev=head,*curr=head->next;
  if(!head)return;
  s.insert(prev->data);
  while(curr){
    if(s.find(curr->data)==s.end()){
    	s.insert(curr->data);
    	prev=curr;
    	curr=curr->next;
    }
    else{
    	prev->next=curr->next;
    	curr=curr->next;
    }
  }
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
	removeDuplicatesUnsorted(head);
	l.display(head);

}