// ivan.14.5.cpp 
//Дан целочисленный массив размера N, содержащий ровно два одинаковых элемента. 
//Найти номера одинаковых элементов и вывести эти номера в порядке возрастания

#include <iostream>
#include <stdio.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int N, i, j , a, b;
	cout << "Введите, пожалуйста, N = ";
	cin >> N;
	a = 0;
	b = 0;
	int* arr = new int[N];
	cout << "Введите массив, содержащий ровно два одинаковых элемента : ";
	for (i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	for (j = 1; j < N; j++)
	{
		for (i = 0; i < j; i++)
		{
			if (arr[i] == arr[j])
			{
				a = i;
				b = j;
			}
		}
	}
	cout << a << " " << b << endl;

	return 0;
}
