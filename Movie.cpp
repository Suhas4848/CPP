#include<iostream>
#include<iomanip>
using namespace std;

class Movie 
{
	string name;
	float a_price=70;
	float c_price=30;
	int a;
	int c;
	
public:	
	 void getData()
	{
		cout<<"Enter name ";
		cin>>name;
		
		cout<<"Enter Adult member ";
		cin>>a;
		
		cout<<"Enter child member ";
		cin>>c;
	}
	

	int Tic()
	{
		cout<<endl;
		cout<<"Movie Name: "<<name<<endl;
	    cout<<"Adult Member: "<<a<<" Rate: "<<a_price<<" Amount: "<<a*a_price<<endl;
	    cout<<"Child Member: "<<c<<" Rate: "<<c_price<<" Amount: "<<c*c_price<<endl;
		int total=a*a_price+c*c_price;
		
		cout<<"Your Total Amount is Rs. "<<total<<endl;
		cout<<"Charity  Amount is Rs. "<<(total*10)/100;
	}
};

int main()
{
	Movie m,m2;
	
	m.getData();
	m.Tic();
	m2.getData();
	m2.Tic();
	
	
	
}
