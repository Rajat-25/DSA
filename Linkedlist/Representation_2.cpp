#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define mod 1000000007

class Node
{
public:
    int data;
    Node* next;
    Node(int data){
      next=NULL;
      this->data=data;
    } 
};

class linkedList{
public:
    void insertAtHead(Node *&head,int data)
    {
        if(!head)
        {
            Node *curr=new Node (data);
            return;
        }
        else{
            Node *curr =new Node(data);
            curr->next=head;
            head=curr;
        }
    }
    void insertAtTail(Node*&head,int data){
        if(!head){
            Node *curr=new Node(data);
            return;
        }
        else{
            Node*temp=head;
            while(temp->next)temp=temp->next;
            Node *curr=new Node(data);
            temp->next=curr;
        }
    }

    void insertAtPosition(Node* &head,int pos,int data){
      if(pos<1)return;
      else if(pos==1){
        insertAtHead(head,data);
        return;
     }
      else{
        Node *temp=head;
        for(int i=1;i<pos-1 and temp;i++) temp=temp->next;
        
        if(!temp)return;

        else if(!temp->next){
            insertAtTail(head,data); 
            return;
        }

        else{
            Node *curr=new Node(data);
            curr->next=temp->next;
            temp->next=curr;
        }

      }
    }
    void deleteAtHead(Node*&head){
        if(!head)return;
        else{
            Node*curr=head;
            head=head->next;
            curr->next=NULL;
            delete curr;
        }
    }

    void deleteAtTail(Node*& head){
      if(!head)return;
      else{
        Node*curr=head;
        while(curr->next->next) curr=curr->next;
        Node* temp=curr->next;
        curr->next=NULL;
        temp->next=NULL;
        delete temp;
      }
    }
    void deleteAtPosition(Node*&head,int pos){
        if(!head)return;
        else{
            if(pos<1) return;
            else if(pos==1){
                deleteAtHead(head);
                return;
            }
            else{
                Node*curr=head;
                for(int i=1;i<pos-1 and curr;i++)curr=curr->next;
                if(!curr or !curr->next)return;
                Node*temp=curr->next;
                curr->next=temp->next;
                temp->next=NULL;
                delete temp;
            }
        }
    }
    void display(Node *head){
        Node *curr=head;
        while(curr){
            cout<<curr->data<<" ";
            curr=curr->next;
        }
    }
    
    bool searchKey(Node*&head,int key){
        Node* temp=head;
        while(temp){
            if(temp->data==key)return true;
            temp=temp->next;
        }
        return false;
    }
};

int main()
{
  Node*head=new Node(1);
  linkedList l;
  l.insertAtHead(head,0);
  l.insertAtHead(head,-1);
  l.insertAtTail(head,2);
  l.insertAtTail(head,3);
  l.insertAtPosition(head,6,13);
  l.deleteAtTail(head);
  l.deleteAtHead(head);
  l.deleteAtPosition(head,4);
  cout<<l.searchKey(head,3)<<"\n";
  l.display(head);



}