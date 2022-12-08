#include "tasks.h"

void main_67()
{
    size_t size = 0;
    size_t capacity = 100;
    double* arr = nullptr;
    arr = (double*)malloc(capacity * sizeof(double));
    double el = 0;
    cout << "¬ведите начальный массив: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> el;
        push_back(arr, size, capacity, el);
    }
    cout << "¬ведите элемент дл€ вставки: ";
    cin >> el;
    push_back(arr, size, capacity, el);
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
    sort(arr, size);
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
}