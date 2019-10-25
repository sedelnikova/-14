// ivan14.3.cpp 
// Дан массив A размера N. Найти минимальный элемент из его элементов с четными номерами : A2, A4, A6,

#include <iostream>
#include <stdio.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int N, i, min;
	cout << "Введите, пожалуйста, N = ";
	cin >> N;

	int* arr = new int[N];
	cout << "Введите массив : ";
	for (i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	min = arr[0];
	for (i = 0; i < N; i = i + 2)
	{
		if (arr[i] < min)
		{ 
			min = arr[i];
		}
	}
	cout << "min = " << min << endl;
	
	return 0;
}
