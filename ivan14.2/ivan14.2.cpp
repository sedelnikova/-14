// ivan14.2.cpp : 
// Дан целочисленный массив размера N, не содержащий одинаковых чисел. 
// Проверить, образуют ли его элементы арифметическую прогрессию. 
// Если образуют, то вывести разность прогрессии, если нет — вывести 0.

#include <iostream>
#include <stdio.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int N, i, a, s;
	a = 0;
	s = 0;
	cout << "Введите, пожалуйста, N = ";
	cin >> N;

	int* arr = new int[N];
	cout << "Введите массив, не содержащий одинаковых чисел: ";
	for (i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	a = arr[1] - arr[0];

	for (i = 0; i < N; i++)
	{
		if ((arr[i + 1] - arr[i]) == a)
		{
			s++;
		}
	}
	if(s == N - 1)
	{
		cout << "Разность прогрессии = " << a << endl;
	}
	else
	{
		cout << 0;
	}
	return 0;
}
