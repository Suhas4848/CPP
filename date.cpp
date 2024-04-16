
#include<iostream>
using namespace std;

class Date{
private:
int d,m,y;
string month[13]={"a","JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
public:
Date(){
d=13;
m=06;
y=2004;
}
Date(int a,int b,int c){
 d=a;
 m=b;
 y=c;
}

void display(){
cout<<d<<"/"<<m<<"/"<<y<<endl;
cout<<d<<" "<<month[m]<<" "<<y;
cout<<endl<<d<<"-"<<m<<"-"<<y;
}
};

int main(){
cout<<"Default Date : ";
cout<<endl;

Date d1;
d1.display();
cout<<endl;
int a,b,c;
cout<<"--Enter the date--\n";
cout<<"Date : ";
cin>>a;
cout<<"Month : ";
cin>>b;
cout<<"Year : ";
cin>>c;
cout<<"New Date : ";
cout<<endl;
Date d2(a,b,c);
d2.display();
cout<<endl;
}

