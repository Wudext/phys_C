#include "tasks.h"

void main_99() {
	int* a = read_f_int("9.9.txt");
	int min = 100000000;
	int ind = 0;
	std::cout << "¬ведите число: ";
	int k = 0;
	cin >> k;
	for (int i = 0; i < sizeof(a); i++) {
		cout << a[i] << endl;
		if (fabs(a[i] - k) < min) {
			min = fabs(a[i] - k);
			ind = i;
		}
	}

	cout << min << " " << ind;
}