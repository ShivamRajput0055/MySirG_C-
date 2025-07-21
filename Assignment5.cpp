//Q1. Define a C++ function to swap data of two int variables using call by reference.
//Solution:
/*
#include<iostream>
using namespace std;
void swapdata(int &,int &);
void swapdata(int &a,int &b)
{
	cout<<"The Swap of two no. are ";
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<a<<" and "<<b;
}
int main()
{
	int x,y;
	cout<<"Enter two numbers: ";
	cin>>x>>y;
	swapdata(x,y);
	return 0;
}
*/

//Q2. Write a C++ function using the default argument that is able to add 2 or 3 numbers.
//Solution:
/*
#include<iostream>
using namespace std;
int add(int x,int y=0,int z=0)
{
	return x+y+z;
}
int main()
{
	int a,b,c;
	cout<<"Enter three no.: ";
	cin>>a>>b>>c;
	cout<<"Sum = "<<add(a,b)<<"."<<endl<<"Sum = "<<add(a,b,c)<<".";
	return 0;
}
*/

//Q3.Define overloaded functions to calculate area of circle,area of rectangle and area of triangle.
//Solution:
/*
#include<iostream>
using namespace std;
float f1(int &a)
{
	return 3.14*a*a;
}
int f1(int &a,int &b)
{
	return a*b;
}
float f1(float &b,float &h)
{
	return (b*h)/2;
	//float a,ar;
	//s=(a+b+c)/2.0;
	//ar=sqrt(s*(s-a)*(s-b)*(s-c));//sqrt declare in c languages header file whose name is #include<math.h>
	//return ar
}
int main()
{
	int r,l,b;
	float h,base;
	cout<<"Enter the radius of circle: ";
	cin>>r;
	cout<<"Enter the length and the breadth of a rectangle: ";
	cin>>l>>b;
	cout<<"Enter the base and the height of a triangle: ";
	cin>>base>>h;
	cout<<"Area of circle = "<<f1(r)<<"."<<endl<<"Area of rectangle = "<<f1(l,b)<<"."<<endl<<"Area of triangle = "<<f1(base,h)<<".";
	return 0;
}
*/
//Q4.Write a fucntions using fuction overloading to find the maximum of two numbers and the both the numbers can be real or integers.
//Solution:
/*
#include<iostream>
using namespace std;
int max(int &a,int &b)
{
	//if(a>b)
	//	return a;
	//else
	//	return b;
	return a>b?a:b;
}
double max(double &a,double &b)
{
	//if(a>b)
	//	return a;
	//else
	//	return b;
	return a>b?a:b;
}
int main()
{
	int x,y;
	double a,b;
	cout<<"Enter two integers: ";
	cin>>x>>y;
	cout<<"Enter two real no.: ";
	cin>>a>>b;
	cout<<"The maximum of two integer numbers: "<<max(x,y)<<endl<<"The maximum of two real no.: "<<max(a,b);
	return 0;
}
*/

//Q5. Write functions using function overloading to add two numbers having different data types.
//Solution:

#include<iostream>
using namespace std;
int f1(int &a)
{
	return a;
}
float f1(float &a)
{
	return a;
}
float f1(int &a,float &b)
{
	return a+b;
}
int main()
{
	int x;
	float y;
	cout<<"Enter a number: ";
	cin>>x;
	cout<<"Enter a flaot no.: ";
	cin>>y;
	cout<<"The sum of two values in different datatypes = "<<f1(x)+f1(y);
	
	cout<<"The sum of two values in different datatypes = "<<f1(x,y);
	return 0;
}