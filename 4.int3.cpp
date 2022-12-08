#include "tasks.h"

double I3(int a, int b, int N) {
	double left = a;
	double right = left + double(abs(b - a)) / double(N);
	double I = 0;

	while (right < b) {
		I += abs(right - left) * max(f(left), f(right)); //Верхние прямоугольники
		left += double(abs(b - a)) / double(N);
		right += double(abs(b - a)) / double(N);
	}

	return I;
}