#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node*next;
    node(int data)
    {
        next=NULL;
        this->data=data;
    }

};
class linkedList{
public:
   void insertAtHead(node*&head,int data){
     node*curr=new node(data);
     curr->next=head;
     head=curr;
   }

   void insertAtTail(node*&head,int data){
      if(!head){
        insertAtHead(head,data);
        return;
      }
      node*temp=head;
      while(temp->next)temp=temp->next;
      node*curr=new node(data);
      temp->next=curr;
   }

   void insertAtPosition(node*&head,int pos,int data){
    if(pos<1)return;

    else if(pos==1){
        insertAtHead(head,data);
        return;
    }

    else{
     node*temp=head;
     for(int i=1;i<pos-1 and temp;i++)temp=temp->next;
     if(!temp)return;
     if(!temp->next){
        insertAtTail(head,data);
        return;
     }

     node*curr =new node(data);
     curr->next=temp->next;
     temp->next=curr;
    }   
   }

   void deleteAtHead(node*&head){
     if(!head)return;
     else{
        node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
     }
   }

   void deleteAtTail(node*&head){
    if(!head)return;
    else{
        node*temp=head;
        while(temp->next->next)temp=temp->next;
        node*last=temp->next;
        temp->next=NULL;
        delete last;
    }
   }

   void deleteAtPosition(node*&head,int pos){
    if(pos<1)return;
     else if(pos==1){
        deleteAtHead(head);
        return;
     }
     else{
        node*temp=head;
        for(int i=1;i<pos-1 and temp;i++)temp=temp->next;
        if(!temp) return;   
        node*last=temp->next;
        if(temp->next)temp->next=temp->next->next;
        delete last;
     }
   }

    void display(node*&head){
     node*temp=head;
     int ct=10000;
     while(temp and ct--){
        cout<<temp->data<<" ";
        temp=temp->next;
     }
    }
};


