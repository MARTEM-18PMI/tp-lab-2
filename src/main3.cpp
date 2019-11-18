#include<iostream>
#include"task3.h"



int main() {

	const size_t leng_int = 6;
	int arr_int[leng_int] = { 1, 2, 3, 4, 5, 6 };
	map<int, leng_int>(arr_int, change<int>);
	for (size_t i = 0; i < leng_int; ++i) {
		cout << arr_int[i] << " ";
	}

	const size_t leng_double = 6;
	double arr_double[leng_double] = { 1.5, 2.2, 3, 4.92, 5, 6 };
	map<double, leng_double>(arr_double, change<double>);
	cout << endl;
	for (size_t i = 0; i < leng_double; ++i) {
		cout << arr_double[i] << " ";
	}

	return 0;

}