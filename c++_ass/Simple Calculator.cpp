//Write a C++ program that defines a class Calculator with functions for addition, subtraction, multiplication, and division. Create objects to use these functions. 
//Objective: Introduce basic class structure. 

#include<iostream>
using namespace std;

class calculator{
	public:
		int add(int a,int b){
			return a+b;
		}
		
		int sub(int a,int b){
			return a-b;
		}

		int multi(int a,int b){
			return a*b;
		}
		
		int div(int a,int b){
			return a/b;
		}
		
};
int main()
{
	calculator c1;
	
	int num1,num2;	
	
	cout<<"Enter First Number:"<<endl;
	cin>>num1;
	
	cout<<"Enter Second Number:"<<endl;
	cin>>num2;
	
	cout<<"Add :" <<c1.add(num1,num2)<<endl;
	cout<<"Sub :"<<c1.sub(num1,num2)<<endl;
	cout<<"Multi :"<<c1.multi(num1,num2)<<endl;
	cout<<"Divide :"<<c1.div(num1,num2)<<endl;
	
	return 0;
	
}
