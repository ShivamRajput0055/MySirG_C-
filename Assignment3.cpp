//Q1. Write a C++ program to calculate an average of 3 numbers.
//Solution:
/*
#include<iostream>
using namespace std;
int main()
{
	float x,y,z;
	cout<<"Enter three numbers: ";
	cin>>x>>y>>z;
	cout<<"The average of three numbers are "<<(x+y+z)/3<<".";
}
*/

//Q2. Write a C++ program to calculate the square of a number.
//Solution:
/*
#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter a number: ";
	cin>>x;
	cout<<"The square of "<<x<<" is "<<x*x;
	return 0;
}
*/

//Q3. Write a C++ program to swap values of two int variables without using third variables.
//Solution: 
/*
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"The Swap number is "<<a<<" and "<<b;
	return 0;
}
*/

//Q4. Write a C++ program to find the maximum of two numbers.
//Solution:
/*
#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter two numbers: ";
	cin>>x>>y;
	if(x>y)
		cout<<x<<" is Maximum.";
	else 
		cout<<y<<" is Maximum.";
	return 0;
}
*/

//Q5. Write a C++ program to all the numbers of an array of size 10.
//Solution: 
/*
#include<iostream>
using namespace std;
int main()
{
	int a[10],Sum=0,i;
	cout<<"Enter 10 numbers: ";
	for(i=0;i<=9;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<=9;i++)
	{
		Sum=Sum+a[i];
	}
	cout<<"Sum of 10 numbers: "<<Sum<<".";
	return 0;
}
*/

