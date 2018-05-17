#include<iostream>

using namespace std;

struct Node
{
	int data;
	Node *next;
};

Node *push(Node *head, int data)
{
	Node *temp=new Node;
	temp->data=data;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		return head;
	}
	temp->next=head;
	head=temp;
	return head;
}

int pop(Node *head)
{
	if(head==NULL)
	{
		return -1;
	}
	Node *temp=head;
	head=head->next;
	delete temp;
	
}

void show(Node* head)
{
	Node *temp=head;
	while(temp)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<endl;
}
int main()
{
	Node *head=NULL;
	int ch;
	while(1)
	{
		cin>>ch;
		if(ch==1)
		{
			int data;
			cin>>data;
			push(head,data);
		}
		else if(ch==2)
		{
			cout<<pop(head)<<endl;
		}
		else if(ch==3)
		{
			show(head);
		}
		else
		{
			break;
		}
	}
	return 0;
}
