//Q1. Write a c++ program to print "Hello MYSIRG" on the screen.

//Solution:
/*
#include<iostream>
using namespace std;
int main()
{
	cout<<"Hello MYSIRG";
	return 0;
}
*/

//Q2. Write a C++ program to print "Hello" on the first line and "MYSIRG" on the second line using endl.
//Solution:
/*
#include<iostream>
//using namespace std;
int main()
{
	std::cout<<"Hello"<<std::endl<<"MYSIRG";
	return 0;
}
*/

//Q3. Write a C++ program to calculate the sum of two numbers.
//Solution:
/*
#include<iostream>
using namespace std;
int main()
{
	int a,b,Sum;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	Sum=a+b;
	cout<<"The sum of "<<a<<" and "<<b<<" is "<<Sum<<".";
	return 0;
}
*/

//Q4. Write a C++ program to calculate the area of a circle.
//Solution:
/*
#include<iostream>
using namespace std;
int main()
{
	int r;
	float Area;
	cout<<"Enter a radius of a circle: ";
	cin>>r;
	Area = 3.14*r*r;
	cout<<"Area of Circle is "<<Area<<".";
	return 0;
} 
*/

//Q5. Write a C++ program to calculate the volume of a cuboid.
//Solution: 

#include<iostream>
using namespace std;
int main()
{
	int l,b,volume;
	cout<<"Enter the length and breadth of a cubiod: ";
	cin>>l>>b;
	volume=l*b;
	cout<<"The Volume of cubiod is "<<volume<<".";
	return 0;
}