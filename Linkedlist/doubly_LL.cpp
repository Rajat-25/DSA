#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	Node*prev;
	int data;
	Node*next;

	Node(int data){
		prev=next=NULL;
		this->data=data;
	}
};

class doublyList{
public:
	void insertAtHead(Node*&head,int data)
	{
       Node*curr=new Node(data);
       if(head)
       {
       	curr->next=head;
       	head->prev=curr;
       }
       head=curr;
	}
	void insertAtTail(Node*&head,int data)
	{
		if(!head){
			insertAtHead(head,data);
			return;
		}
		Node*temp=head;
		while(temp->next)temp=temp->next;
		Node*curr=new Node(data);
		temp->next=curr;
		curr->prev=temp;
	}
	void insertAtPosition(Node*&head,int pos,int data)
	{
		if(pos<1)return;
		if(pos==1){
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
		    Node*curr=new Node(data);
		    curr->prev=temp;
		    curr->next=temp->next;
		    temp->next->prev=curr;
		    temp->next=curr;
			
		}
		
	}
	void deleteAtHead(Node*&head)
	{
		if(!head)return;
		Node*temp=head;
		head=head->next;
		head->prev=NULL;
		temp->next=NULL;
		delete temp;
		
	}
	void deleteAtTail(Node*&head)
	{
		Node*temp=head;
		while(temp->next->next){
			temp=temp->next;
		}
		Node*last=temp->next;
		temp->next=NULL;
		last->prev=NULL;
		delete last;
	}
	void deleteAtPosition(Node*&head,int pos)
	{
		if(!head or pos<1)return;
		else if(pos==1){deleteAtHead(head);return;}
		else{
			Node*temp=head;
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

	void display(Node*&head)
	{
      Node*temp=head;
      while(temp)
      {
      	cout<<temp->data<<" ";
      	temp=temp->next;

      }
	}
};

int main()
{
	Node* head=NULL;
	doublyList d;
	d.insertAtHead(head,2);
	d.insertAtHead(head,1);
	d.insertAtTail(head,3);
	d.insertAtTail(head,4);
	d.insertAtHead(head,5);
	d.insertAtTail(head,6);
	d.deleteAtHead(head);
	d.deleteAtTail(head);
	d.insertAtPosition(head,5,13);
	d.deleteAtPosition(head,6);
	d.display(head);
}