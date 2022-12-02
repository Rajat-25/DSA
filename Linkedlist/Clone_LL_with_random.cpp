 node *copyList(node *head){
        //Write your code here
        node*orig=head,*temp=NULL,*res=NULL;
        while(orig){
            node*curr=new node(orig->data);
            if(!res)res=curr;
            curr->next=orig->next;
            orig->next=curr;
            orig=orig->next->next;
        }
        orig=head;
        while(orig){
            orig->next->arb=orig->arb?orig->arb->next:orig->arb;
            orig=orig->next->next;
        }
        orig=head,temp=res;
        while(orig and temp){
            orig->next=orig->next->next;
            temp->next=orig->next?orig->next->next:orig->next;
            orig=orig->next;
            temp=temp->next;
        }
        return res;
    }
