//Q1. Define a class person with name and age as instance variables.Provide parameterised constructor with two formal arguments name & age, to insitialise instance member.
//Solution:
/*
#include<iostream>
#include<string.h>
using namespace std;
class Person
{
	private:
		int age;
		char name[30];
	public:
		Person(int age,const char name[]){
			this->age=age;
			strcpy(this->name,name);
		}
		void showData()
		{	
			cout<<"Name: "<<name<<"\nAge: "<<age;
		}	
};
int main()
{
	Person P1(12,"Kunal Kumar");
	P1.showData();
	return 0;
}
*/

//Q2. Define a class Complex with instance variables a and b to store real and imaginary part of a complex number.Provide setData() method with formal arguments with the name a and b, to set the values of instance variables. Also define showData() method to display instance member variables values.

//Q3. In Question-2,Write a non member function in which instantiate Complex class dynamically. Initialise instance variables and display their values.
//Solution:

#include<iostream>
using namespace std;
class Complex
{
	private:
		int a,b;
	public:
		Complex(){a=0;b=0;}
		void setData(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		void showData()
		{
			cout<<"Real Part: "<<a<<" and "<<"Imaginary Part: "<<b<<endl;
		}
};
void f1()
{
	Complex *p=new Complex();//We will make a pointer to make a new dynamically object and through the p point we will access all those data which wants.
	p->setData(2,4);
	p->showData();
	(*p).setData(5,5);
	(*p).showData();
}
int main()
{
	Complex C1;
	C1.setData(2,5);
	C1.showData();
	f1();
	return 0;
}