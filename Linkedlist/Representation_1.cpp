#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int data)
        {
            this->data=data;
            this->next=NULL;
        }

};

class Linkedlist{
private:
    Node*head,*tail;
public:

    Linkedlist()
    {
        head=NULL;
        tail=NULL;
    }
    Node *getHead() {return head;}

    Node *getTail() {return tail;}
    
     void invalidPos()
     {
        cout<<"Invalid Position"<<"\n";
     }
    void insertAtHead(int data)
    {
        if(!head){
            Node *temp=new Node(data);
            head=tail=temp;
        }
        else{
            Node *temp=new Node(data);
            temp->next=head;
            head=temp;
        }
    }
    void insertAtTail(int data)
    {
      if(!head)
      {
            Node *temp=new Node(data);
            head=tail=temp;
      }
      else{
            Node *temp=new Node(data);
            tail->next=temp;
            tail=temp;
      }
    }
void insertAtPosition(int pos,int data)
    {
       if(pos<1){ invalidPos(); return;}
       else if(pos==1){insertAtHead(data); return;}
       else{
          Node* temp=head;
          for(int i=1;i<pos-1 and temp;i++) temp=temp->next;
           
           if(!temp){invalidPos();return;}

                Node*curr=new Node(data);
                if(!temp->next)tail=curr;
                curr->next=temp->next;
                temp->next=curr;
       }

  
    }

    void deleteAtHead()
    {
        if(!head)return;
        Node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

    void deleteAtTail()
    {
      if(!head) return;
      Node*temp=head;
      while(temp->next->next) temp=temp->next;  
      Node *last=temp->next;
      tail=temp;
      temp->next=NULL;
      delete last;
    }
    void deleteAtPosition(int pos)
    {
        if(pos<1){invalidPos();return;}
        else if(pos==1)deleteAtHead();
        else{
            Node*temp=head;
            for(int i=1;i<pos-1 and temp;i++) temp=temp->next;   
            if(!temp or !temp->next ){ invalidPos();return;  }
            Node*rem=temp->next;
            temp->next=rem->next;
            if(rem->next==NULL)tail=temp;
            delete rem; 
        }

    }
    void display()
    {
        Node*temp=head;
        while(temp)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<"\n";
    }

    bool searchKey(int key){
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
  Linkedlist l;
 
 

  l.insertAtHead(1);
  l.insertAtHead(0);
  l.insertAtHead(-1);
  l.insertAtTail(2);
  l.insertAtTail(3);
  l.insertAtPosition(6,13);
  l.deleteAtTail();
  l.deleteAtHead();
  l.deleteAtPosition(7);
  cout<<l.searchKey(3)<<"\n";
  l.display();
}