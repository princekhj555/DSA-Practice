//Implement Queue from Scratch {linkedList}
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *next;	
};
Node *front=NULL;
Node *rear=NULL;
void pushQueue(int n)
{
	Node *ptr=new Node;
	ptr->data=n;
	ptr->next=NULL;
	if(rear==NULL)
	{
		rear=ptr; front=rear;
	}
	else{
		rear->next=ptr;
		rear=ptr;
	}
}
void popQueue()
{
	if(front == NULL)
      cout<<"\nQueue is Empty!!!\n";
   else{
      Node *temp = front;
      front = front -> next;
     cout<<" element: "<<temp->data<<" deleted\n";
      delete (temp);
   }
}
void disp()
{
	Node* ptr=front;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
}
int main()
{
	int n,k;
	cout<<"Enter how many ELements U want in the Queue = ";
	cin>>n;
	for (int i = 0; i < n; ++i)
	{	
		cin>>k;
		pushQueue(k);
	}
	cout<<"\nThe Queue Becomes = ";
	disp();
	cout<<"\nEnter how many ELements U want to Pop form Queue = ";
	cin>>n;
	for (int i = 0; i < n; ++i)
		popQueue();
	cout<<"After poping the ELments from the Queue, the Queue Becomes = ";
	disp();
	return 0;
}