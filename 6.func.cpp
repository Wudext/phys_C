#include "tasks.h"

void push_back(double* array, size_t& size, size_t& capacity, const double& element) {
	resize(array, size, capacity, size + 1);
	array[size] = element;
	size++;
}

void pop_back(double* array, size_t& size) {
	array[size-1] = NULL;
	bool flag = true;
	int i = size-1;
	while (flag) {
		if (array[i] == NULL) {
			size--;
			i--;
		}
		else {
			flag = false;
		}
	}
}

void insert(double* array, size_t& size, size_t& capacity, size_t& ind, const double& element) {
	if (ind <= size) {
		resize(array, size, capacity, size+1);
		size++;
	}
	else {
		resize(array, size, capacity, ind);
		for (int i = size; i <= ind; i++) {
			array[i] = NULL;
			size++;
		}
	}
	double a = element;
	double temp = array[ind];
	array[ind] = a;
	for (int i = ind+1; i < size+1; i++) {
		a = temp;
		temp = array[i];
		array[i] = a;
	}
}

double at(double* array, size_t ind) {
	return array[ind];
}

void resize(double* array, size_t& size, size_t& capacity, size_t new_size) {
	for (int p = size; p <= new_size; p++) {
		capacity++;
		array = (double*)malloc(capacity * sizeof(double));
	}
}

void sort(double* array, size_t size)//сортировка
{
	double k;
	for (int i = 0; i < size-1; i++)
	{
		for (int j = i; j < size-1; j++) {
			if (array[j] > array[j + 1])
			{
				k = at(array, j);
				array[j] = array[j + 1];
				array[j + 1] = k;
			}
		}
	}
}

void destruct(double* array) {
	free(array);
}

// ----- СТЭК -----

void AddMemmory(int* Arr, int* N)
{
	int* Buffer = (int*)malloc(*N * sizeof(int));
	for (int i = 0; i < *N; i++)
	{
		Buffer[i] = Arr[i];
	}

	Arr = (int*)malloc(2 * *N * sizeof(int));

	for (int i = 0; i < 2 * *N; i++)
	{
		Arr[i] = Buffer[i];
	}
	(*N) *= 2;
	free(Buffer);
	printf("\nstack size enlarged to ");
	printf("%d\b", *N);
}


void printarr(int* Arr, int N)
{
	for (int i = 0; i < N; i++)
	{
		printf("%d\n", Arr[N - i - 1]);
	}
}

void printall(int* Arr, int N, int index)
{
	printf("\n\nStack:\n");
	printarr(Arr, index);
	printf("filled:   %d/%d\n\n", index, N);


}

void push(int x, int* Arr, int* N, int* index)
{
	if (*index == *N) {
		AddMemmory(Arr, N);
	}

	Arr[*index] = x;
	(*index)++;
}

int pop(int* Arr, int* N, int* index)
{
	(*index)--;
	return Arr[*index];
}

// ----- ДВУМЕРНЫЙ МАССИВ (для 6.15) -----
void print(double* array, size_t size, size_t& columns) {
	for (int i = 0; i < size; i++) {
		cout << at(array, i) << " ";
		if (i % columns == columns - 1) {
			cout << endl;
		}
	}
}

void add_row(double* array, size_t& size, size_t columns, size_t& rows, size_t capacity) {
	int a, ind;
	cout << "Введите индекс ряда: ";
	cin >> ind;
	cout << "Введите новый ряд: ";
	for (int i = 0; i < columns; i++) {
		cin >> a;
		size_t index = (ind - 1) * columns + i;
		insert(array, size, capacity, index, a);
	}
	rows++;
}

void add_column(double* array, size_t& size, size_t& columns, size_t rows, size_t capacity) {
	int a, ind;
	cout << "Введите индекс столбца: ";
	cin >> ind;
	cout << "Введите новый столбец: ";
	for (int i = 0; i < rows; i++) {
		cin >> a;
		size_t index = (columns + 1) * i + ind - 1;
		insert(array, size, capacity, index, a);
	}
	columns++;
}