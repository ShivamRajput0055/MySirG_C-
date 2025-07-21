//Q1. Define a class Complex and provide a unary friend operator - to negate the real and imaginary part of a complex number.
//Solution:
/*
#include<iostream>
using namespace std;
class Complex{
	private:
		int x,y;
	public:
		void setdata()
		{
			cout<<"\n\n=>Enter the Real Part: ";
			cin>>x;
			cout<<"\n\n=>Enter the Imaginary Part: ";
			cin>>y;
		}
		void showdata()
		{
			cout<<"Complex NO.: "<<x<<" + "<<y<<"i.\n\n";
		}
		friend Complex operator-(Complex);
		friend ostream& operator<<(ostream&,Complex);
		friend istream& operator>>(istream&,Complex&);
};
istream& operator>>(istream &din,Complex &C)
{
	cout<<"Enter the Complex No.: ";
	din>>C.x>>C.y;
	return din;
}
ostream& operator<<(ostream &dout,Complex C)
{
	dout<<"\n\n=>Complex NO.: "<<C.x<<" + "<<C.y<<"i.\n\n";
	return dout;
}
Complex operator-(Complex C)
{
	Complex Temp;
	Temp.x=-C.x;
	Temp.y=-C.y;
	return Temp;
}
int main()
{
	Complex C1,C2,C3;
	cin>>C1;
	//C2.setdata();
	//C3=-C1;
	C3=operator-(C1);
	cout<<C3;
	return 0;
}
*/

//Q2. Define a class integer with instance variable of type int. Provide a friend logical operator not!. Also define a friend operator == to compare two integer objects.
//Solution:
/*
#include<iostream>
#include<conio.h>
using namespace std;
class Integer{
	private:
		int x;
	public:
		Integer(int a=0):x(a){};
		friend bool operator!(Integer);
		friend bool operator==(Integer,Integer);
		void showdata()
		{
			cout<<x;
		}
};
bool operator!(Integer I)
{
	return !(I.x);
}
bool operator==(Integer I1,Integer I2)
{
	return I1.x==I2.x;
}
int main()
{
	Integer I1(0),I2(0),I3;
	int x = (I1 == I2);
	cout<<x;
	I3=!I1;
	I3.showdata();
	return 0;
}
*/

//Q3. Create a coordinate class with 2 instance variables x and y. Overload comma operator such that when you write C3=(C1 , C2) then C2 is Assigned to C3.Where C1,C2,C3 are the objectsof coordinate class.
//Q4. In Question-3,provide overloaded insertion and extraction operators.
//Solution:
/*
#include<iostream>
using namespace std;
class Coordinate{
	private:
		int x,y;
	public:
		Coordinate() : x(0) , y(0){}
		Coordinate(int a,int b):x(a),y(b){}
		Coordinate operator,(Coordinate C)
		{
			Coordinate temp;
			temp.x=C.x;
			temp.y=C.y;
			return temp;
				//or
			//return C;
		}
		void showdata()
		{
			cout<<"Copy: "<<x<<" and "<<y;
		}
		friend ostream& operator<<(ostream&,Coordinate);
		friend istream& operator>>(istream&,Coordinate&);
};
ostream& operator<<(ostream &dout,Coordinate C)
{
	dout<<"2nd Copy: "<<C.x<<" and "<<C.y;
	return dout;
}
istream& operator>>(istream &din,Coordinate &C)
{
	cout<<"Enter the two integer value: ";
	din>>C.x>>C.y;
	return din;
}
int main()
{
	Coordinate C3,C1,C2;
	cin>>C1>>C2;
	C3=(C1 , C2);
	cout<<C3;
	cout<<endl;
	C3.showdata();
	return 0;
}
*/

//Q5.Define a class Student with roll No,name and age as instance variables. Create setStudent() and showStudent() methods in the class. Overload operator == to compare two Student objects.
//Solution:
///*
#include<iostream>
#include <string.h>
using namespace std;
class Student{
	private:
		int rollNo,age;
		char name[30];
	public:
		void setStudent(int r,int a, const char n[])
		{
			rollNo=r;
			age=a;
			strcpy(name,n);
		}
		void showStudent()
		{
			cout<<"\n=>Name: "<<name<<"\nRoll NO.: "<<rollNo<<"\nAge: "<<age;
		}
		bool operator==(Student S)
		{
			return rollNo==S.rollNo && age==S.age && (!strcmp(name,S.name));
		}
};
int main()
{
	Student S1,S2;
	S1.setStudent(113,18,"Shivam Singh Rajput");
	S2.setStudent(113,18,"Shivam Singh Rajput");
	//S2.setStudent(110,11,"Kunal Kumar Singh Rajput");
	S1.showStudent();
	S2.showStudent();
	if(S1==S2)
		cout<<"\n\nBoth the Student is same.";
	else
		cout<<"\n\nBoth the students are different.";
	return 0;
}
//*/