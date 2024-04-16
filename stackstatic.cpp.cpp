#include<iostream>
using namespace std;

class Stack
{ 
int stack[100];
int top=-1;
public:	
void push(int element)
{
	top=top+1;
	stack[top]=element;	
}
		
void pop()
{
	if(top<=-1)
	{
		cout<<"stack is empty"<<endl;
	}	
	else
	{
		top--;	
	}
}

void display()
{
	if(top>0)
	{
		cout<<"stack elements are:";
		for(int i=top;i>=0;i--)
		{
			cout<<stack[i]<<"\n";
		}
	}
	
}
	
};

int main()
{
  Stack s1;
  s1.push(12);
  s1.push(22);
  s1.push(32);
  s1.push(42);
  s1.push(52);
  s1.push(62);
  s1.push(72);
  
  s1.pop();
  s1.pop();
  s1.display();
  	
	
	
return 0;
	
}
