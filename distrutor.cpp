#include<iostream>
using namespace std;
class student{
	int age;
	float per;
	int rollno;
	public: student()
	{
    age=25;
    per=30.4;
    rollno=3;
    }
    void display()
    {
    	cout<<"age:"<<age<<endl;
         cout<<"per:"<<per<<endl;
		 cout<<"rollno:"<<rollno<<endl;
	}

void getdata()
{
	cout<<"enter the age:"<<endl;
	cin>>age;
	cout<<"enter the per:"<<endl;
	cin>>per;
	cout<<"enter the rollno:"<<endl;
	cin>>rollno;}
};
int main()
{
	student s1;
	student s2;
s1.display();
s2.getdata();
return 0;
}
