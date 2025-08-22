//Write a C++ program that accepts user input for their name and age and then displays a personalized greeting. 
//Objective: Practice input/output operations using cin and cout. 
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string name;
	int age;
	
	cout<<" Enter Your Name:";
	cin>>name;
	
	cout<<"Enter Your Age:";
	cin>>age;
	
	cout<<"Hello:" <<name  <<" your age is :"<<age <<endl;
	
	return 0;
}
