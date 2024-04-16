#include<iostream>
using namespace std;
class student{
	int age;
	float per;
	int roll no;
	public: student()
	{
    age=25;
    per=30.4;
    rol no=3;
    }
    void display()
    {
    	cout<<"age:"<<age<<endl;
         cout<<"per:"<<per<<endl;
		 cout<<"roll no:"<<rollno<<endl;
	}
};
int main()
{
	student s1
;
s1.display();
return 0;
}
