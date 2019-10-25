// ivan14.4.cpp 
//Дан массив размера N. Найти номер его последнего локального максимума 
//(локальный максимум — это элемент, который больше любого из своих соседей).

#include <iostream>
#include <stdio.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int N, i, max;
	cout << "Введите, пожалуйста, N = ";
	cin >> N;

	int* arr = new int[N];
	cout << "Введите массив : ";
	for (i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	max = arr[0];
	for (i = 1; i < N - 1; i++) 
	{
		if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
		{
			max = arr[i];
		}
	}
	if (arr[N-1] > max)
		{
			max = arr[N-1];
		}
	cout <<"Max = " << max << endl;

	return 0;
}
