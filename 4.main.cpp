#include "tasks.h"

void main_4() {
	int a, b, N;
	double delta;
	cout << "Введите границы интеграла: ";
	cin >> a >> b;
	cout << "Введите кол-во интервалов: ";
	cin >> N;
	cout << "Введите точность: ";
	cin >> delta;
	bool flag = false;
	int i = 0;

	cout << "------------------------------" << endl;
	while (not flag) {
		if (fabs(I1(a, b, pow(2, i) * N) - I1(a, b, pow(2, i + 1) * N)) < delta) {
			flag = true;
			cout << "Нижние прямоугольники: " << I1(a, b, pow(2, i + 1) * N) << endl;
			cout << "Итерации: " << i << endl;
		}
		else {
			i++;
		}
	}

	cout << "------------------------------" << endl;
	i = 0;
	flag = false;
	while (not flag) {
		if (fabs(I2(a, b, pow(2, i) * N) - I2(a, b, pow(2, i + 1) * N)) < delta) {
			flag = true;
			cout << "Трапеции: " << I2(a, b, pow(2, i + 1) * N) << endl;
			cout << "Итерации: " << i << endl;
		}
		else {
			i++;
		}
	}

	cout << "------------------------------" << endl;
	i = 0;
	flag = false;
	while (not flag) {
		if (fabs(I3(a, b, pow(2, i)*N) - I3(a, b, pow(2,i+1) * N)) < delta) {
			flag = true;
			cout << "Верхние прямоугольники: " << I3(a, b, pow(2, i+1)* N) << endl;
			cout << "Итерации: " << i << endl;
		}
		else {
			i++;
		}
	}

	cout << "------------------------------" << endl;
	i = 0;
	flag = false;
	while (not flag) {
		if (fabs(I4(a, b, pow(2, i) * N) - I4(a, b, pow(2, i + 1) * N)) < delta) {
			flag = true;
			cout << "Средние прямоугольники: " << I4(a, b, pow(2, i + 1) * N) << endl;
			cout << "Итерации: " << i << endl;
		}
		else {
			i++;
		}
	}

	cout << "------------------------------" << endl;
	i = 0;
	flag = false;
	while (not flag) {
		if (fabs(I5(a, b, pow(2, i) * N) - I5(a, b, pow(2, i + 1) * N)) < delta) {
			flag = true;
			cout << "Метод Симпсона: " << I5(a, b, pow(2, i + 1) * N) << endl;
			cout << "Итерации: " << i << endl;
		}
		else {
			i++;
		}
	}
	cout << "------------------------------" << endl;
}