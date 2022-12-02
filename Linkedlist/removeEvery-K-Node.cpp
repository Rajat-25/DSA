#include<bits/stdc++.h>
#include"linkedList.h"
using namespace std;
# define ll long long
# define mod 1000000007

node* deleteEveryKNode(node*head,int pos){

int k=pos-1;
node*temp=head,*pre=NULL;
if(pos==1)return NULL;
while(temp){
  if(!k){
    pre->next=temp->next;
    node*todel=temp;
    free(todel);
    temp=pre->next;
    k=pos-1;
  }
  else{
    pre=temp;
    temp=temp->next;
    k--;
  }
}
return head;
}

int main()
{
  linkedList l;

  node*head=NULL;
  int n1;
  cin>>n1;
  while(n1--){
    int x;
    cin>>x;
    l.insertAtTail(head,x);
  }
  head=deleteEveryKNode(head,2);
   l.display(head);
}