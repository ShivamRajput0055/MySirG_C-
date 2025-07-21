//File handling

//Q1. Write a C++ Program to copy content of file and store in the other file.
//Solution:

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
void Copy()
{
	ofstream fout,dout;
	ifstream fin;
	char cop,ch;
	fout.open("Copy.txt",ios::out|ios::app);
	if(!fout)
	{
		cout<<"Unable to open a file.";
		return;
	}
	fout<<"This Is My Original File.\n";
	fout.close();
}
int main()
{
	Copy();
	return 0;
}