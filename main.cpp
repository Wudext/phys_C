#include <iostream>
#include "tasks.h"

using namespace std;

void main() {
	setlocale(LC_ALL, "Russian");
	string num;
	cout << "Выберите задачу: ";
	cin >> num;
	cout << endl;
	if (num == "4.11") {
		main_4();
	}
	if (num == "5.2") {
		main_52();
	}
	if (num == "5.4") {
		main_54();
	}
	if (num == "6.15") {
		main_615();
	}
	if (num == "6.7") {
		main_67();
	}
	if (num == "6.2") {
		main_62();
	}
	if (num == "7.3") {
		main_73();
	}
	if (num == "7.8") {
		main_78();
	}
	if (num == "8.10") {
		main_810();
	}
	if (num == "8.11") {
		main_811();
	}
	if (num == "9.8") {
		main_98();
	}
	if (num == "9.9") {
		main_99();
	}
}