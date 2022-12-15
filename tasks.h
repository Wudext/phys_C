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

// ----- ��������� ������� -----
void main_4();

double I1(int a, int b, int N); //������ ��������������
double I2(int a, int b, int N); //��������
double I3(int a, int b, int N); //������� ��������������
double I4(int a, int b, int N); //������� ��������������
double I5(int a, int b, int N); //����� ��������
double f(double x);



// ----- ����� ������� -----
void main_52();
void main_54();

// ----- ������ ������� -----
void main_615();
void main_67();
void main_62();

// ������ (��������� ������������ ������)
void push_back(double* array, size_t& size, size_t& capacity, const double& element); //���������� �������� � ����� �������
void pop_back(double* array, size_t& size);
void insert(double* array, size_t& size, size_t& capacity, size_t& ind, const double& element);
double at(double* array, size_t ind);
void resize(double* array, size_t& size, size_t& capacity, size_t new_size);
void sort(double* array, size_t size);
void destruct(double* array);

// ��������� ������� (��� 6.15 � ��� ��������)
void add_column(double* array, size_t& size, size_t& columns, size_t rows, size_t capacity);
void add_row(double* array, size_t& size, size_t columns, size_t& rows, size_t capacity);
void print(double* array, size_t size, size_t& columns);

// ���� (������������ ���������� ������)
void AddMemmory(int* A, int* N);
void printarr(int* Arr, int N);
void push(int x, int* Arr, int* N, int* index);
void printall(int* Arr, int N, int index);
int pop(int* Arr, int* N, int* index);


// ----- ������� ������� -----
void main_73();
void main_78();


// ----- ������� ������� -----
void main_810();
void main_811();


// ----- ������� ������� -----
void main_99();

// ----- �������� ������� -----
bool is_prime(int number); //������� ����� ��� ���

void print_m(int** m, int n); //����� ���������� ������������� �������
int** input_m(int** a, int n); //���� ���������� ������������� �������

int write_f(char* s, FILE* output_file); //���������� � ����� �����
FILE* open_f(const char* path, const char* type); //�������� �����
int* read_f_int(const char* path); //���������� ���� �������� � ����� ������� int
float* read_f_float(const char* path); //���������� ���� �������� � ����� ������� float