#include "Header.h"
int main() {
	setlocale(0, "");
	Human human("Обэмэ ", "Барак ", "Черный ", 47);
	Student student("Ма ", "Артём ", "Анатольевич ", 18, 1);
	Boss boss("Путин ", "Владимир ", "Владимирович ", 60, 150000000);
	human.print();
	student.print();
	boss.print();
}