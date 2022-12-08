#include "tasks.h"

double I5(int a, int b, int N) {
	double left = a;
	double right = left + double(abs(b - a)) / double(N);
	double I = 0;

	while (right < b) {
		I += abs(right - left) * (f(left) + 4*f(left + abs(right-left)/2) + f(right))/ 6; //Метод симпсона
		left += double(abs(b - a)) / double(N);
		right += double(abs(b - a)) / double(N);
	}

	return I;
}