#include "tasks.h"

void main_615() {
	double* array = nullptr;
	int a;
	size_t N = 1000;
	array = (double*)malloc(N * sizeof(double)); //Выделение памяти под 1000 элементов типа double
	if (array == NULL) {
		cout << "Ошибка выделения памяти";
		return;
	}

	size_t size = 0;
	size_t ind;
	size_t rows;
	size_t columns;

	cout << "Введите количество срок массива: ";
	cin >> rows;
	cout << "Введите количество столбцов: ";
	cin >> columns;

	for (int i = 1; i <= rows*columns; i++) {
		cin >> a;
		push_back(array, size, N, a);
	}

	print(array, size, columns);
	add_row(array, size, columns, rows, N);
	print(array, size, columns);
	add_column(array, size, columns, rows, N);
	print(array, size, columns);
}