//Q1. Define a class Complex to represent a complex number with instance variables a and b to store real and imaginary parts. Also define following member functions.
			/*1.void setData(int,int)
			  2.void showData()
			  3.Complex add(Complex)
			  4.Complex substract(Complex)
			  4.Complex multiply(Complex)*/
			 
//Solution:
/*
#include<iostream>
using namespace std;
class Complex{
	private:
		int a,b;
	public:
		void setdata();
		void showData();
		Complex add(Complex);
		Complex Sub(Complex);
		Complex Multiply(Complex);
		void Realformatadd();
		void Realformatsub();
		
};
void Complex::setdata()
{
	cout<<"Enter the real part: ";
	cin>>a;
	cout<<"Enter the Imaginary part: ";
	cin>>b;
}
Complex Complex::Multiply(Complex C){
	Complex temp;
	temp.a=a*C.a-b*C.b;
	temp.b=a*C.b+b*C.a;
	return temp;
}
Complex Complex::Sub(Complex C)
{
	Complex temp;
	temp.a=a-C.a;
	temp.b=b-C.b;
	return temp;
}
Complex Complex::add(Complex C)
{
	Complex temp;
	temp.a=a+C.a;
	temp.b=b+C.b;
	return temp;
}
void Complex::showData()
{
	cout<<"=>Real Part= "<<a<<" and Imaginary Part= "<<b<<endl;
}
void Complex::Realformatadd()
{
	cout<<"( "<<a<<" + "<<b<<"i )";
}
void Complex::Realformatsub()
{
	cout<<"( "<<a<<" - "<<b<<"i )";
}
int main()
{
	Complex C1,C2,C3,C4,C5;
	C1.setdata();
	C2.setdata();
	C1.showData();
	C2.showData();
	C3=C1.add(C2);
	C4=C1.Sub(C2);
	//C5=C1.Multiply(C2);
	cout<<"Add: ";
	C3.showData();
	cout<<"Sub: ";
	C4.showData();
	//cout<<"Multiply: ";
	//C5.showData();
	C3.Realformatadd();
	C4.Realformatsub();
	return 0;
}
*/
//Q2. Define a class Time to represent a time with instance variables h,m and s to store hour, minute, and second. Also define following member functions:

		/*
			1.Void setTime(int ,int ,int )
			2.void showTime()
			3.void normalize()
			4.Time add(Time)
			5.boos is_greater(Time)
		*/
		
//Solution:
/*
#include<iostream>
using namespace std;
class Time{
	private:
		int h,m,s;
	public:
		void setTime(int,int,int);//This code is not completed we will do it later.....
		void showTime();
		Time add(Time);
		void normalize();
		bool is_greater(Time);
};

bool Time::is_greater(Time T){
	normalize();
	T.normalize();
	if(h>T.h)
		return true;
	else if(h==T.h && m>T.m)
		return true;
	else if(h==T.h && m==T.m && s>T.s)
		return true;
	else
		return false;
}
void Time::normalize(){
	h=h+m/60;
	m=m+s/60;
	m=m%60;
	s=s%60;
	h%=24;
}
void Time::setTime(int x,int y,int z)
{
	h=x;
	m=y;
	s=z;
}
Time Time::add(Time C)
{
	Time temp;
	temp.h=h+C.h;
	temp.m=m+C.m;
	temp.s=s+C.s;
	temp.normalize();
	return temp;
}
void Time::showTime()
{
	cout<<h<<"hr "<<m<<"min "<<s<<"sec"<<endl;
}
int main()
{
	Time T1,T2,T3;
	T1.setTime(3,63,70);
	T2.setTime(2,13,20);
	T1.showTime();
	T3=T1.add(T2);
	T2.showTime();
	cout<<"Time's Addition: ";
	T3.showTime();
	T1.normalize();
	if(T1.is_greater(T2))
	{
		T1.normalize();
		cout<<"Current Time is greater than Called Time."<<endl<<endl<<"Where, Current Time = ";
		T1.showTime();
	}
	else
	{
		T2.normalize();
		cout<<"Called Time is greater than Current Time."<<endl<<endl<<"Where, Called Time = ";
		T2.showTime();
	}
	return 0;
}
*/
//Q3. Define a class TestResult with properties roll_no,right,wrong,net_score.Also define class properties right_weightage,wrong_weightage.Provide methods to set and get all the properties.
//Solution:

