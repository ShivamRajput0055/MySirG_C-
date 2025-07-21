//Assignment No.: 20.

//Question 1: Define a class A with two int type member variables. Define a member function to setData() and showData() to set and display values of members variables. Also define a member function with the name input() to take input from the user. Define a class B with one int type member variables. Override input() function in order to input three values from the user for all three members variables. Also override showData() function to display all three values.
//Solution:
/*
#include<iostream>
using namespace std;
class A{
	private:
		int x,y;
	public:
		void input()
		{
			int a,b;
			cout<<"1st No.: ";
			cin>>a;
			cout<<"2nd No.: ";
			cin>>b;
			setData(a,b);
		}
		void setData(int a,int b)
		{
			x=a;
			y=b;
		}
		void showData()
		{
			cout<<"A = "<<x<<"\nB = "<<y;
		}
};
class B:public A{
	private:
		int c;
	public:
		void input()
		{
			int a,b;
			cout<<"1st No.: ";
			cin>>a;
			cout<<"2nd No.: ";
			cin>>b;
			setData(a,b);
			cout<<"3rd No.: ";
			cin>>c;
		}
		void showData()
		{
			A::showData();
			cout<<"\nC = "<<c<<endl<<endl;
		}
};
int main()
{
	B X;
	X.input();
	X.showData();//In this function it hide the Function that is showData() from the class A.It follows the function overridding.
	//A V;
	//V.input();
	//V.showData();
	return 0;
}
*/

//Question 2: Define a class Shape with member variables to store name of the shape (like rectangle,square,circle,etc.). Provide methods to set and display name of the shape. Define a pure virtual function area() in Shape class. Define two derived classes of shape, one is rectangle and second is square. Define appropriate members in both the classes. Demonstrate usage of the classes by making driver function main().
//Solution:

#include<iostream>
#include<string.h>
using namespace std;
class Shape
{
	private:
		char shapeName[30];
	public:
		void setShapeName(const char[]);
		char* displayShapeName();
		virtual int area()=0;
};
void Shape::setShapeName(const char n[])
{
	strcpy(shapeName,n);
}
char* Shape::displayShapeName()
{
	return shapeName;
}
class rectangle:public Shape{
	private:
		int l,b;
	public:
		void setLength(int x)
		{
			this->l=x;
		}
		void setBreadth(int y)
		{
			this->b=y;
		}
		int getLength()
		{
			return l;
		}
		int getBreadth()
		{
			return b;
		}
		int area()
		{
			return l*b;
		}
		virtual ~rectangle(){}
};
class square:public Shape{
	private:
		int side;
	public:
		void setSide(int length)
		{
			this->side=length;
		}
		int getSide()
		{
			return side;
		}
		int area()
		{
			return side*side;
		}
		~square(){}
};
int main()
{
	Shape *S1=new rectangle;
	S1->setShapeName("\tRectangle");
	cout<<S1->displayShapeName();
	rectangle *R1=new rectangle();//or//rectangle *R1=new rectangle;
	R1->setLength(20);
	R1->setBreadth(8);
	cout<<endl<<endl<<"Area of Rectangle( Length= "<<R1->getLength()<<" and Breadth= "<<R1->getBreadth()<<")= "<<R1->area();
	cout<<"\n\n";
	S1->setShapeName("\tSquare");
	cout<<S1->displayShapeName();
	square *s1=new square();
	s1->setSide(10);
	cout<<"\n\n=> Area of Square: ( Side= "<<s1->getSide()<<")= "<<s1->area();
	delete S1;
	delete s1;
	delete R1;
	return 0;
}