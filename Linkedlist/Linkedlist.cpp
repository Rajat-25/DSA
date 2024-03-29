#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node*next;
    Node(int data)
    {
        next=NULL;
        this->data=data;
    }

};
class List{
public:
   void insertAtHead(Node*&head,int data){
     Node*curr=new Node(data);
     curr->next=head;
     head=curr;
   }

   void insertAtTail(Node*&head,int data){
      if(!head){
        insertAtHead(head,data);
        return;
      }
      Node*temp=head;
      while(temp->next)temp=temp->next;
      Node*curr=new Node(data);
      temp->next=curr;
   }

   void insertAtPosition(Node*&head,int pos,int data){
    if(pos<1)return;

    else if(pos==1){
        insertAtHead(head,data);
        return;
    }

    else{
     Node*temp=head;
     for(int i=1;i<pos-1 and temp;i++)temp=temp->next;
     if(!temp)return;
     if(!temp->next){
        insertAtTail(head,data);
        return;
     }

     Node*curr =new Node(data);
     curr->next=temp->next;
     temp->next=curr;
    }   
   }

   void deleteAtHead(Node*&head){
     if(!head)return;
     else{
        Node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
     }
   }

   void deleteAtTail(Node*&head){
    if(!head)return;
    else{
        Node*temp=head;
        while(temp->next->next)temp=temp->next;
        Node*last=temp->next;
        temp->next=NULL;
        delete last;
    }
   }

   void deleteAtPosition(Node*&head,int pos){
    if(pos<1)return;
     else if(pos==1){
        deleteAtHead(head);
        return;
     }
     else{
        Node*temp=head;
        for(int i=1;i<pos-1 and temp;i++)temp=temp->next;
        if(!temp) return;   
        Node*last=temp->next;
        if(temp->next)temp->next=temp->next->next;
        delete last;
     }
   }

    void display(Node*&head){
     Node*temp=head;
     while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
     }
    }
};

int main()
{
    List l;
    Node*head=NULL;
    l.insertAtHead(head,2);
    l.insertAtHead(head,1);
    l.insertAtTail(head,3);
    l.insertAtTail(head,4);
    l.insertAtHead(head,5);
    l.insertAtTail(head,6);
    l.deleteAtHead(head);
    l.deleteAtTail(head);
    l.insertAtPosition(head,5,7);
    l.deleteAtPosition(head,5);
    l.display(head);

}