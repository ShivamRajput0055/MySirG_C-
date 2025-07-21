//Q1. Define a class Complex and overload following operators as a friend.
/*
	1. +
	2. -
	3. *
*/

//Solution:
/*
#include<iostream>
using namespace std;
class Complex
{
	private:
		int x,y;
	public:
		Complex(int a=0,int b=0):x(a),y(b){};
		void showdata()
		{
			cout<<"=>Real Part: "<<x<<" and Imaginary Part: "<<y;
		}
		friend Complex operator+(Complex,Complex);
		friend Complex operator-(Complex,Complex);
		friend Complex operator*(Complex,Complex);
};
Complex operator+(Complex a,Complex b)
{
	Complex temp;
	temp.x=a.x+b.x;
	temp.y=a.y+b.y;
	return temp;
}
Complex operator-(Complex a,Complex b)
{
	Complex temp;
	temp.x=a.x-b.x;
	temp.y=a.y-b.y;
	return temp;
}
Complex operator*(Complex a,Complex b)
{
	Complex temp;
	temp.x=a.x*b.x-a.y*b.y;
	temp.y=a.x*b.y+a.y*b.x;
	return temp;
}
int main()
{
	Complex C1(2,3),C2(4,5),C3;
	C3=C1+C2;
	C3.showdata();
	cout<<endl<<endl;
	C3=C1-C2;
	C3.showdata();
	cout<<endl<<endl;
	C3=C1*C2;
	C3.showdata();
	cout<<endl<<endl;
	return 0;
}
*/

//Q2. Define a class Time with appropriate instance variables and the member functions.
		/* Overload following operators
			1. << Insertion Operator
			2. >> Extraction Operator
*/
//Q3. In Question-2,Overload operator= to perform copy of Time object.
//Solution:
/*
#include<iostream>
using namespace std;
class Time{
	private:
		int hr,min,sec;
	public:
		Time(int x=0,int y=0,int z=0):hr(x),min(y),sec(z){}
		void showdata()
		{
			cout<<endl<<"\nGeneral Time: "<<hr<<"hr : "<<min<<"min : "<<sec<<"sec.";
		}
		friend ostream& operator<<(ostream&,Time);
		friend istream& operator>>(istream&,Time&);	
		Time operator=(Time T)//Q3. Solution
		{
			hr=T.hr;
			min=T.min;
			sec=T.sec;
			return *this;
		}
};
ostream& operator<<(ostream &dout,Time T){
	dout<<"\nTime: "<<T.hr<<"hr : "<<T.min<<"min : "<<T.sec<<"sec.";
	return dout;
}
istream& operator>>(istream &din,Time &T)
{
	din>>T.hr>>T.min>>T.sec;
	return din;
}
int main()
{
	Time T1(2,35,43),T2(3,54,6),T3,T4;
	cout<<T1;
	cout<<"\n\nThird Time: ";
	cin>>T3;
	cout<<T3;
	T2.showdata();
	cout<<"\n\n=>Copy Array Element: ";
	T4=T2;
	cout<<T4;
	return 0;
}
*/

//Q4. Consider the following class Array
/*
	class Array
	{
		private:
			int *p;
		public:
			int size;
	};
	Define operator = to perform copy of Time object.
*/
//Solution:
//Not Completed yet....
#include<iostream>
using namespace std;
class Array{
	private:
		int *p;
		int size;
	public:
		Array operator=(const Array arr)
		{
			size=arr.size;
			p=new int[size];
			for(int i=0;i<size;i++)
				p[i]=arr.p[i];
			return *this;
		}
};
int main()
{
	
	return 0;
}