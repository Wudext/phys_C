#include "tasks.h"

void main_98() {
	int n, m;
	cout << "¬ведите границы: ";
	cin >> n >> m;
	FILE* file = fopen("9.8.txt", "w");

	for (int i = n; i < m; i++) {
		if (is_prime(i)) {
			fprintf(file, "%d", i);
			fprintf(file, "%c", " ");
		}
	}
}