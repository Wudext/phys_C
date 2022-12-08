#include "tasks.h"


void main_78() {
	int* a = read_f_int("7.8_in.txt");
	FILE* output_file = open_f("7.8_out.txt", "w");
	for (int i = 0; i < sizeof(a); i++) {
		cout << a[i] << " ";
		if (is_prime(a[i])) {	
			fprintf(output_file, "%d", a[i]);
			fprintf(output_file, " ");
		}
	}
}