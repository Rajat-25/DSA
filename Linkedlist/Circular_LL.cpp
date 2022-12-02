#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	Node*next;
	int data;
	Node(int data){
		this->data=data;
		next=NULL;
	}
};

class circularList{
public:
	void insertAtHead(Node*&head,int data){
      if(!head){
      	head=new Node(data);
      	head->next=head;
      	return;
      }
      Node*temp=head;
      while(temp->next!=head)temp=temp->next;
      Node*curr=new Node(data);
      curr->next=temp->next;
      temp->next=curr;
      head=curr;
	}
	void insertAtTail(Node*&head,int data){
      if(!head){
      	insertAtHead(head,data);
      	return;
      }
      Node*temp=head;
      while(temp->next!=head)temp=temp->next;
      Node*curr=new Node(data);
      curr->next=temp->next;
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
		  Node*curr=new Node(data);
		  curr->next=temp->next;
		  temp->next=curr;
		}

	}

	void deleteAtHead(Node*&head){
		if(!head)return;
		else{
			Node*temp=head,*curr=head;
			while(temp->next!=head)temp=temp->next;
			head=temp->next->next;
			temp->next=head;
			curr=curr->next=NULL;
            delete curr;
		}

	}
	void deleteAtTail(Node*&head){
      if(!head)return;
      else{
      	Node*temp=head;
      	while(temp->next->next!=head)temp=temp->next;
      	Node*last=temp->next;
      	temp->next=temp->next->next;
      	last=last->next=NULL;
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
			pos=pos-1;
			while(temp->next->next!=head and pos>1){
				temp=temp->next;
				pos--;
			}
			if(pos>1)return;
			Node*del=temp->next;
			temp->next=temp->next->next;
			del->next=NULL;
			delete del;
		}
		
	}
	void display(Node*&head){
	if(!head)return;
     Node*temp=head;
     do{
     	cout<<temp->data<<" ";
     	temp=temp->next;
     }while(temp!=head);
	}
};
int main(){
	circularList cl;
	Node*head=NULL;
	cl.insertAtHead(head,2);
	cl.insertAtHead(head,1);
	cl.insertAtTail(head,3);
	cl.insertAtTail(head,4);
	cl.insertAtHead(head,0);
	cl.insertAtTail(head,5);
	cl.insertAtPosition(head,7,6);
	cl.deleteAtHead(head);	
	cl.deleteAtTail(head);
	cl.deleteAtPosition(head,5);
	cl.display(head);
}