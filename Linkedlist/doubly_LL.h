#include<bits/stdc++.h>
using namespace std;

class node{
public:
	node*prev;
	int data;
	node*next;

	node(int data){
		prev=next=NULL;
		this->data=data;
	}
};

class doublyList{
public:
	void insertAtHead(node*&head,int data)
	{
       node*curr=new node(data);
       if(head)
       {
       	curr->next=head;
       	head->prev=curr;
       }
       head=curr;
	}
	void insertAtTail(node*&head,int data)
	{
		if(!head){
			insertAtHead(head,data);
			return;
		}
		node*temp=head;
		while(temp->next)temp=temp->next;
		node*curr=new node(data);
		temp->next=curr;
		curr->prev=temp;
	}
	void insertAtPosition(node*&head,int pos,int data)
	{
		if(pos<1)return;
		if(pos==1){
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
		    node*curr=new node(data);
		    curr->prev=temp;
		    curr->next=temp->next;
		    temp->next->prev=curr;
		    temp->next=curr;
			
		}
		
	}
	void deleteAtHead(node*&head)
	{
		if(!head)return;
		node*temp=head;
		head=head->next;
		head->prev=NULL;
		temp->next=NULL;
		delete temp;
		
	}
	void deleteAtTail(node*&head)
	{
		node*temp=head;
		while(temp->next->next){
			temp=temp->next;
		}
		node*last=temp->next;
		temp->next=NULL;
		last->prev=NULL;
		delete last;
	}
	void deleteAtPosition(node*&head,int pos)
	{
		if(!head or pos<1)return;
		else if(pos==1){deleteAtHead(head);return;}
		else{
			node*temp=head;
			for(int i=1;i<pos and temp;i++)temp=temp->next;
				if(!temp)return;
				if(!temp->next){
					deleteAtTail(head);
					return;}
			temp->prev->next=temp->next;
		    temp->next->prev=temp;
		    temp->prev=NULL;
		    temp->next=NULL;
		    delete temp;
		}
		
	}

	void display(node*&head)
	{
      node*temp=head;
      while(temp)
      {
      	cout<<temp->data<<" ";
      	temp=temp->next;

      }
      cout<<"\n";
	}
};
