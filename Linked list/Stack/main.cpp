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

Node *pop(Node *head)
{
	if(head==NULL)
	{
		cout<<"Underflow"<<endl;
		return NULL;
	}
	Node *temp=head;
	head=head->next;
	delete temp;
	return head;
	
}

void show(Node* head)
{
	if(head==NULL)
	{
		cout<<"Underflow";
	}
	Node *temp=head;
	while(temp)
	{
		if(temp->next==NULL)
		{
			cout<<temp->data;
		}
		else
		{
			cout<<temp->data<<"->";
		}
		
		temp=temp->next;
	}
	cout<<endl;
}

int peak(Node *head)
{
	if(head==NULL)
	{
		cout<<"UnderFlow Error ";
		return -1;
	}
	return head->data;
}
int main()
{
	Node *head=NULL;
	int ch;
	while(1)
	{
		cout<<"-----------------------------------";
		cout<<"\n\n1.Push\n2.Pop\n3.Show\n4.Peek\n";
		cout<<"Any key to exit!!\n\n";
		cout<<"-----------------------------------\n";
		cin>>ch;
		if(ch==1)
		{
			int data;
			cin>>data;
			head=push(head,data);
		}
		else if(ch==2)
		{
			head=pop(head);
		}
		else if(ch==3)
		{
			show(head);
		}
		else if(ch==4)
		{
			cout<<peak(head)<<endl;
		}
		else
		{
			break;
		}
	}
	return 0;
}
