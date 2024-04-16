#include<iostream>
using namespace std;

class Queue
{
	int q[100];
	int front;
	int rear;
	
public:
	Queue()
	{
		front=rear=-1;
	
	}
	
void insert(int element)
	{
		q[++rear]=element;
	}
	
	
int remove()
	{
	
	int temp=q[front];
		if(front==rear)
		{
			front=rear=-1;
		
		}
		else
		{
			front++;
	
		}
		return temp;
	}
	
	void display()
	{
		for(int i=front+1;i<=rear;i++)
		{
			cout<<q[i]<<endl;
		}
	}

};


int main()
{
	Queue q1;
	q1.insert(12);
	q1.insert(22);
	q1.insert(32);
	q1.insert(42);	
	q1.insert(52);
	q1.display();

	
}
