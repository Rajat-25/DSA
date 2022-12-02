#include<bits/stdc++.h>
#include"linkedList.h"
using namespace std;
# define ll long long
# define mod 1000000007
node* mergeTwoLists(node *list1,node*list2){
 if(!list1)return list2;
 if(!list2)return list1;
        node *temp;
        if(list1->data<=list2->data){
            temp=list1;
            temp->next=mergeTwoLists(list1->next,list2);
            
        }
        else{
            temp=list2;
            temp->next=mergeTwoLists(list1,list2->next);
        }
        return temp;
}


node * mergeTwoLists(node *list1,node*list2){
    // your code goes here
      node*temp1=list1,*temp2=list2,*temp=NULL,*head=NULL;
   
        
        while(temp1 and temp2){
            if(temp1->data==temp2->data){
                if(!temp){
                    head=temp=temp1;
                    temp1=temp1->next;
                }
                else{
                    temp=temp->next=temp1;
                    temp1=temp1->next;
                }
            }
            else if(temp1->data<=temp2->data){
                if(!temp)head=temp=temp1;
                else temp=temp->next=temp1;
                temp1=temp1->next;
            }
            else{
               if(!temp)head=temp=temp2;
               else temp=temp->next=temp2;
                temp2=temp2->next;
            }
        }
        while(temp1){
            if(!temp)head=temp=temp1;
            else temp=temp->next=temp1;
            temp1=temp1->next;
        }
          while(temp2){
            if(!temp)head=temp=temp2;
            else temp=temp->next=temp2;
            temp2=temp2->next;
        }
        return head;
}

int main()
{
  linkedList l;
  node*head1=NULL,*head2=NULL;
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
  node*temp=mergeResult(head1,head2);
  l.display(temp);
}