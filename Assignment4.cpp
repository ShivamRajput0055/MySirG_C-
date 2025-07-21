//Q1. Define a C++ function to print all prime numbers between two given numbers.
//Solution: 

/*#include<iostream>
using namespace std;*/
/*
void isprime(int a,int b)
{
	int i,j;
	for(i=a+1;i<=b-1;i++)
	{
		for(j=2;j<=b-1;j++)
		{
			if(i%j==0)
				break;
		}
		if(i==j)
			cout<<"Prime no. between "<<a<<" and "<<b<<" are "<<i<<"."<<endl;
	}
}
*/
/*
int isprime(int x)
{
	int i;
	for(i=2;i<=x-1;i++)
	{
		if(x%i==0)
			return 0;
	}
	return 1;
}
void printprime(int a,int b)
{
	int i;
	for(i=a+1;i<=b-1;i++)
	{
		if(isprime(i))
			cout<<i<<" ";
	}
}
int main()
{
	int x,y;
	cout<<"Enter two numbers in we need to find all the prime no.: ";
	cin>>x>>y;
	//isprime(x,y);
	printprime(x,y);
	return 0;
}
*/
//Q2. Define a C++ function to find the highest value digit in a given number.
//Solution: 
/*
#include<iostream>
using namespace std;
int highestvaluedigit(int a)
{
	int max;
	max=a%10;//486%10=6
	a=a/10;//486/10=48
	while(a)//1st step a=48//2nd step a=4//3rd step a=0//which means it not run......
	{
		if(max<a%10)//6<8//is true then//but in the given case it is true...// 2nd step 8<4
			max=a%10;//max=8// 2nd step: Not run
		a=a/10;//48/10=4 //2nd step: 4/10==0
	}
	return max;
}
int main()
{
	int x;
	cout<<"Enter a number: ";
	cin>>x;
	cout<<"The highest value digit of "<<x<<" is "<<highestvaluedigit(x);
	return 0;
}*/
						//or
/*
#include<iostream>
using namespace std;
int highestvaluedigit(int &a)
{
	int max;
	max=a%10;
	a=a/10;
	while(a)
	{
		if(max<a%10)
			max=a%10;
		a=a/10;
	}
	return max;
}
int main()
{
	int x;
	cout<<"Enter a number: ";
	cin>>x;
	cout<<"The highest value digit of "<<x<<" is "<<highestvaluedigit(x)<<".";
	return 0;
}
*/

//Q3. Define a C++ function to calculate x raised to the power y.
//Solution:
/*
#include<iostream>
using namespace std;
int power(int &a,int &b)				//Not Completed//
{
	if(b==0)
		return 1;
	else if(b>0)
		return 
	else
		return 
}
int main()
{
	int x,y;
	cout<<"Enter a number: ";
	cin>>x;
	cout<<"Enter the power: ";
	cin>>y;
	cout<<"The power of "<<x<<" raised to the power "<<y<<power(x,y)<<".";
	return 0;
}
*/