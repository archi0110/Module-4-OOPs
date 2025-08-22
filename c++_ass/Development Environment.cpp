//Write a program that asks for two numbers and displays their sum. Ensure this is done after setting up the IDE (like Dev C++ or CodeBlocks). 
// Objective: Help students understand how to install, configure, and run programs in an IDE.  
#include<iostream>
using namespace std;
int main()
{
	int num1,num2,sum;
	
	cout<<"Enter First Number :";
	cin>>num1;
	
	cout<<"Enter Second Number:";
	cin>>num2;
	
	sum = num1+num2;
	cout<<"First:"<<num1  <<"  Second:"<<num2  <<" is:"<<sum <<endl;
}
