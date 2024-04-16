#include<iostream>
#include<cstdlib>

using namespace std;

class node
{
public:
	int data;
	node* next;
	
	node(int element)
	{
		this->data=element;
		this->next=NULL;
	}
};



class Stack
{
	node*top;
public:
	stack()
	{
		top=NULL;
	}
	

void push(int data)
{
	node*temp=new node(data);
	temp->data=data;
	temp->next=top;
	top=temp;
}
		
void pop()
{
	node*temp;
	if(top==NULL)
	{
		cout<<"stack is empty"<<endl;
		
	}
    else
    {
    	temp=top;
    	top=top->next;
    	free(temp);
	}
}

void display()
{
	node*temp;
	temp=top;
	
	while(temp!=NULL)
	{
		cout<<temp->data<<"\n";
		temp=temp->next;
	}
	
}

	
};

int main()
{
  Stack s1;
     s1.push(1);
     s1.push(2);
     s1.push(3);
     s1.push(4); 
     s1.push(5); 
	 s1.push(6);
     s1.push(7);
	 s1.push(8);
     s1.push(9);
cout<<"elements in stack \n";
     s1.display();
     
     cout<<"after removing top element:\n";
     s1.pop();
     s1.display();
     
	return 0;
	
}
