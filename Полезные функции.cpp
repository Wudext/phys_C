#include "tasks.h"

void print_m(int** a, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

int** input_m(int** a, int n) {
	//int** a = new int* [n];
	for (int i = 0; i < n; i++) {
		a[i] = new int[n];
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	return a;
}

int write_f(char* s, FILE* output_file) {
	int result = fputs(s, output_file);
	return result;
}

FILE* open_f(const char* path, const char* type) {
	FILE* file = fopen(path, type);
	if (file != NULL) {
		return file;
	}
	else {
		return NULL;
	}
}


int* read_f_int(const char* path) {
	size_t N = 10;
	int i = 0;
	int* a = nullptr;
	a = (int*)malloc(N * sizeof(int));
	FILE* file = fopen(path, "r");
	while (!feof(file)) {
		N++;
		a = (int*)realloc(a, N * sizeof(int));
		fscanf(file, "%d", &a[i]);
		i++;
	}

	return a;
}

bool is_prime(int a) {
	if (a == 2) {
		return true;
	}
	for (int i = 2; i <= pow(a, 0.5); i++) {
		if (a % i == 0){
			return false;
		}
	}
	return true;
}