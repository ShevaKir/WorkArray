#include "Function.h"

int main()
{
	setlocale(LC_ALL, "rus");
	const int SIZE = 10;
	int arr[SIZE];
	InitArray(arr, SIZE);
	ShowArray(arr, SIZE);
	cout << "max = " << SearchMaxArray(arr, SIZE) << '\n';
	cout << "min = " << SearchMinArray(arr, SIZE) << '\n';
	SortArray(arr, SIZE);
	ShowArray(arr, SIZE);
	ChangeInNumber(arr, SIZE);
	ShowArray(arr, SIZE);
}