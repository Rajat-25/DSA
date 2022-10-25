#include<bits/stdc++.h>
#include"list.h"
using namespace std;
# define ll long long
# define mod 1000000007

int main()
{
	List l;
	l.push_front(1);
	l.push_front(0);
	l.push_back(7);
	l.push_back(3);
	l.push_back(4);
	l.insert(2,2);
    l.pop_front();
    l.pop_back();
	Node *head=l.begin();
	Node*temp=head;
	while(temp!=NULL)
	{
		cout<<temp->getData()<<" ";
		temp=temp->next;
	}
}