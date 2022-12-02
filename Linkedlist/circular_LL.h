#include<bits/stdc++.h>
using namespace std;
class node{
public:
	node*next;
	int data;
	node(int data){
		this->data=data;
		next=NULL;
	}
};

class circularList{
public:
	void insertAtHead(node*&head,int data){
      if(!head){
      	head=new node(data);
      	head->next=head;
      	return;
      }
      node*temp=head;
      while(temp->next!=head)temp=temp->next;
      node*curr=new node(data);
      curr->next=temp->next;
      temp->next=curr;
      head=curr;
	}
	void insertAtTail(node*&head,int data){
      if(!head){
      	insertAtHead(head,data);
      	return;
      }
      node*temp=head;
      while(temp->next!=head)temp=temp->next;
      node*curr=new node(data);
      curr->next=temp->next;
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
		 pos=pos-1;
		  while(temp->next!=head and pos>1)
		  {
		  	temp=temp->next;
		  	pos--;
		  }
		  if(pos>1)return;
		  if(temp->next==head){
		  	insertAtTail(head,data);
		  	return;
		  }
		  node*curr=new node(data);
		  curr->next=temp->next;
		  temp->next=curr;
		}

	}

	void deleteAtHead(node*&head){
		if(!head)return;
		else{
			node*temp=head,*curr=head;
			while(temp->next!=head)temp=temp->next;
			head=temp->next->next;
			temp->next=head;
			curr=curr->next=NULL;
            delete curr;
		}

	}
	void deleteAtTail(node*&head){
      if(!head)return;
      else{
      	node*temp=head;
      	while(temp->next->next!=head)temp=temp->next;
      	node*last=temp->next;
      	temp->next=temp->next->next;
      	last=last->next=NULL;
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
			pos=pos-1;
			while(temp->next->next!=head and pos>1){
				temp=temp->next;
				pos--;
			}
			if(pos>1)return;
			node*del=temp->next;
			temp->next=temp->next->next;
			del->next=NULL;
			delete del;
		}
		
	}
	void display(node*&head){
	if(!head)return;
     node*temp=head;
     do{
     	cout<<temp->data<<" ";
     	temp=temp->next;
     }while(temp!=head);
	 cout<<"\n";
	}
};
