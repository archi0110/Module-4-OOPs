//Write a C++ program that demonstrates the use of variables and constants. Create variables of different data types and perform operations on them. 
//Objective: Understand the difference between variables and constants. 
#include<iostream>
using namespace std;
int main()
{
	const double pi =3.14;
	
	string name="Archi";
	int age=21;
	float height=5.8;
	double salary= 45000;
	char grade='A';
	
	cout<<"Name :" << name <<endl;
	cout<<"Age :" <<age <<endl;
	cout<<"Height :" <<height <<endl;
	cout<<"Salary :" <<salary <<endl;
	cout<<"Grade :" <<grade <<endl;
	
	age = age + 7;
	double circle = pi *7*7;
	
	cout<<"\n 7 year age :"<< age <<endl;
	cout<<"\n circle :" <<circle <<endl;
	
	return 0;
	
}
