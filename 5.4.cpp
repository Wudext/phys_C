#include "tasks.h"

void main_54()
{
    int i, j, n, m;
    cout << "введи число уравнений: ";
    cin >> n;
    cout << "введи число неизвестных: ";
    cin >> m;
    m += 1;
    int** matrix = new int* [n];
    for (i = 0; i < n; i++)
        matrix[i] = new int[m];

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }


    int tmp;
    int* xx = new int[m];
    int k;

    for (i = 0; i < n; i++)
    {
        tmp = matrix[i][i];
        for (j = n; j >= i; j--)
            matrix[i][j] /= tmp;
        for (j = i + 1; j < n; j++)
        {
            tmp = matrix[j][i];
            for (k = n; k >= i; k--)
                matrix[j][k] -= tmp * matrix[i][k];
        }
    }

    xx[n - 1] = matrix[n - 1][n];
    for (i = n - 2; i >= 0; i--)
    {
        xx[i] = matrix[i][n];
        for (j = i + 1; j < n; j++) xx[i] -= matrix[i][j] * xx[j];
    }

    cout << "Корни системы: ";
    for (i = 0; i < n; i++)
        cout << xx[i] << " ";
    cout << endl;
}