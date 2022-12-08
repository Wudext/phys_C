#include "tasks.h"

struct equasion {
    int a;
    int b;
    int c;
};

struct roots {
    double r1;
    double r2;
};

roots solve(equasion eq) {
    roots r;
    double d = (pow(eq.b,2) - 4 * eq.a * eq.c);
    if (d < 0) {
        cout << "Решений в рациональных числах не существует" << endl;
    }
    r.r1 = (-1*eq.b + sqrt(d)) / (2*eq.a);
    r.r2 = (-1*eq.b - sqrt(d)) / (2*eq.a);

    return r;
}

void main_811() {
    equasion eq;
    const char* path = "8.11_in.txt";
    int* file = read_f_int(path);
    for (int i = 0; i < 12; i = i + 3) {
        eq.a = file[i];
        eq.b = file[i+1];
        eq.c = file[i+2];
        cout << "------------------------------" << endl;
        cout << "Уравнение: " << eq.a << "x^2 + " << eq.b << "x + " << eq.c << " = 0" << endl;
        roots r = solve(eq);
        cout << "Решения: " << endl << "x1: " << r.r1 << endl << "x2: " << r.r2 << endl;
        cout << "------------------------------" << endl << endl;
    }
}