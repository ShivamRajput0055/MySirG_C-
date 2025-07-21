//Question 1:Define a class Cubiod with length,breadth and height as instance member variables. Define a Constructors to initialise member variables.

//Solution:
/*
#include<iostream>
using namespace std;
class Cubiod{
	private:
		int length,breadth,height;
	public:
		Cubiod(){
			length=1;
			breadth=1;
			height=1;
		}
		void volume(int x,int y,int z)
		{
			length=x;
			breadth=y;
			height=z;
		}
		void showdata()
		{
			cout<<"Volume of Cubiod= "<<length*breadth*height<<"m^3.";
		}
};
int main()
{
	Cubiod C1;
	C1.volume(2,6);
	C1.showdata();
	return 0;
}
*/
//Question 2:Define a class Customer with instance members cust_id, name, email, mobile.Define non parameterised constructor and parameterised constructor in the class.

//Solution:
/*
#include<string.h>
#include<iostream>
using namespace std;
class Customer
{
    private:
        int cust_id;
        char name[20];
        char email[40];
        char mobile[15];
    public:
        Customer()
        {
            cust_id=1945;
            strcpy(name,"Anonymous");
            strcpy(email,"xyz@gmail.com");
            strcpy(mobile,"97020202020");
			cout<<cust_id<<endl<<name<<endl<<email<<endl<<mobile<<endl<<endl;
        }
        Customer(int id, const char* n, const char* e, const char* m)
        {
            cust_id=id;
            strcpy(name,n);
            strcpy(email,e);
            strcpy(mobile,m);
			cout<<cust_id<<endl<<name<<endl<<email<<endl<<mobile<<endl<<endl;
        }
};
int main() {
    Customer C1(5, "Shivam Kumar", "KunalKumarsinghhjp1@gmail.com", "+91-7257990055");
    Customer C2;
    return 0;
}
*/

//Question 3:Define a class Time with hr,min,sec as instance member variables.Define constructor to initialise time object.
//Solution:
/*
#include<iostream>
using namespace std;
class Time{
	private:
		int hr,min,sec;
	public:
		Time()
		{
			hr=0;
			min=0;
			sec=0;
			cout<<"Time: "<<hr<<"hr:"<<min<<"min:"<<sec<<"sec"<<endl;
		}
		Time(int a,int b,int c)
		{
			hr=a;
			min=b;
			sec=c;
			cout<<"Time: "<<hr<<"hr:"<<min<<"min:"<<sec<<"sec"<<endl;
		}
		void setdata( int , int , int );
		void showdata()
		{
			cout<<"Time: "<<hr<<"hr:"<<min<<"min:"<<sec<<"sec"<<endl;
		}
};
void Time::setdata(int x,int y,int z){
	hr=x;
	min=y;
	sec=z;
}
int main()
{
	Time T1,T2(2,13,45);
	T1.setdata(1,25,13);
	T1.showdata();
	return 0;
}
*/
//Question 4:Define a class Book with bookid,title and price as instance member variables.Define non-parameterised and parameterised constructor in the class.
//Solution:

/*
#include<iostream>
#include<string.h>
using namespace std;
class Book{
	private:
		int bookid;
		char title[20];
		float price;
	public:
		Book()
		{
			bookid=0;
			strcpy(title,"No-title");
			price=0.0f;
			cout<<"Bookid : "<<bookid<<endl<<"Title : "<<title<<endl<<"Price : "<<price<<endl<<endl;
		}
		Book(int x,const char* z,float y)
		{
			bookid=x;
			strcpy(title,z);
			price=y;
			cout<<"Bookid : "<<bookid<<endl<<"Title : "<<title<<endl<<"Price : "<<price<<endl<<endl;
		}
};
int main()
{
	Book B1,B2(55352,"C with class",34.5f);
	return 0;
}
*/

//Question 5:Define a class Complex with instance variables for real and imaginary part of a complex number.Define only one parameterised constructor in the class to initialise complex object.Also define showData method in the class to display object data. Now create an array of Complex class with size 5 and display values of each object.

//Solution:

#include<iostream>
using namespace std;
class Complex{
	private:
		int a,b;
	public:
		Complex(int x,int y)
		{
			a=x;
			b=y;
		}
		void showdata(int x)
		{
			cout<<x+1<<". Complex No.: "<<a<<"+"<<b<<"i"<<endl<<endl;
		}
};
int main()
{
	int i;
	Complex a[5]={Complex(1,2),Complex(3,4),Complex(5,6),Complex(7,8),Complex(9,10)};
	for(i=0;i<5;i++)
	{
		a[i].showdata(i);
	}
	return 0;
}