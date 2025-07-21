//Q1. Define a class Person with name and age as instance variables as private members. Provide setter ans getter as protected methods. Derive a class Employees from person class with private instance variables salary. Provide public methods setEmployee() and showEmployees.
//Solution:
/*
#include<iostream>
#include<string.h>
using namespace std;
class Person{
	private:
		char name[30];
		int age;
	protected:
		void setter(const char n[],int a)
		{
			strcpy(name,n);
			age=a;
		}
		char* getterName()//char is used to take a character but char* is used to take string
		{
			return name;
		}
		int getterAge()
		{
			return age;
		}
};
class Employee:public Person{
	private:
		long long int salary;
	public:
		void setEmployee(const char n[],int a,long long int s)//const char is pass the string as the parameter
		{
			setter(n,a);
			salary=s;//In this case, We use salary directly but we cann't use name or age due to it is parent class and it member variables is private.
		}
		void showEmployee()
		{
			cout<<"Name: "<<getterName()<<" and Age: "<<getterAge()<<" and Salary: "<<salary;
		}
};
int main()
{
	Employee S1;
	S1.setEmployee("Kunal Kumar",18,10000000);
	S1.showEmployee();
	return 0;
}
*/

//Q2. Define a class Circle with radius as private instance variables and setRadius(),getRadius(),getArea() as public instance methods.Define a class ThickCircle as a subclass of circle with thickness as private instance variables and getThickness(), setThickness() as public instance methods. Provide  an overridden method getArea() to calculate  area of thick portion of circle.
//Solution:
/*
#include<iostream>
using namespace std;
class Circle{
	private:
		float radius;
	public:
		void setRadius(float r)
		{
			radius = r;
		}
		float getRadius()
		{
			return radius;
		}	
		float getArea()
		{
			return 3.14*radius*radius;
		}
};
class ThickCircle:public Circle
{
	private: 
		float thickness;
	public:
		void setThickness(float t)
		{
			thickness=t;
		}
		float getThickness()
		{
			return thickness;
		}
		float getArea()
		{
			return (3.14*thickness*thickness)-Circle::getArea();
		}
		void showdata()
		{
			cout<<endl<<endl<<"InnerArea: "<<Circle::getArea()<<endl<<"OuterArea= "<<getThickness()*getThickness()*3.14<<endl<<"ThickCircle's Area= OuterArea - InnerArea = "<<getArea()<<endl<<endl;
		}
};
int main()
{
	ThickCircle T1;
	T1.setRadius(5.00);
	T1.setThickness(5.15);
	T1.showdata();
	return 0;
}
*/

//Q3. Define a class coordinates with x and y as instance variables. Define overloaded versions of getDistance(),first with no arguments calculating distance from origin, second with one arguments of co-ordinate type to calculate distance between two coordinates. Also define other methods if required.
//Solution:
/*
#include<iostream>
#include<math.h>
using namespace std;
class coordinate
{
	private:
		int x,y;
	public:
		coordinate(int a,int b):x(a),y(b)
		{
			
		}
		double getDistance()
		{
			return sqrt( x*x+y*y );
		}
		double getDistance(coordinate A)
		{
			return sqrt( (x-A.x)*(x-A.x)+(y-A.y)*(y-A.y) );
		}
		void showdata(coordinate A)
		{
			cout<<"Area(with no- arguments: )"<<getDistance()<<" and Area(with One Agruments):"<<getDistance(A)<<"";
		}
};
int main()
{
	coordinate C1(4,2),C2(2,3);
	C1.getDistance();
	C1.getDistance(C2);
	C1.showdata(C2);
	return 0;
}
*/

//Q4. Define a class Shape with shapeName as instance variables.Provide setter and getter.
//Q5. In Question 3&4, derive a class straightLine from Shape with two coordinates type objects as instance members. Provide methods to setLine(),getDistance() and showLine().

//Solution: 
/*
What is the meaning of above funstion ans the Answer is setLine(): Set the coordinates of the line.
getDistance(): Calculate the distance between the two coordinates.
showLine(): Display the coordinates of the line.
*/
//Solution 4: 

/*
#include<iostream>
#include<string.h>
using namespace std;
class Shape
{
	private:
		char shapeName[30];
	public:
		void setter(const char a[])
		{
			strcpy(shapeName,a);
		}
		char* getter()
		{
			return shapeName;
		}
		void showName()
		{
			cout<<"Name: "<<shapeName<<endl;
		}
};
int main()
{
	Shape S1,S2;
	S1.setter("Kunal Kumar");
	S1.getter();
	S1.showName();
	return 0;
}
*/

//Question 5:In Question 3&4, derive a class straightLine from Shape with two coordinates type objects as instance members. Provide methods to setLine(),getDistance() and showLine().
//Note: What is the meaning of above funstion ans the Answer is setLine(): Set the coordinates of the line.
//Note: getDistance(): Calculate the distance between the two coordinates.
//Note: showLine(): Display the coordinates of the line.
//Solution 5:
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
class coordinate
{
	private:
		int x,y;
	public:
		coordinate(int a = 0, int b = 0): x(a), y(b){}//constructor with instilizers
		double getDistance()
		{
			return sqrt( x*x+y*y );
		}
		double getDistance(coordinate A)
		{
			return sqrt( (x-A.x)*(x-A.x)+(y-A.y)*(y-A.y) );
		}
		void setCoordinate(int x,int y)
        { 
			this->x=x;
			this->y=y;
		}
		void getCoordinate()
		{
			cout<<"\n\nCoordinates: "<<x<<" and "<<y<<"\n\n";
		}
		void showdata(coordinate A)
		{
			cout<<"Area(with no- arguments: )"<<getDistance()<<" and Area(with One Agruments):"<<getDistance(A)<<"";
		}
};
class Shape
{
	private:
		char shapeName[30];
	public:
		void setter(const char a[])
		{
			strcpy(shapeName,a);
		}
		char* getter()
		{
			return shapeName;
		}
		void showName()
		{
			cout<<"Name: "<<shapeName<<endl;
		}
};
class straightLine:public Shape
{
	private:
		coordinate C1,C2;
	public:
		void showLine()
		{
			C1.getCoordinate();
            C2.getCoordinate();
		}
		void setLine(coordinate C1,coordinate C2)
		{
			this->C1=C1;
			this->C2=C2;
		}
		double getDistance()
		{
			return C1.getDistance(C2);
		}
};
#include<iostream>
using namespace std;
int main()
{
	straightLine S1;
	coordinate X(4,4),Y(2,4);
	S1.setLine(X,Y);
	S1.showLine();
	cout<<"=Distnace between both coordinates: "<<S1.getDistance();
	return 0;
}