//Write a C++ program that asks the user to guess a number between 1 and 100. The program should provide hints if the guess is too high or too low. 
//Use loops to allow the user multiple attempts. 
//Objective: Understand while loops and conditional logic. 

#include<iostream>
using namespace std;
int main()
{
	int number = 70;
	int guess;
	
	cout<<"guess a number between 1 and 100 :"<<endl;
	
	while(true){
		cout<<"Enter your guess number:"<<endl;
		cin>>guess;
		
		if(guess == number)
		{
			cout<<"Congrats ! your guess number is right :"<<endl;
			break;
		}
		else if(guess<number)
		{
			cout<<"TOO low !!! :"<<endl;
		}
		else
		{
			cout<<"TOO High !!! :"<<endl;	
		}
	}
	return 0;
}
