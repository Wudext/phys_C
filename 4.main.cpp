#include "tasks.h"

void main_4() {
	int a, b, N;
	double delta;
	cout << "������� ������� ���������: ";
	cin >> a >> b;
	cout << "������� ���-�� ����������: ";
	cin >> N;
	cout << "������� ��������: ";
	cin >> delta;
	bool flag = false;
	int i = 0;

	cout << "------------------------------" << endl;
	while (not flag) {
		if (fabs(I1(a, b, pow(2, i) * N) - I1(a, b, pow(2, i + 1) * N)) < delta) {
			flag = true;
			cout << "������ ��������������: " << I1(a, b, pow(2, i + 1) * N) << endl;
			cout << "��������: " << i << endl;
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
			cout << "��������: " << I2(a, b, pow(2, i + 1) * N) << endl;
			cout << "��������: " << i << endl;
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
			cout << "������� ��������������: " << I3(a, b, pow(2, i+1)* N) << endl;
			cout << "��������: " << i << endl;
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
			cout << "������� ��������������: " << I4(a, b, pow(2, i + 1) * N) << endl;
			cout << "��������: " << i << endl;
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
			cout << "����� ��������: " << I5(a, b, pow(2, i + 1) * N) << endl;
			cout << "��������: " << i << endl;
		}
		else {
			i++;
		}
	}
	cout << "------------------------------" << endl;
}