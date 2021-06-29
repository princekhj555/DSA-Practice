#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node(int x){
		data=x;
		next=NULL;
	}
};
Node *insertEnd(Node *head)
{
	int x;
	cin>>x;
	Node *temp=new Node(x);
	if(head==NULL){
		return temp;
	}
	Node *ptr=head;
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	ptr->next=temp;
	return head;
}
Node *move(Node *head)
{
	if(head==NULL || head->next==NULL) return head;
	Node *ptr=head,*temp2=NULL;
	while(ptr->next->next!=NULL)
	{
		temp2=ptr->next;
		ptr=ptr->next;
	}
	Node *temp=new Node(ptr->next->data);
	temp2->next=NULL;
	temp->next=head;
	head=temp;
	return head;
}
void disp(Node *head)
{
	Node *ptr=head;
	while(ptr!=NULL){
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
}

int main()
{
	int n;
   cout<<"Enter How many elements you want in the initial LinkedList = ";
   cin>>n;
   Node *llist=NULL;
   cout<<"Enter the elemets \n ";
   for(int i=0;i<n;i++)
   {
   	llist=insertEnd(llist);
   }
   cout<<"\nThe LinkedList becomes = ";
   disp(llist);
  llist=move(llist);
   cout<<"\nAfter moving end to beginning of the LinkedList it becomes = ";
   disp(llist);
	return 0;
}