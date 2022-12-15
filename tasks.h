#pragma once
#pragma warning(disable : 4996)

#define _CRT_SECURE_NO_WARNINGS
#define e 2.713
#define pi 3.1415

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

// ----- Четвертый семинар -----
void main_4();

double I1(int a, int b, int N); //Нижние прямоугольники
double I2(int a, int b, int N); //Трапеции
double I3(int a, int b, int N); //Верхние прямоугольники
double I4(int a, int b, int N); //Средние прямоугольники
double I5(int a, int b, int N); //Метод Симпсона
double f(double x);



// ----- Пятый семинар -----
void main_52();
void main_54();

// ----- Шестой семинар -----
void main_615();
void main_67();
void main_62();

// Вектор (двумерный динамический массив)
void push_back(double* array, size_t& size, size_t& capacity, const double& element); //Добавление элемента в конец массива
void pop_back(double* array, size_t& size);
void insert(double* array, size_t& size, size_t& capacity, size_t& ind, const double& element);
double at(double* array, size_t ind);
void resize(double* array, size_t& size, size_t& capacity, size_t new_size);
void sort(double* array, size_t size);
void destruct(double* array);

// Двумерная матрица (для 6.15 и ему подобных)
void add_column(double* array, size_t& size, size_t& columns, size_t rows, size_t capacity);
void add_row(double* array, size_t& size, size_t columns, size_t& rows, size_t capacity);
void print(double* array, size_t size, size_t& columns);

// Стэк (Динамический одномерный массив)
void AddMemmory(int* A, int* N);
void printarr(int* Arr, int N);
void push(int x, int* Arr, int* N, int* index);
void printall(int* Arr, int N, int index);
int pop(int* Arr, int* N, int* index);


// ----- Седьмой семинар -----
void main_73();
void main_78();


// ----- Восьмой семинар -----
void main_810();
void main_811();


// ----- Девятый семинар -----
void main_99();

// ----- Полезные функции -----
bool is_prime(int number); //Простое число или нет

void print_m(int** m, int n); //Вывод двумерного динамического массива
int** input_m(int** a, int n); //Ввод двумерного динамического массива

int write_f(char* s, FILE* output_file); //Добавление в конец файла
FILE* open_f(const char* path, const char* type); //Открытие файла
int* read_f_int(const char* path); //Считывание всех значений и вывод массива int
float* read_f_float(const char* path); //Считывание всех значений и вывод массива float