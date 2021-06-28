/*Implement Circular Queue*/
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
 Node* insertEnd(Node* head,int x){

 	Node* temp =new Node(x);
 	if(head==NULL){
 		temp->next=temp;
 		return temp;
 	}
 	else{
 		temp->next=head->next;
 		head->next=temp;
 		int t=temp->data;
 		temp->data=head->data;
 		head->data=t;
 		return temp;
 	}
 }
 Node* delFront(Node* head){
 	if(head==NULL) return NULL;
 	if(head->next==head){
 		delete head;
 		return NULL;
 	}
 	head->data=head->next->data;
 	Node* temp=head->next;
 	head->next=head->next->next;
 	delete temp;
 	return head;
 }
 void disp(Node* head){
 	if(head==NULL) return;
 	Node *p=head;
 	do{
 		cout<<p->data<<" ";
 		p=p->next;

 	}while(p!=head);
 }

int main()
{
	int n;
   cout<<"Enter many element you want in the initial queue = ";
   cin>>n;
   Node *cqueue=NULL;
   cout<<"Enter the elemets = \n";
   for(int i=0;i<n;i++)
   { int x;
   	cin>>x;
   	cqueue=insertEnd(cqueue,x);
   }
   cout<<"\ncircular queue  = ";
   disp(cqueue);
   cout<<"\nEnter how many element you want to pop = ";
   cin>>n;
   for(int i=0;i<n;i++){
   	cqueue=delFront(cqueue);
   }
   cout<<"\ncircular queue becomes = ";
   disp(cqueue);
   cout<<"\nEnter to many elemets you want to add more = ";
   cin>>n;
   cout<<"Enter the elemets = \n";
   for(int i=0;i<n;i++) 
   { int x;
 	cin>>x;
	 cqueue=insertEnd(cqueue,x);
	}
   	cout<<"\nCircular cqueue becomes = "; 
   disp(cqueue);
	return 0;
}