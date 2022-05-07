#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <cstdlib>
using namespace std;
class Human {
protected:
	string surname, name, midname;
	int age = 0;
public:
	Human(string surname1 = "Фамилия ", string name1 = "Имя ", string midname1 = "Отчество", int age1 = 0) :surname(surname1), name(name1), midname(midname1), age(age1) {}
	virtual void print() { cout << "\nФамилия : " << surname << "  Имя: " << name << "  Отчество : " << midname << "  Возраст: " << age; };
	~Human() {}
};
class Student : public Human {
	bool on_lesson;
public:
	Student(string surnameStd, string nameStd, string midnameStd, int ageStd, bool on_lesson1 = 0) :Human(surnameStd, nameStd, midnameStd, ageStd), on_lesson(on_lesson1) {}
	void print();
};
class Boss : public Human {
	int number_of_workers;
public:
	Boss(string surname, string name, string midname, int age, int number_of_workers1) :Human(surname, name, midname, age), number_of_workers(number_of_workers1) {}
	void print();
};
#endif
