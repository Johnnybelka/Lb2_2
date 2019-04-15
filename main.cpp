//#include "pch.h"
#include <iostream>
#include <ctime>
#include "func.h"
using namespace std;
int const n = 10;	// Количество элементов массива

int main()
{
	int ar[n];		// Исходный массив
	int i;		
	int(*pf)(int* a, int num) = NULL;		// Указатель на функцию
	setlocale(LC_ALL, "Russian");

	srand(time(NULL));
	for (i = 0; i < n; i++)
		ar[i] = rand() % 1001 - 500;		// Инициализация миссива случайными значениями, принадлеж. отрезку [-500;500]

	cout << "Исходный массив:" << endl;
	for (i = 0; i < n; i++)
		cout << ar[i] << " ";
	cout << endl;

	pf = func(ar, n);
	pf(ar, n);

	cout << endl;
	cout << "Итоговый массив:" << endl;
	for (i = 0; i < n; i++)
		cout << ar[i] << " ";
	return 0;
}