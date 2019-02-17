// LinkedList.cpp : Defines the entry point for the console application.
//


#include<iostream>
#include<string>
#include <fstream>
using namespace std;
class LinkedList
{	public:
	int data;
	
	LinkedList *next = NULL;

};
LinkedList* head = NULL;
LinkedList* temp = NULL;
void read()
{
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
void add_to_head(int data)
{
	LinkedList * new_head=new LinkedList();
	new_head->data=data;
	new_head->next=NULL;
	if(head==NULL)
	{
		head=new_head;
	}
	else
	{
		temp=head;
		new_head->next=head;
		head=new_head;
		head->next=temp;
	}
	
}
void delete_head()
{
	if(head==NULL)
	{
		return;
	}
	
	else
	{
		
		temp = head;
	head = temp->next;
	delete temp;
	}
	
}
void delete_tail()
{
	if(head==NULL)
	{
		return;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=NULL;
	}
}
void add_to_tail(int data)
{
	LinkedList * new_tail=new LinkedList();
	new_tail->data=data;
	new_tail->next=NULL;
	if(head==NULL)
	{
		head=new_tail;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=new_tail;
	}
}
void add_to_between(int data)
{	LinkedList * new_node= new LinkedList();
    LinkedList * tempp= new LinkedList();
	new_node->data=data;
	new_node->next=NULL;
	cout<<"Behind from ?"<<endl;
	read();
	int i;
	cin>>i;
	
	temp=head;
	while(temp->next->data!=i)
	{
		temp=temp->next;
		/* code */
	}
        new_node->next=temp->next;    
        temp->next=new_node;
	    
}
void delete_on_between()
{	LinkedList * temp2= new LinkedList();
	temp2->next=NULL;
	cout<<"Which node"<<endl;
	read();
	int i;
	cin>>i;
	temp=head;
	while(temp->next->data!=i)
	{
		temp=temp->next;
	}
	temp2=temp->next->next;
	delete temp->next;
	temp->next=temp2;
}
int main()
{
	add_to_head(5);add_to_head(15);
	add_to_tail(19);
	add_to_head(15);add_to_head(115);
	add_to_tail(119);read();
	delete_head();
	read();
	 
	 delete_on_between();
	 read();
		return 0;
}

