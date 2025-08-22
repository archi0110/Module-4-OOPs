//Write a program that implements inheritance using a base class Person and derived classes Student and Teacher. Demonstrate reusability through inheritance. 
//Objective: Learn the concept of inheritance. 

#include<iostream>
using namespace std;
class person{
	public :
		string name;
		int age;
};

class student: public person{
	public:
		int rollno;
		string sub;
};

class teacher:public person{
	public:
		int empno;
		double salary;
};
int main()
{
	student s1;
	s1.name="Archi ";
	s1.age= 21  ;
	s1.rollno= 35 ;
	s1.sub=" Eng";
	
	teacher t1;
	t1.name="Yogi ";
	t1.age= 45  ;
	t1.empno= 25  ;
	t1.salary= 25000;
	
	cout<<"_________Student Detail_____________"<<endl;
	cout<<"Student Name :" << s1.name << s1.age << s1.rollno << s1.sub <<endl;
	
	cout<<"_________Teacher Detail___________"<<endl;
	cout<<"Teacher Name :" << t1.name << t1.age << t1.empno << t1.salary <<endl;
	
	return 0;
}
