//Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise operators. Perform operations using each type of operator and display the results. 
//Objective: Reinforce understanding of different types of operators in C++. 

#include<iostream>
using namespace std;

int main()
{
	int a = 15 , b = 5; 
	
	cout<<"___Arithmetic_________ :"<<endl;
	cout<<"Addition :" <<(a+b) <<endl;
	cout<<"Substraction :" <<(a-b) <<endl;
	cout<<"Multiplication :" <<(a*b) <<endl;
	cout<<"Dividion :" <<(a/b) <<endl;
	cout<<"Moduls :" <<(a%b) <<endl;
	
	cout<<"_______Relational________:"<<endl;
	cout<<"Equal to :" <<(a==b) <<endl;
	cout<<"Not equal to :" <<(a!=b)  <<endl;
	cout<<"Greater than:" <<(a>b)  <<endl;
	cout<<"Less than :" <<(a<b)  <<endl;
	cout<<"Greater or equal :" <<(a>=b)  <<endl;
	cout<<"Less or equal :" <<(a<=b)  <<endl;	

	cout<<"_______Logical________:"<<endl;
	cout<<"Logical AND :" <<(a&&b) <<endl;
	cout<<"Logical NOT : "<<!(a==b) <<endl;

	cout<<"______Bitwise________:"<<endl;
	cout<<"AND :" <<(a&b) <<endl;
	cout<<"OR :" <<(a|b)  <<endl;
	cout<<"XOR :" <<(a^b) <<endl;
	cout<<"NOT :" <<(~a) <<endl;
	cout<<"Left Shift :" <<(a<<1)  <<endl;
	cout<<"Right Shift :" <<(a>>1)  <<endl;

	return 0;
}