/*
#include<iostream>
using namespace std;
class TestResult{
	private:
		int rollNo,right,wrong,net_score,x,y,right_weightage,wrong_weightage;
	public:
	void setdata(int x,int y)//for right or wrong//
	{
		right=x;
		wrong=y;
	}
	void getdata()//for right or wrong//
	{
		cout<<"Total No. of right question: "<<right<<endl;
		cout<<"Total No. of wrong question: "<<wrong<<endl;
	}
	void set_rollNo(int xy)
	{
		rollNo=xy;
	}
	int get_rollNo()
	{
		return rollNo;
	}
	void set_Right_weightage(int x)
	{
		right_weightage=x;
	}
	int get_Right_weightage()
	{
		return right_weightage;
	}
	void  set_Wrong_weightage(int x)
	{
		wrong_weightage=x;
	}
	int  get_Wrong_weightage()
	{
		return wrong_weightage;
	}
	int Net_score()
	{
		net_score=( right*get_Right_weightage() ) - ( wrong*get_Wrong_weightage() );
		return net_score;
	}
};
int main()
{
	TestResult T1,T2;
	T1.setdata(10,5);
	T1.getdata();
	T1.set_rollNo(12345);
	T1.set_Right_weightage(2);
	T1.set_Wrong_weightage(1);
		cout<<"Roll NO.: "<<T1.get_rollNo()<<endl;
		cout<<"Right_weightage: "<<T1.get_Right_weightage()<<endl;
		cout<<"wrong_weightage: "<<T1.get_Wrong_weightage()<<endl;
		cout<<"Net Score: "<<T1.Net_score();
	//T1.Net_score();
		cout<<endl<<endl;
	T2.setdata(15,3);
	T2.getdata();
	T2.set_rollNo(1234567);
	T2.set_Right_weightage(2);
	T2.set_Wrong_weightage(1);
		cout<<"Roll NO.: "<<T2.get_rollNo()<<endl;
		cout<<"Right_weightage: "<<T2.get_Right_weightage()<<endl;
		cout<<"wrong_weightage: "<<T2.get_Wrong_weightage()<<endl;
		cout<<"Net Score: "<<T2.Net_score();
		cout<<endl<<endl;
	return 0;
}
*/

//Q4.Write a driver function main() to use TestResult class(Question 3).Create an array to 5 testResult objects,set values to all the objects and the display the results in sorted order(by net_score).
//Solution:

