//Q1. Define a class Time with instance variables hr , min and sec.Provide instance methods setTime() and showTime(). setTime() method has formal arguments with the same name as instance variables.Also define setters and getters.
//Q2. In Question-1,define a method to dynamically create an array of time objects with specified size (received through argument) and return array.
//Q3. In Question-1,define a method to sort Time object array.
//Q4. In Question-1,define a method to display Time object array values.Array is received through argument.
//Solution:

/*
#include<iostream>
using namespace std;
class Time
{
	private:
		int hr,min,sec;
	public:
		void setTime(int hr,int min,int sec)
		{
			this->hr=hr;
			this->min=min;
			this->sec=sec;
		}
		void showTime()
		{
			std::cout<<std::endl<<"Time: "<<hr<<"hr:"<<min<<"min:"<<sec<<"sec."<<std::endl;
		}
		void sethour(int hr)
		{
			this->hr=hr;
		}
		void setminute(int min)
		{
			this->min=min;
		}
		void setsecond(int sec)
		{
			this->sec=sec;
		}
		int gethour()
		{
			return hr;
		}
		int getminute()
		{
			return min;
		}
		int getsecond()
		{
			return sec;
		}
		bool operator>(Time T)
		{
			if(hr>T.hr)
				return true;
			else if(hr<T.hr)
				return false;
			else if(min>T.min)
				return true;
			else if(min<T.min)
				return false;
			else if(sec>T.sec)
				return true;
			else
				return false;
		}
};
Time* createArrayDynamically(int size)//Time* it will return the address ...
{
	return new Time[size];
}
void getValueArray(Time* Array,int sizeArray)//Time* Array it will pass the address of the first index of an array elemnts..
{
	int hr,min,sec;
	for(int i=0;i<sizeArray;i++)
	{
		cout<<"Enter time (hr min sec) for element " << i + 1 << ": ";
		cin>>hr>>min>>sec;
		Array[i].setTime(hr,min,sec);
	}
}
void sortArray(Time* Array,int sizeArray)
{
	for(int r=1;r<=sizeArray-1;r++)
	{
		for(int i=0;i<=sizeArray-1-r;i++)
		{
			if(Array[i]>Array[i+1])
            {
				Time temp;
				temp=Array[i];
				Array[i]=Array[i+1];
				Array[i+1]=temp;
			}
		}
	}
}
void displayData(Time* Array,int sizeArray)
{
	for(int i=0;i<sizeArray;i++)
	{
		Array[i].showTime();
	}
}
int main()
{
	Time T1,T2,*T3;
	int size=4;
	T1.setTime(2,35,40);
	T2.sethour(3);
	T2.setminute(31);
	T2.setsecond(24);
	T2.gethour();
	T2.getminute();
	T2.getsecond();
	T1.showTime();
	T2.showTime();
	T3=createArrayDynamically(size);
	getValueArray(T3,size);
	sortArray(T3,size);
	displayData(T3,size);
	delete []T3;
	return 0;
}
*/

//Q5. Define a class string with char pointer and the length of the string as instance member variables.Define a method to dynamically create an array of char type and hold the input string in such a way that the array length is just enough to accommodate the input string.
//Solution:

#include<iostream>
class string{
	private:
		char *p;
		int length;
	public:
		string(){
			p=null;
			length=0;
		}
		void inputstring()
		{
			int sizeArray=1,i;
			char *a,*b;
			a = new char[sizeArray];
			b = new char[sizeArray+1];
			for(i=0;i<size;i++)
				a[i]=b[i];
			b[i]='\0';
			delete []b;
			for(i=0;i<size;i++)
				p[i]=a[i];
			delete []a;
		}
};
using namespace std;
int main()
{
	
	return 0;
}