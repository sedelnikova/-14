// ivan14.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Дан массив размера N и целые числа K и L (1 ≤ K ≤ L ≤ N). 
// Найти среднее арифметическое элементов массива с номерами от K до L включительно.

#include <iostream>
#include <stdio.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int N, i, K, L;
	float s;
	s = 0;
	cout << "Введите, пожалуйста, N = ";
	cin >> N;
	cout << "Введите, пожалуйста, K (>=1; <N) = ";
	cin >> K;
	cout << "Введите, пожалуйста, L (>=K; <N) = ";
	cin >> L;
	float* arr = new float[N];
	for (i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	for (i = K-1; i < L; i++)
	{
		s += arr[i];
	}

	s = s / ((L - K) + 1);
	cout << "Среднее арифметическое = " << s << endl;
	return 0;
}
