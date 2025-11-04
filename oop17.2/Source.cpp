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

    void SaveFile()
    {
        ofstream file("student.txt");
        if (!file.is_open())
        {
            cout << "Error opening file!" << endl;
            return;
        }

        file << name << endl;
        file << surname << endl;
        file << age << endl;

        file.close();
        cout << "Data saved successfully!" << endl;
    }

    void LoadFile()
    {
        ifstream file("student.txt");
        if (!file.is_open())
        {
            cout << "Error opening file!" << endl;
            return;
        }

        getline(file, name);
        getline(file, surname);
        file >> age;

        file.close();
        cout << "Data loaded successfully!" << endl;
    }
};

int main()
{
	Student obj1("Ivan", "Petrov", 24);
    obj1.SaveFile();
    obj1.LoadFile();
}