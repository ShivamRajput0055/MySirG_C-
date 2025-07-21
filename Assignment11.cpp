//Question 1: Define a class Numbers with size and arr pointer as instance variables. Provides Constructor to intialise instance members,dynamically allocate an array of given size and store address in arr variable of object.Also define destructor to deallocate memory of array. Implement deep copy using copy constructor to avoid memory issues.
//Solution:

/*
#include<iostream>
using namespace std;
class Numbers
{
	private:
		int size;
		int *arr;
	public:
		Numbers(int s){
			size=s;
			arr=new int[size];
			cout<<*arr<<endl;
		}
		Numbers(const Numbers &n)//We can write the const due to the good practise of copy constructor and if we cann;t write "const" keyword then The error in the provided code is that the copy constructor is not defined with the const keyword.
		{
			size=n.size;
			cout<<"=>"<<size<<endl;
            arr=new int[size];
			for(int i=0;i<size;i++)
			{
				arr[i]=n.arr[i];
				cout<<" "<<arr[i]<<endl;
			}
		}
		~Numbers(){
			delete []arr;
		}
};
int main()
{
	Numbers N1(4),N2(N1);
	return  0;
}
*/

//Q2. Define a class student and write a program to enter student details using constructor and define member function to display all the details.
//Solution:
/*
#include<iostream>
using namespace std;
class student{
	private:
		int roll_No;
		char name[30];
	public:
		student(){
			cout<<"=>Enter your name: ";
			fgets(name,30,stdin);
			cout<<"Enter a roll NO: ";
			cin>>roll_No;
		}
		void display_Detail(){
			cout<<"Name: "<<name<<"Roll No: "<<roll_No;
		}
};
int main(){
	student S1;
	S1.display_Detail();
	return 0;
}
*/

//Q3. Define a class Date with d,m,y as instance variables. Initialise members using intialisers.
//Solution:
/*
#include<iostream>
using namespace std;
class Date{
		private:
			int d,m,y;
		public:
			Date():d(02),m(06),y(2006)
			{
				cout<<"DOB: "<<d<<"-"<<m<<"-"<<y;
				cout<<endl;
			}
			Date(int xx,int yy,int zz):d(xx),m(yy),y(zz){}//if we use different local variables then it cann't give error and its only one work to pass the value from local variables to instance variable.
			//Date(int d,int m,int y):d(d),m(m),y(y)//if we use same name then it resolve the name conflict 
			//{
			//	cout<<"DOB: "<<d<<"-"<<m<<"-"<<y;
			//	cout<<endl;
			//}
			void display(){
				cout<<"DOB: "<<d<<"-"<<m<<"-"<<y;
				cout<<endl;
			}
};
int main(){
	Date D1,D2(1,2,3003);
	D2.display();
	return 0;
}
*/

//Q4. Define a class Room for a hotel management project with room number,roomtype,is_AC,price as instance variables.Intialise instance variables using constructor.
//Solution:
/*
#include<iostream>
#include<string.h>
using namespace std;
class Room{
	private:
		int room_No;
		char room_type[40],name[30];
		char is_AC[20];
		float price;
	public:
		Room(){
			cout<<"=>Enter your name: ";
			fgets(name,30,stdin);
			cout<<"=>Enter your Room No.: ";
			cin>>room_No;
			getchar();
			cout<<"=>Enter your Room Type(VIP / GENERAL): ";
			fgets(room_type,40,stdin);
			cout<<"=>Enter the price of your room: ";
			cin>>price;
			getchar();
			cout<<"=>Please Enter \" AC \" if The Ac is present in your Room otherwise \"General\": ";
			fgets(is_AC,20,stdin);
		}
		void Display(){
			cout<<"\n\n\t=====Room Details=====\n\n"<<"Name: "<<name<<"Room No.: "<<room_No<<endl<<"Room Type: "<<room_type<<"Price: "<<price<<endl<<"AC/General: "<<is_AC;
		}
};
int main(){
	Room R1;
	R1.Display();
	return 0;
}
*/

//Q5. Define Circle class with radius as instance variable.Define two constructor in the class non-parameterised and parameterised.
//Solution:

#include<iostream>
using namespace std;
class Circle{
	private:
		int r;
	public:
		Circle(){
			r=1;
			cout<<"Radius: "<<r<<endl;
			float Area=3.14*r*r;
			cout<<"Area= "<<Area<<endl;
		}
		Circle(int r){
			float Area=3.14*r*r;
			cout<<"Area= "<<Area<<endl;
		}
};
int main(){
	Circle C1,C2(5);
	return 0;
}