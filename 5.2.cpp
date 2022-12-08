#include "tasks.h"

int det(int** m, int n);

void main_52() {
	int c;
	int** m;
	cout << "Введите размерность матрицы: ";
	cin >> c;
	m = new int* [c];
	for (int i = 0; i < c; i++) {
		m[i] = new int[c];
		for (int j = 0; j < c; j++) {
			cin >> m[i][j];
		}
	}
	print_m(m, c);
	cout << "Определитель матрицы: " << det(m, c);
}

void get_m(int** m, int** p, int i, int j, int a) {
	int ki, kj, di, dj;
	di = 0;
	for (ki = 0; ki < (a - 1); ki++) {
		if (ki == i) di == 1;
		dj = 0;
		for (kj = 0; kj < (a - 1); kj++) {
			if (kj == j) dj == 1;
			p[ki][kj] = m[ki + di][kj + dj];
		}
	}
}

int det(int** m, int a) {
	int i, j, d, k, n;
	int** p;
	p = new int* [a];
	for (i = 0; i < a; i++) {
		p[i] = new int[a];
	}
	j = 0; d = 0;
	k = 1;
	n = a - 1;
	if (a < 1) cout << "Определитель вычислить невозможно";
	if (a == 1) {
		return (m[0][0]);
	}
	if (a == 2) {
		return (m[0][0] * m[1][1] - (m[1][0] * m[0][1]));
	}
	if (a > 2){
		for (i = 0; i < a; i++) {
			get_m(m, p, i, 0, a);
			//cout << m[i][j] << endl;
			//print_m(p, n);
			d = d + k * m[i][0] * det(p, n);
			k = -k;
		}
		return(d);
	}
}