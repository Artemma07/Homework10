#include "Header.h"	
#include <iostream>
using namespace std;
void Student::print() {
	Human(this->surname, this->name, this->midname, this->age).print();
	
}
void Boss::print() {
	Human(this->surname, this->name, this->midname, this->age).print();
	cout << " Количество работяг(россиян) : " << number_of_workers << endl;
}