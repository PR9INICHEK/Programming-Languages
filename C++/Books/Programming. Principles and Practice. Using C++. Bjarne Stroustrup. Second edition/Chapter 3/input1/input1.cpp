#include "../../std_lib_facilities.h"

int main()
{
	cout << "Пожалуйста, введите своё имя и возраст\n";
	//v1
	//string first_name;
	//v1
	//int age;
	string first_name = "???";
	int age = -1;
	//v1
	//cin >> first_name;
	//cin >> age;
	cin >> first_name >> age;
	cout << "Привет, " << first_name << " (age " << age << ")\n";
}