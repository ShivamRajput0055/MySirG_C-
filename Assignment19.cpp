//Q1. Define a class Game with an array of 5 int variables as instance member to store the score of each of 5 rounds.Provide method to setScore (int round,int score).Also provide method getScore(int round).

//Q2. In Question 2, derive a class GameResult with an array of 5 int type variables to store the result in each round. Result value is 2 for win, 0 for loose and 1 for draw. Provide methods to setResult and getResult.Write method to calculate final result of the game. 
//Solution:

/*
#include<iostream>
using namespace std;
class Game {
private:
    int score[5] = {0};  // Initialize to 0 to avoid garbage values
public:
    void setScore(int round, int score) {
        this->score[round - 1] = score;
    }
    int getScore(int round) {
        return score[round - 1];
    }
    void showData(int round) {
        cout << "Your score is " << getScore(round) << "." << endl;
    }
};


class GameResult : public Game {
private:
    int result[5] = {0};  // Initialize to 0 to avoid garbage values
public:
    static const int Win = 2, Loose = 0, Draw = 1;
    void setResult(int round, int result) {
        this->result[round - 1] = result;
    }
    int getResult(int round) {
        return result[round - 1];
    }
    void finalResult() {
        int netscore = 0;
        int resultSum = 0;
        for (int i = 0; i < 5; i++) {
            netscore += getScore(i + 1);
            resultSum += result[i];
        }
        cout << "\n=> Total Score: " << netscore << ".\n=> Total Result: " << resultSum << ".\n";
    }
    void showData(int round) {
        cout << "Your result is " << getResult(round) << "." << endl;
    }
};

int main()
{
	GameResult G1;
	G1.setScore(1,5);
	G1.setScore(2,10);
	G1.setScore(3,15);
	G1.setScore(4,25);
	G1.setScore(5,35);
	
	G1.setResult(1,50);
	G1.setResult(2,100);
	G1.setResult(3,150);
	G1.setResult(4,250);
	G1.setResult(5,350);
	
	G1.showData(1);//1 is pass as the arguments...
	G1.showData(2);//2 is pass as the arguments...
	G1.showData(3);//3 is pass as the arguments...
	G1.showData(4);//4 is pass as the arguments...
	G1.showData(5);//5 is pass as the arguments...
	cout<<endl<<endl;
	G1.finalResult();
	
	return 0;
}
*/


//Q3. Define a class Actor with name,age as instance variables and setter,getters as instance methods. Define a class TVActor as a derived class Actor with instance variables to store numbers of TV projects done or running and define setter,getter. Also define setTVActor() and showTVActor(). Define a class MovieActor as a derived class of Actor with instance variables to store number of movies doe or running and define setter,getter.Also define setMovieActor() and showMovieActor().Derive a class AllScreenActor from TVActor and MovieActor. Define a method to setActorData() and showActorData().
//Solution:

#include<iostream>
#include<string.h>
using namespace std;
class Actor
{
	private:
		char name[30];
		int age;
	public:
		void setName(const char n[])
		{
			strcpy(name,n);
		}
		void setAge(int x)
		{
			age=x;
		}
		char* getName()
		{
			return name;
		}
		int getAge()
		{
			return age;
		}
};
class TVActor:virtual public Actor{
	private:
		int TV_Project_Count;
	public:
		void setTVProjectCount(int x){
			TV_Project_Count=x;
		}
		int getTVProjectCount()
		{
			return TV_Project_Count;
		}
		void setTVActor(const char n[],int a,int b)
		{
			setName(n);
			setAge(a);
			TV_Project_Count=b;
		}
		void showTVActor()
		{
			cout<<"\n=>Name: "<<getName()<<".\n=>Age: "<<getAge()<<"\n=>Project No.: "<<getTVProjectCount()<<".\n";
		}
};
class MovieActor:virtual public Actor{
	private:
		int Movie_Deo_Count;
	public:
		void set_Movie_Deo_Count(int x)
		{
			Movie_Deo_Count=x;
		}
		int get_Movie_Deo_Count()
		{
			return Movie_Deo_Count;
		}
		void setMovieActor(const char n[],int x,int Count)
		{
			setName(n);
			setAge(x);
			set_Movie_Deo_Count(Count);
		}
		void showMovieActor()
		{
			cout<<"\n=> Name: "<<getName()<<".\n=>Age: "<<getAge()<<".\n=>Movie project counted  No.: "<<get_Movie_Deo_Count()<<".\n";
		}
};
class AllScreenActor:public TVActor,public MovieActor
{
	public:
		void setActorData(const char n[],int age,int TV_Project,int Movie_Project)
		{
			setName(n);
			setAge(age);
			setTVProjectCount(TV_Project);
			set_Movie_Deo_Count(Movie_Project);
		}
		void showActorData()
		{
			cout<<"\n\n=>Name: "<<getName()<<".\n=>Age: "<<getAge()<<".\n=>TV_Project: "<<getTVProjectCount()<<".\n=>Movie_Project: "<<get_Movie_Deo_Count()<<".\n\n";
		}
};
int main()
{
	Actor A;
	cout<<"\n\nActor Details: \n\n";
	A.setName("Kunal Kumar Singh Rajput");
	A.setAge(18);
	cout<<"Name: "<<A.getName()<<"."<<endl<<"Age: "<<A.getAge()<<"."<<endl;
	TVActor A1;
	cout<<"\n\nTV Actor Details: \n";
	A1.setTVActor("Shivam Singh Rajput",18,5);
	A1.showTVActor();
	cout<<"\n\nMovie's Actor Details: \n";
	MovieActor A2;
	A2.setMovieActor("Rahul Singh Rajput",23,10);
	A2.showMovieActor();
	cout<<"\n\nAll details are collabs.(Included class is \"TVActor\" and \"MovieActor\"): ";
	AllScreenActor A3;
	A3.setActorData("Nikhil Singh Rajput",17,10,3);
	A3.showActorData();
	return 0;
}