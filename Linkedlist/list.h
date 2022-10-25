class List;

class Node{
	int data;
	public:
	Node* next;
		Node(int d):data(d),next(NULL){}
		int getData(){
			return data;
		}

		~Node(){
			if(next!=NULL)delete next;
		}
		friend class List;
};

class List{
Node *head;
Node *tail;
 int searcHelper(Node *start,int key)
 {
 	if(start==NULL)return -1;
    if(start->data==key)return 0;

   int  idx=searcHelper(start->next,key);
   return idx==-1?-1:idx+1;
 }
public:
	List():head(NULL),tail(NULL){}

	Node* begin()
	{
		return head;
	}

	void push_front(int data)
	{
		if(head==NULL)
		{
			Node*n=new Node(data);
			head=tail=n;
		}
		else{
			  Node *n=new Node(data);
			  n->next=head;
			  head=n;
		}
	}
	void push_back(int data)
	{
		if(head==NULL)
		{
			Node*n=new Node(data);
			head=tail=n;
		}
		else{
			  Node *n=new Node(data);
			  tail->next=n;
			  tail=n;
		}
	}
    void insert(int data,int pos)
    {
     if(pos==0){
     	push_front(data);
     	return;
     }

     Node*temp=head;
     for(int i=1;i<=pos-1;i++) temp=temp->next;

     Node *n=new Node(data);
     n->next=temp->next;
     temp->next=n;
     
    }

    int recursiveSearch(int key){
    	return searcHelper(head,key);
    }

    ~List(){
    	if(head!=NULL){
    		delete head;
    		head=NULL;
    	}
    }
    void pop_front(){
    	Node* temp=head;
    	head=head->next;
    	temp->next=NULL;
    	delete temp;
    }

    void pop_back()
    {
      Node* temp=head;
      while(temp->next->next!=NULL)
      {
      	temp=temp->next;
      }
      tail=temp;
      temp=temp->next;
      tail->next=NULL;
      temp->next=NULL;
      delete temp;
    }

    void remove(){

    }

    void reverseIteratively(Node*&head){
      Node *prev=NULL;
      Node*temp;
      Node *curr=head;
      while(curr!=NULL)
      {
      	temp=curr->next;
      	curr->next=prev;
      	prev=curr;
      	curr=temp;
      }
      head=prev;
    }
};
