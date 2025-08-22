//Write a C++ program that accepts an array of integers, calculates the sum and average, and displays the results. 
//Objective: Understand basic array manipulation. 
#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "Enter your Number :" << endl;
	cin >> n;
	
	int arr[n];
	int sum=0;
	
	cout << "Enter " << n << " Number :" << endl;
	for(int i=1;i<=n;i++)
	{
		cin >> arr[i];
        sum += arr[i];
	}
	
	float ave = (float)sum / n;

    // Results display
    cout << "Sum = " << sum << endl;
    cout << "Average = " << ave << endl;
}
