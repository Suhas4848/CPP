#include<iostream>
using namespace std;

class Line
{
public:
int lx1,lx2,ly1,ly2,s,i;

Line(int llx1,int llx2,int lly1,int lly2,int lslope,int lintersept)
{
	lx1=llx1;
	lx2=llx2;
	ly1=lly1;
	ly2=lly2;
	s=lslope;
	i=lintersept;
	
	cout<<"Line class";
}	
};

class Circle
{
	public:
	int r,x,y;

	
		
		Circle(int rad)
		{
			r=rad;
		}
		
		Circle(int radius,int x1,int y1)
		{
			r=radius;
			x=x1;
			y=y1;
			
			cout<<"Drawing Circle with cx: "<<x <<" and cy : "<<y<<endl;
			
			
		}
		
		
		int calArea()
		{
			int area=3.14 * r * r;
			cout<<"Area is "<<area<<endl;
		}
		
		
		int calCircumference()
		{
			cout<<"Circumference is "<<2*3.14*r<<endl;
			
		}
		
		bool isTangent(int x1,int x2,int y1,int y2)
		{
		int a=x1-x2;
		int b=y1-y2;
		if(a==b){
			return true;
		}
		else
		{
			return false;
		}
		
		}
		
		bool isTangent(int slope,int intersept)
		{
	
		return true;
		}
		
		bool isTangent(Line l1)
		{
		return true;
		}
		
		
};





int main()
{
	Circle c(4);
	Circle c1(4,5,3);
	Line l1(5,6,8,3,7,4);
	c.calArea();
	c.calCircumference();
	
	
	cout<<c.isTangent(2,3,5,4);
	c.isTangent(2,3);
	c.isTangent(l1);
	
	

	
	return 0;
}
