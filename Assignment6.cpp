//Q1. Define a C++ function to sort an array of integers in ascending or descending order depending on bool type argument (true for ascending and false for descending).Use default argument to implement it.

//Solution:
/*
#include<iostream>
using namespace std;
void sorting(int (&b)[],int size_b,bool var)
{
	int temp,r,i;
	for(r=0;r<size_b;r++)
	{
		for(i=0;i<size_b-1-r;i++)
		{
			if(b[i]>b[i+1])
			{
				temp=b[i];
				b[i]=b[i+1];
				b[i+1]=temp;
			}
		}
	}
	if(var)
	{
		for(i=0;i<size_b;i++)
			cout<<b[i]<<endl;
	}
	else
	{
		for(i=size_b-1;i>=0;i--)
			cout<<b[i]<<endl;
	}
}
int main()
{
	int size,a[5],i;
	bool condition;
	cout<<"Enter the no. of variables in an array: ";
	cin>>size;
	cout<<"Enter "<<size<<" number: ";
	for(i=0;i<=size-1;i++)
		cin>>a[i];
	cout<<"Enter the boolean statement: ";
	cin>> boolalpha >>condition;
	//cin >> boolalpha >> condition; // Read boolean value properly and its means it helps us to see what the exact copy when the user was typed i.e, if the user typed true that means it will show true not false.Ok and it cann't convert true into 1 and false into 0.
	sorting(a,size,condition);
	return 0;
}
*/

//Q2. Define a function to sort an array of strings in ascending or descending order depending on bool type argument(true for ascending order and false for descending order) Use default argument to implement it.
//Solution:

#include<iostream>
using namespace std;
void sorting(string,int,bool);
void sorting(string a[]=0,int j=0,bool var=0)
{
	
}
int main()
{
	int size,i,j;
	string b[i];
	bool condition;
	cout<<"Enter the no. of variables in a sting: ";
	cin>>i;
	cout<<"Enter the variables: ";
	for(j = 0;j < i; j++)
		cin>>b[j];
	cout<<"Enter the bool type argument: ";
	cin>>boolalpha>>condition;
	sorting(b,i,condition);
	return 0;
}