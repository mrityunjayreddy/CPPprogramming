#include<iostream>
using namespace std;

class List
{
	struct node
	{
		int data;
		int *next;
	}*head,*last,*temp,*p;
	int size;
	
	List()
	{
		head = NULL;
		last = NULL;
		temp = NULL;
		size = 0;
	}
	
	void push(int x)
	{
		if(head == NULL)
		{
			head = new node;
			head->data = x;
			head->next = NULL;
			last = head;
		}
		
		else 
		{
			
			temp = new node;
			temp->data = x;
			temp->next = NULL;
			
			last->next = temp;
			last = temp;	
		}
	}
	
	void insert(int e,int pos)
	{
		if(pos == 0)
		{
			temp = new node;
			temp->data = e;
			temp->next = head;
			head = temp;
		}
		
		else
		{
			p = head;
			int i = 0;
			for(i=0;i<pos-1;i++)
			p = p->next;
			
			temp = new node;
			temp->data = e;
			temp->next = p->next;
			p->next = temp;	
		}
	}
	
	int erase(int pos)
	{
		if(pos == 0)
		{
			p = head;
			head = head->next;
			int x = p->data;
			delete p;
			return x;
		}
		else
		{
			p = head;
			for(int i =0 ;i<pos-1; i++)
			p=p->next;
			
			temp = p->next;
			p->next = temp->next;
			int x = temp->data;
			
			delete temp;
			return x;		
		}	
	}
	
	int pop()
	{
		if(head!=NULL)
		{
			
		}
	}
};
