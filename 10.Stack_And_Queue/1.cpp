// Implement Stack from Scratch {linkedlist}
#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
};
Node* pushStack(Node *top,int n)
{
	Node *ptr=new Node;
	ptr->data=n;
	ptr->next=top;
	top=ptr;
	return top;
}
Node* popStack(Node *top)
{
	if(top==NULL) return 0;
	else {
		Node *temp=top;
		top=top->next;
		cout<<temp->data<<"deleted \n";
		delete temp;
	}
	return top;
}
void disp(Node *top)
{
	Node * ptr=top;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
}
int main()
{
	Node* top=NULL;
	int n,k;
	cout<<"Enter How many elements U want  in the Stack = ";
	cin>>n;
	cout<<"\nEnter the "<<n<<" Elemets to Push in Stack :\n";
	for (int i = 0; i < n; ++i)
	{
		cin>>k;
		top=pushStack(top,k);
	}
	cout<<"The Stack becomes = ";
	disp(top);
	cout<<"\nEnter How many elemnets U want to Pop from stack = ";
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		top=popStack(top);
	}
	cout<<"\nAfter Poping the Elemets from the stack, the Stack becomes = ";
	disp(top);
	return 0;
}