#include<iostream>
using namespace std;
class TestResult{
	private:
		int rollNo,right,wrong,net_score,x,y;
		static int right_weightage,wrong_weightage;
	public:
		void setdata_Right(int x){right=x;}
		void setdata_Wrong(int y){wrong=y;}
		int getdata_Right(){return right;}
		int getdata_Wrong(){return wrong;}
		void set_RollNo(int x){rollNo=x;}
		int get_RollNo(){return rollNo;}
		static void setRight_weightage(int x){right_weightage=x;}
		static int getRight_weightage(){return right_weightage;}
		static void setWrong_weightage(int y){wrong_weightage=y;}
		static int getWrong_weightage(){return wrong_weightage;}
		void setnetScore(int x){net_score=x;}
		int getnetScore(){return net_score;}
};
void setTestResult(TestResult &R,int r,int rt,int wt)
{
	R.setdata_Right(rt);
	R.setdata_Wrong(wt);
	R.set_RollNo(r);
	R.setnetScore(R.getdata_Right() * TestResult::getRight_weightage() - R.getdata_Wrong() * TestResult::getWrong_weightage());
}
int TestResult::right_weightage;
int TestResult::wrong_weightage;
//void sort_by_netscore(TestResult TS[],int size)
//{
//	for()
//}
void showTestResults(TestResult S[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<"Details of test Result "<<i+1<<" : "<<endl<<endl;
		cout<<"Roll NO.: "<<S[i].get_RollNo()<<endl;
		cout<<"No. of right Answer: "<<S[i].getdata_Right()<<endl;
		cout<<"No. of wrong Answer: "<<S[i].getdata_Wrong()<<endl;
		cout<<"Net Score: "<<S[i].getnetScore()<<endl<<endl;
	}
}
int main()
{
	TestResult T[5];
	int right,wrong,rollNo;
	TestResult::setRight_weightage(3);
	TestResult::setWrong_weightage(2);
	for(int i=0;i<5;i++)
	{
		cout<<"Enter the details of test Result: "<<i+1<<endl;
		cout<<"Enter the Roll NO.: ";
		cin>>rollNo;
		cout<<"Enter the no. of right Answer: ";
		cin>>right;
		cout<<"Enter the no. of wrong Answer: ";
		cin>>wrong;
		cout<<endl<<endl;
		setTestResult(T[i],rollNo,right,wrong);
	}
	showTestResults(T,5);
	return 0;
}
/*
#include<iostream>
using namespace std;
class TestResult{
    private:
        int roll_no,right,wrong,net_score;
        static int right_weightage,wrong_weightage;
    public:
        void setRoll_no(int r) { roll_no=r;}
        void setRight(int r) { right=r;}
        void setWrong(int w) { wrong=w;}
        void setNetScore(int n) { net_score=n;}
        static void setRight_weightage(int rw){
            right_weightage=rw;
        }
        static void setWrong_weightage(int rw){
            wrong_weightage=rw;
        }
        int getRoll_no() { return roll_no;}
        int getRight() { return right;}
        int getWrong() { return wrong;}
        int getNetScore(){return net_score;}
        static int getRight_weightage() { return right_weightage;}
        static int getWrong_weightage() { return wrong_weightage;}
};
int TestResult::right_weightage;
int TestResult::wrong_weightage;
void setTestResult(TestResult &t,int r,int right,int wrong)
{
    t.setRoll_no(r);
    t.setRight(right);
    t.setWrong(wrong);
    t.setNetScore(t.getRight()*TestResult::getRight_weightage()-t.getWrong()*TestResult::getWrong_weightage());
}
void sortByNetScore(TestResult tr[],int size)
{
    int round,i;
    TestResult temp;
    for(round=1;round<size;round++)
    {
        for(i=0;i<=size-1-round;i++)
        {
            if(tr[i].getNetScore()<tr[i+1].getNetScore())
            {
                temp=tr[i];
                tr[i]=tr[i+1];
                tr[i+1]=temp;
            }
        }
    }
}
void showTestResults(TestResult tr[],int size){
    cout<<endl;
    cout<<"--------------------------------------";
    cout<<endl;
    cout<<"Roll No  Right  Wrong  Net Score";
    for(int i=0;i<size;i++)
    {
        cout<<endl;
        cout<<tr[i].getRoll_no()<<"  ";
        cout<<tr[i].getRight()<<"  ";
        cout<<tr[i].getWrong()<<"  ";
        cout<<tr[i].getNetScore()<<"  ";


    }
}
int main()
{
    int r,right,wrong;
    TestResult tr[5];
    TestResult::setRight_weightage(3);
    TestResult::setWrong_weightage(-1);
    for(int i=0;i<5;i++)
    {
        cout<<"Enter details for test result "<<i+1;
        cout<<endl;
        cout<<"Enter rollno: ";
        cin>>r;
        cout<<"Enter number of right answers: ";
        cin>>right;
        cout<<"Enter number of wrong answers: ";
        cin>>wrong;
        setTestResult(tr[i],r,right,wrong);
    }
    sortByNetScore(tr,5);
    showTestResults(tr,5);
    cout<<endl;
    return 0;
}
*/
//Q5. Define a class Matrix to represent a 3*3 order matrix. Provide appropriate methods and properties to the class. Also define following meethods in the class:

	/*
		1. Matrix add(Matrix)
		2. Matrix sub(Matrix)
		3. Matrix multiply(Matrix)
		4. Matrix transpose()
		5. bool is_singular()
	*/
	
//Solution:
/*
#include<iosteam>
using namespace std;
class Matrix{
	private:
		int a[6];
	public:
		
};
int main()
{
	
	return 0;
}
*/