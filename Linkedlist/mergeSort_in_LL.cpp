#include<bits/stdc++.h>
#include"linkedList.h"
using namespace std;
# define ll long long
# define mod 1000000007
linkedList l;

node*findMid(node*head){
    node*slow=head,*fast=head->next;

    while(fast and fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;

}
node*merge(node*left,node*right){
    if(!left)return right;
    if(!right)return left;
    node*temp1=left,*temp2=right,*head=NULL,*temp=NULL;
    while(temp1 and temp2)
    {
        if(temp1->data<temp2->data){
          if(!head)temp=head=temp1;
          else temp=temp->next=temp1;
          temp1=temp1->next;
        }
        else{
            if(!head)head=temp=temp2;
            else temp=temp->next=temp2;
            temp2=temp2->next;
        }
    }    

    if(temp1)temp->next=temp1;
    if(temp2)temp->next=temp2;

    return head;
}
node* solve(node*head){
    if(!head or !head->next)return head;
    node*mid=findMid(head);

    node*left=head;
    node*right=mid->next;
    mid->next=NULL;

    left=solve(left);
    right=solve(right);

    node*ans=merge(left,right);

    return ans;
}

int main(){

    node*head=NULL;
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        l.insertAtTail(head,x);
    }
    head=solve(head);
    l.display(head); 
    
}