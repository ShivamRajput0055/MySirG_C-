//Q1. Define a class Complex with appropriate instance variables and the member functions.Define the following operators in the class:
/*
	1. +
	2. -
	3. *
	4. ==
*/

//Solution: 
/*
#include<iostream>
using namespace std;
class Complex{
	private:
		int a,b;
	public:
		Complex operator+(Complex C){
			Complex Temp;
			Temp.a=a+C.a;
			Temp.b=b+C.b;
			return Temp;
		}
		Complex operator-(Complex C){
			Complex Temp;
			Temp.a=a-C.a;
			Temp.b=b-C.b;
			return Temp;
		}
		Complex operator*(Complex T){
			Complex temp;
			temp.a=a*T.a-b*T.b;
			temp.b=a*T.b+b*T.a;
			return temp;
		}   
		bool operator==(Complex C){
			if(a==C.a && b==C.b)
				return true;//1
			else
				return false;//0
		}
		void setdata(int x,int y){
			a=x;
			b=y;
		}
		void showdata(){
			cout<<"=> a= "<<a<<" and b="<<b<<"."<<endl;
		}
};
using namespace std;
int main(){
	Complex C1,C2,C3;
	bool B1;
	C1.setdata(5,6);
	C2.setdata(5,6);
	C1.showdata();
	C2.showdata();
	C3=C1.operator+(C2);//C3=C1+C2;
	C3.showdata();
	C3=C1.operator-(C2);//C3=C1-C2;
	C3.showdata();
	C3=C1*C2;//C3=C1.operator*(C2);
	C3.showdata();
	 B1=C1==C2;//B1=C1.operator==(C2);
	if(B1==true)
		cout<<"Yes,C1 and C2 are equal to each other.\n";
	else
		cout<<"Yes,C1 and C2 are not equal to each other.\n";
	return 0;
}
*/

//Q2. Create a class Time which contains hour,min,and second as fields.Overloaded greater than ,(>)operator to compare two time objects.
//Solution:
/*
#include<iostream>
using namespace std;
class Time{
	private:
		int hr,min,sec;
	public:
		void settime(int x,int y,int z){
			hr=x;
			min=y;
			sec=z;
		}
		void showTime(){
			cout<<"Time: "<<hr<<"hr "<<min<<"min "<<sec<<"sec."<<endl;
		}
		bool operator>(Time T){
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
			else if(sec<T.sec)
				return false;
			else
				return false;
		}
};
int main(){
	Time T1,T2;
	bool T3;
	T1.settime(3,20,45);
	T2.settime(1,13,15);
	T1.showTime();
	T2.showTime();
	if(T1.operator>(T2))//if(T1>T2)
	{
		cout<<"Yes,T1 is greater than T2.\n";
	}
	else{
		cout<<"Yes,T2 is greater than T1.\n";
	}
	return 0;
}
*/

//Q3. In Question-2,overload pre-increment and post-increment operator to increment Time object value by one second.
//Solution:
/*
#include<iostream>
using namespace std;
class Time{
	private:
		int hr,min,sec;
	public:
		void settime(int x,int y,int z){
			hr=x;
			min=y;
			sec=z;
		}
		void showTime(){
			cout<<"Time: "<<hr<<"hr "<<min<<"min "<<sec<<"sec."<<endl;
		}
		bool operator>(Time T){
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
			else if(sec<T.sec)
				return false;
			else
				return false;
		}
		Time operator++(int)//post increment//If we cann't write "int" in the paranthesis then compliers confuse who is pre increment and who is post increment//That's why only increment overloading have special power to write "int".Then we write "int" then compliers understand this is post increment.
		{
			Time temp=*this;
			sec++;
			sec%=60;
			min+=sec/60;
			min%=60;
			hr+=min/60;
			return temp;
		}
		Time operator++()//pre increment
		{
			sec++;
			min+=sec/60;
			sec%=60;
			hr+=min/60;
			min%=60;
			return *this;//"*this" is used to return that return type we make it in that function .
		}
};
int main(){
	Time T1,T2,T3,T4;
	T1.settime(3,59,59);
	T2.settime(1,13,15);
	T1.showTime();
	T2.showTime();
	T3=++T1;
	T3.showTime();
	T3=T1++;
	T3.showTime();
	//T3=T1++;
	//T3.showTime();
	//T3=++T1;
	//T3.showTime();
	return 0;
}
*/

//Q4. In Question-2, overload operator+ to add two Time objects.

//Solution:
/*
#include<iostream>
using namespace std;
class Time{
	private:
		int hr,min,sec;
	public:
		void settime(int x,int y,int z)
		{
			hr=x;
			min=y;
			sec=z;
		}
		void showTime(){
			cout<<"Time: "<<hr<<"hr "<<min<<"min "<<sec<<"sec."<<endl;
		}
		Time operator+(Time T){
			Time temp;
			temp.hr=hr+T.hr;
			temp.min=min+T.min;
			temp.sec=sec+T.sec;
			temp.min+=temp.sec/60;
			temp.sec%=60;
			temp.hr+=temp.min/60;
			temp.min=temp.min%60;
			return temp;
		}
};
int main()
{
	Time T1,T2,T3;
	T1.settime(3,58,59);
	T2.settime(1,13,15);
	T3=T1+T2;
	T1.showTime();
	T2.showTime();
	T3.showTime();
	return 0;
}
*/

//Q5. Define a class matrix to represent 3*3 matrix. Provide appropriate instance methods. Also define operator +,operator -,operator * to perform addition, substraction and the multiplication operations respectively.
//Solution:

#include<iostream>
using namespace std;
class Matrix{
	private:
		int a[3][3];
	public:
	void inputMatrix(){
		cout<<"=>Enter 9 numbers in a matrix: ";
		for(int i=0;i<=2;i++)
			for(int j=0;j<=2;j++)
				cin>>a[i][j];
	}
	void showMatrix(){
		cout<<endl<<endl;
		for(int i=0;i<=2;i++)
		{
			for(int j=0;j<=2;j++)
				cout<<a[i][j]<<" ";
			cout<<endl;
		}
	}
	Matrix operator+(Matrix M){
		Matrix temp;
		cout<<endl<<"Add Matrix =>";
		for(int i=0;i<=2;i++)
		{
			for(int j=0;j<=2;j++)
				temp.a[i][j]=a[i][j]+M.a[i][j];
		}
		return temp;
	}
	Matrix operator-(Matrix M){
		Matrix temp;
		cout<<endl<<"Substraction Matrix =>";
		for(int i=0;i<=2;i++)
		{
			for(int j=0;j<=2;j++)
				temp.a[i][j]=a[i][j] - M.a[i][j];
		}
		return temp;
	}
	Matrix operator*(Matrix M){
		Matrix temp;
		cout<<endl<<"Multiplication Matrix =>";//Not Completed yet
		for(int i=0;i<=2;i++)
		{
			for(int j=0;j<=2;j++)
			{
				//for()
				temp.a[i][j]=a[i][j]+M.a[i][j];
			}
		}
		return temp;
	}
};
int main(){
	Matrix M1,M2,M3;
	M1.inputMatrix();
	M2.inputMatrix();
	M1.showMatrix();
	M2.showMatrix();
	M3=M1+M2;
	M3.showMatrix();
	M3=M1-M2;
	M3.showMatrix();
	M3=M1*M2;
	M3.showMatrix();
	return 0;
}