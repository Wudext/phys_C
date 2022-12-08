#include "tasks.h"

double I2(int a, int b, int N) {
	double left = a;
	double right = left + double(abs(b - a)) / double(N);
	double I = 0;

	while (right < b) {
		I += abs(right - left) * (f(left) + f(right)) / 2; //Трапеции
		left += double(abs(b - a)) / double(N);
		right += double(abs(b - a)) / double(N);
	}

	return I;
}	