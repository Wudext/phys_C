#include "tasks.h"


void check(FILE* input_file, FILE* output_file) {
	if (input_file) {
		while (!feof(input_file)) {
			char s[1024] = "";
			fgets(s, 1024, input_file);

			if (strstr(s, "Оскар") != NULL) {
				printf("%s", s, setlocale(LC_ALL, "ru-RU"));
				write_f(s, output_file);
			}
		}
	}
}

void main_73() {
	FILE* input_file = open_f("7.3_in.txt", "r");
	FILE* output_file = open_f("7.3_out.txt", "w");

	check(input_file, output_file);
}