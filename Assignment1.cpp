/*Q1. Write a program to check whether a given number is even or odd.*/
//Solution:
/*
#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter a number(Natural Number): ";
	cin>>x;
	if(x%2==0)
		cout<<x<<" is an Even number."<<endl;
	else
		cout<<x<<" is an Odd Number."<<endl;
	return 0;
}
*/

/*Q2. Write a program to calculate the factorial of a number.*/
//Solution:
/*
#include<iostream>
using namespace std;
int main()
{
	int x,i=1,y,size;
	cout<<"Enter a number: ";
	cin>>x;
	cout<<"How many do you want: ";
	cin>>size;
	//while(i<=size)
	//{
	//	y=x*i;
	//	i++;
	//	cout<<y<<endl;
	//}
	for(i=1;i<=size;i++)
	{
		y=x*i;
		cout<<y<<endl;
	}
	return 0;
}*/

/*Q3. Write a program to swap values of two int variables.*/
//Solution:
/*
#include<iostream>
using namespace std;
int main()
{
	//int x,y,z;
	int x,y;
	cout<<"Enter two variables: ";
	cin>>x>>y;
	//z=x;
	//x=y;
	//y=z;
	x=x+y;
	y=x-y;
	x=x-y;
	cout<<"Reverse form is "<<x<<" and "<<y;
	return 0;
}*/

/*Q4.Write a program to calculate LCM of two numbers(TSRS).*/
//Solution:
/*
#include<iostream>
using namespace std;
int main()
{
	int x,y,LCM;
	cout<<"Enter two numbers: ";
	cin>>x>>y;
	for(LCM=x>y?x:y;LCM<=x*y;LCM++)
	{
		if(LCM%x==0 && LCM%y==0)
			break;
	}
	cout<<"LCM of "<<x<<" and "<<y<<" is "<<LCM;
	return 0;
}
*/
//or
/*Q4. Write a C function to calculate LCM of two numbers(TSRS).*/
//Solution:

#include<iostream>
using namespace std;
int LCM(int x,int y);
int LCM(int x,int y)
{
	int i;
	for(i=x>y?x:y;i<=x*y;i++)
	{
		if(i%x==0 && i%y==0)
			break;
	}
	return i;
}
int main()
{
	int a,b;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	cout<<"LCM of "<<a<<" and "<<b<<" is "<<LCM(a,b)<<".";
	return 0;
}

/*Q5.Write a C++ Function to check whether a given number is a Prime number or not(TSRS).*/
//Solution:
/*
#include<iostream>
using namespace std;
int prime(int x)
{
	int i;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
			break;
	}
	if(x==i)
		return 0;
	else
		return 1;
}
int main()
{
	int a;
	cout<<"Enter two numbers: ";
	cin>>a;
	cout<<prime(a);
	return 0;
} 
*/

//Q5.