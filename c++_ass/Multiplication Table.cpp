//Write a C++ program to display the multiplication table of a given number using a for loop. 
//Objective: Practice using loops. 

#include<iostream>
using namespace std;
int main()
{
	int num;
	
	cout<<"Enter The Number:"<<endl;
	cin>>num;
	
	cout<<"Multiplication Of Table :"<< num  <<endl;
	
	for(int i=1; i<=10 ;i++)
	{
		
		cout<<num <<"*" <<i <<"=" <<num*i <<endl;
	}
}
