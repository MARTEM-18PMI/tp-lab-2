#include<iostream>
#include"task3.h"
template <typename T>
T change(T element)
{
	return (T)element*element;
}

template <>
char* change<char*>(char* element)
{
	return (char*)element[0];
}

int main() {
	int arr_int[] = { 1, 2, 3, 4, 5, 6 };
	size_t leng_int = 6;
	double arr_double[] = { 1.5, 2.2, 3, 4.92, 5, 6 };
	size_t leng_double = 6;
	int(*f_int)(int) = change;
	double(*f_double)(double) = change;

	map(arr_int, f_int);
	for (size_t i = 0; i < leng_int; ++i) {
		cout << arr_int[i] << " ";
	}
	cout << endl;
	map(arr_double, f_double);
	for (size_t i = 0; i < leng_double; ++i) {
		cout << arr_double[i] << " ";
	}
	return 0;
}