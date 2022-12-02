#include<bits/stdc++.h>
#include"linkedList.h"
using namespace std;
# define ll long long
# define mod 1000000007

int solve(node*head,int k){
  node*fast=head,*slow=head;
   for(int i=0;i<k-1;i++)fast=fast->next;
    while(fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    
    return slow->data;
}
int main(){
	linkedList l;
	node*head=NULL;
	int n;
	cin>>n;
	while(n--){
		int x;
		cin>>x;
		l.insertAtTail(head,x);
	}
	cout<<solve(head,3);

}