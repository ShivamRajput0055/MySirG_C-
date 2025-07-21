/*Q1. Define a C++ class fraction 
		class fraction
		{
				long numerator;
				long denominator;
			public:
				fraction(long n=0,long d=0);
		}
	Define an operator + to add fraction object.*/
//Solution:
/*
#include<iostream>
using namespace std;
long hcf(long a,long b)
{
    long h;
    for(h=a<b?a:b;h>=1;h--)
        if(a%h==0 &&b%h==0)
            return h;
	return 1;
}
class fraction{
	private:
		long numerator;
		long denominator;
	public:
		fraction(long n=0,long d=0):numerator(n),denominator(d){}//n=0 goes in the numerator and d=0 goes in the denominator
		fraction operator+(fraction F){
			fraction temp;
			temp.numerator=numerator*F.denominator+F.numerator*denominator;
			temp.denominator=denominator*F.denominator;
			long h=hcf(temp.numerator,temp.denominator);
			temp.numerator/=h;
			temp.denominator/=h;
			return temp;
		}
		void display(){
			cout<<endl;
			cout<<"Addition of two fraction= "<<numerator<<"/"<<denominator<<".";
		}
};
int main()
{
	fraction F1(2,6),F2(5,6),F3,F4;
	F3=F1+F2;
	F3.display();
	F4.display();
	return 0;
}
*/

//Q2. In Question-1, define an operator < to compare two fraction objects.
//Solution:
/*
#include<iostream>
using namespace std;
long hcf(long a,long b)
{
    long h;
    for(h=a<b?a:b;h>=1;h--)
        if(a%h==0 &&b%h==0)
            return h;
	return 1;
}
class fraction{
	private:
		long numerator;
		long denominator;
	public:
		fraction(long n=0,long d=0):numerator(n),denominator(d){}//n=0 goes in the numerator and d=0 goes in the denominator
		fraction operator+(fraction F){
			fraction temp;
			temp.numerator=numerator*F.denominator+F.numerator*denominator;
			temp.denominator=denominator*F.denominator;
			long h=hcf(temp.numerator,temp.denominator);
			temp.numerator/=h;
			temp.denominator/=h;
			return temp;
		}
		void display(){
			cout<<endl;
			cout<<"Addition of two fraction= "<<numerator<<"/"<<denominator<<".";
		}
		bool operator<(fraction F){
			return  numerator*F.denominator < F.numerator*denominator;//if we compare only numerator of both the case means both the variables then we multipy both the variable's denominator in variables numerator.
		}
};
int main()
{
	fraction F1(12,3),F2(5,2),F3;
	F3=F1+F2;
	F3.display();
	cout<<endl;
	if(F1<F2)
		cout<<"F2 is greater than F1.";
	else
		cout<<"F1 is greater than F2.";
	return 0;
}
*/

//Q3. Consider a class Distance 

	/* class Distance {
		private:
			int km,m,cm;
		public:
			//methods;
	};*/
//Overloaded the operator+ to add two distance objects.

//Soluiton:
/*
#include<iostream>
using namespace std;
class Distance{
	private:
		int km,m,cm;
	public:
		Distance(int k=0,int M=0,int c=0):km(k),m(M),cm(c){}
		void normalise();
		Distance operator+(Distance D){
			Distance Temp;
			Temp.km=km+D.km;
			Temp.m=m+D.m;
			Temp.cm=cm+D.cm;
			Temp.normalise();
			return Temp;
		}
		void showDistance();
};
void Distance::showDistance(){
	cout<<endl<<"Distance: "<<km<<"Km "<<m<<"m "<<cm<<"cm."<<endl;
}
void Distance::normalise(){
	m+=cm/100;
	cm%=100;
	km+=m/1000;
	m%=1000;
}
int main()
{
	Distance D1(3,50,10),D2(1,1200,100),D3;
	D3=D1+D2;
	D3.showDistance();
	return 0;
}
*/

//Q4. In Question-3,define operator pre decrement and post decrement to decrease  distance by 1cm.
//Solution:
/*
#include<iostream>
using namespace std;
class Distance{
	private:
		int km,m,cm;
	public:
		Distance(int k=0,int M=0,int c=0):km(k),m(M),cm(c){}
		void normalise();
		Distance operator+(Distance D){
			Distance Temp;
			Temp.km=km+D.km;
			Temp.m=m+D.m;
			Temp.cm=cm+D.cm;
			Temp.normalise();
			return Temp;
		}
		void showDistance();
		Distance operator--()//pre decrement
		{
			Distance temp;
			if(km==0 && m==0 && cm==0)
			{
				temp.km=km;
				temp.m=m;
				temp.cm=cm;
			}
			else
			{
				if(cm==0)
				{
					cm=100;
					if(m==0)
					{
						m=999;
						--km;
					}
					else
					{
						--m;
					}
				}
				temp.cm=--cm;
				temp.m=m;
				temp.km=km;
			}
			return temp;
		}
		Distance operator--(int)//post decrement
		{
			Distance temp;
			if(km==0 && m==0 && cm==0)
			{
				temp.km=km;
				temp.m=m;
				temp.cm=cm;
			}
			else
			{
				if(cm==0)
				{
					cm=100;
					if(m==0)
					{
						m=999;
						--km;
					}
					else
						--m;
				}
				temp.cm=cm--;
				temp.km=km;
				temp.m=m;
			}
			return temp;
		}
};
void Distance::showDistance(){
	cout<<endl<<"Distance: "<<km<<"Km "<<m<<"m "<<cm<<"cm."<<endl;
}
void Distance::normalise(){
	m+=cm/100;
	cm%=100;
	km+=m/1000;
	m%=1000;
}
int main()
{
	Distance D1(3,0,0),D2(1,1200,100),D3;
	D3=D1+D2;
	D3.showDistance();
	D3=--D1;//pre decrement
	D3.showDistance();
	D3=D1--;
	D3.showDistance();
	D3=D1--;
	D3=D1--;
	D3=D1--;
	D3.showDistance();
	return 0;
}
*/

//Q5. Consider  the following class Array

	/*class Array
	{
		private:
			int *p;
			int size;
		public:
			//methods
	};*/
/*	
Define constructor to allocate an array of given size(size is given through parameter).
Define a subscript operator to access element at given index.Define destructor to deallocates the memory of array.
*/

//Solution:


#include<iostream>
using namespace std;
class Array{
	private:
		int *p;
		int size;
	public:
		Array(int s)
		{
			size=s;
			p=new int(size);
		}
		int& operator[](int index) {
			if (index >= 0 && index < size) {
				return p[index];
			}
			cout << "=>Invalid array Index." << endl;
			exit(EXIT_FAILURE);
		}
		~Array()
		{
			delete []p;
		}
		int getSize(){
			return size;
		}
};
int main()
{
	Array A1(5);
	for(int i=0;i< A1.getSize();++i)
	{
		A1[i]=i*10;
	}
	cout<<endl;
	for(int i=0;i< A1.getSize(); ++i)
	{
		cout<<A1[i]<<" ";
		A1[i]+=1;
	}
	cout<<endl;
	for (int i = 0; i < A1.getSize(); ++i) {
        cout << A1[i] << " ";
    }
	cout<<endl;
	return 0;
}
