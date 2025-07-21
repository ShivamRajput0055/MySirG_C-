//Q1. Define a class Complex to represent a complex number. Declare instance member variables to store real and imaginary of a complex number,Also define instance member functions to set values of complex number and print values of complex number.
//Solution
/*
#include<iostream>
using namespace std;
class Complex 
{
	private: 
		int x,y;
	public: 
		void setvalue(int a,int b)
		{
			x=a;
			y=b;
		}
		void printdata()
		{
			cout<<"\nReal part = "<<x<<" And Imaginary Part = "<<y;
		}
};
int main()
{
	Complex b1;
	b1.setvalue(2,4);
	b1.printdata();
	return 0;
}
*/

//Q2.Define a class Time to represent Time (like 3hr 45min 20sec). Declare appropriate number of instance member functions to set values for time and display values of time.
//Solution:
/*
#include<iostream>
using namespace std;
class Time
{
	int dd,mm,yy;
	public:
	//1st Method
		void setdate(int xx,int tt,int zz);
		void getdate();
};
*/
/*//Extra method
class Time
{
	int dd,mm,yy;
	public:
		void setdate(int xx,int tt,int zz);
		void getdate();
		//2nd method
		void setdate(int xx,int tt,int zz)
		{
			dd=xx;
			mm=tt;
			yy=zz;
		}
		void getdate()
		{
			cout<<"Today's Date = "<<dd<<"hr "<<mm<<"min "<<yy<<" sec";
		}
};
*/
/*
void Time::setdate(int xx,int tt,int zz)
{
	dd=xx;
	mm=tt;
	yy=zz;
}
void Time::getdate()
{
	cout<<"Today's Date = "<<dd<<"hr "<<mm<<"min "<<yy<<" sec";
}
int main()
{
	Time T1;
	T1.setdate(3,45,20);
	T1.getdate();
	return 0;
}
*/

//Q3.Define a class Date to represent date(like d=31,m=12,y=2022). Declare appropriate number of instance member variables and also define instance member functions to set date and get date.
//Solution:
/*
#include<iostream>
using namespace std;
class Date{
	int d,m,y;
	public:
		void setdate();
		void getdate();
};
void Date::setdate()
{
	cout<<"Enter the Today's Date: ";
	cin>>d;
	cout<<"Enter the Month Number: ";
	cin>>m;
	cout<<"Enter the year: ";
	cin>>y;
}
void Date::getdate()
{
	cout<<"Today'sDate in seperate form: d="<<d<<",m="<<m<<",y="<<y<<".";
}
int main()
{
	Date D1;
	D1.setdate();
	D1.getdate();
	return 0;
}
*/

//Q4.In Question 4, Define a methods to display date in the following pattern : 
		//1.)  31-12-2022
		//2.)  31-Dec-2022
		
//Solution:
/*
#include<iostream>
using namespace std;
class Date{
	int d,m,y;
	char mm[30];
	public:
		void setdate();
		void getdate();
};
void Date::setdate()
{
	cout<<"Enter the Today's Date: ";
	cin>>d;
	cout<<"Enter the Month Name: ";
	cin.ignore();
	cin.getline(mm,30);
	cout<<"Enter the Month Number: ";
	cin>>m;
	cout<<"Enter the year: ";
	cin>>y;
}
void Date::getdate()
{
	cout<<"\n\n\t\t1.) "<<d<<"-"<<m<<"-"<<y<<endl<<"\t\t2.) "<<d<<"-"<<mm<<"-"<<y;
}
int main()
{
	Date D1;
	D1.setdate();
	D1.getdate();
	return 0;
}
*/

//Q5. Define a class Circle with radius as its property. Provide setRadius() and getradius() methods. Also define methods to return area and circumference of circle.
//Solution:

#include<iostream>
using namespace std;

/*//Method 1:
class Class
{
	float radius,Area,Circumference;
	public:
		int x;
		void setRadius()
		{
			cout<<"Enter the radius of circle: ";
			cin>>radius;
		}
		float getradius();
		
}; 
float Class::getradius()
{
	Area=3.14*radius*radius;
	Circumference=2*3.14*radius;
	try_again:
	cout<<"\n\n\t1.) Area of circle\n\t2.) Circumference of circle.\n\n\t#.Enter your choice: ";
	cin>>x;
	while(1)
	{
		switch(x)
		{
			case 1: 
				return Area;
				break;
			case 2:
				return Circumference;
				break;
			default:
				goto try_again;
		}
	}
}
*/
//Method 2:
class Circle
{
	private:
		int radius;
	public:
		void setradius(int r)
		{
			radius=r;
		}
		int getradius()
		{
			return radius;
		}
		float area()
		{
			return 3.14*radius*radius;
		}
		float circumference()
		{
			return 2*3.14*radius;
		}
};

int main()
{
	//Class R1;//Method 1:
	Circle R2;
	//R1.setRadius();
	R2.setradius(5);
	cout<<R2.getradius();
	cout<<"\nArea= "<<R2.area();
	cout<<"\nCircumference= "<<R2.circumference();
	return 0;
}