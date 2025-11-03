#include<fstream>
#include<iostream>
#include<string>
using namespace std;

class Student
{
	string name;
	string surname;
	int age;
public:
	Student(string n, string s, int a)
	{
		name = n;
		surname = s;
		age = a;
	}
	void Print()
	{
		cout << "Name: " << name << "Surname: " << surname << "\tAge: " << age << endl;
	}
	void Input()
	{
		cout << "Enter Name: ";
		cin >> name;

		cout << "Enter Surname: ";
		cin >> surname;

		cout << "Enter Age: ";
		cin >> age;
	}


};

int main()
{
	Student obj1("Ivan", "Petrov", 24)
}