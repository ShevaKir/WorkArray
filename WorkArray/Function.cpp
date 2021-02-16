#include "Function.h"

void InitArray(int arr[], int size)
{
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void ShowArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << '\n';
}

int SearchMaxArray(int arr[], int size)
{
	int max = arr[0];
	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i + 1] > max)
		{
			max = arr[i + 1];
		}
	}
	return max;
}

int SearchMinArray(int arr[], int size)
{
	int min = arr[0];
	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i + 1] < min)
		{
			min = arr[i + 1];
		}
	}
	return min;
}

void SortArray(int arr[], int size)
{
	sort(arr, arr + size);
}

void ChangeInNumber(int arr[], int size)
{
	int number;
	cout << "Выберите число для редактирования ";
	cin >> number;
	number--;
	for (int i = 0; i < size; i++)
	{
		if (i == number)
		{
			cout << "Какое число хотите занести в ячейку: ";
			cin >> arr[number];
		}
	}
}