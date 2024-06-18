#include<iostream>
using namespace std;

class Number{
    
    int a;

    public:

    Number()
    {
        a=0;
    }
    Number(int x)
    { 
        a=x;

    }
    Number(Number &obj)
    { 
         cout<<"copy constructor"<<endl;
        a=obj.a;
    }
     void display()
     {
        cout<<"the number is :"<<a<<endl;
     }
};
int main()
{
    Number n(4);
    Number n1(n);
    Number n2(n1);
    n2.display();

}