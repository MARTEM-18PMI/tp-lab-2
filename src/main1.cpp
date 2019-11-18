#include<iostream>
#include "task1.h"
#include "string.h"
using namespace std;
const int DIM = 5;
int main() {
	const char *arr_str[]= {
					 "1",
					 "333",
					 "4444",
					 "333",
					 "828",
					 "Lebedinor Ozero",
					 "13",
					 "Artemka"
	};
	int leng_str = 8;
	char **dyn_arr_str = new char*[leng_str];
	for (int i = 0; i < leng_str; ++i) 
	{
		dyn_arr_str[i] = new char;
		dyn_arr_str[i] = (char*)arr_str[i];
	}
	
	int arr_int[] = {1, 4 ,2 ,7 ,1, 8, 29, 138, 8348};
	int leng_int = sizeof(arr_int) / sizeof(int);

	double arr_double[] = { 1.5, 4 ,2.33 ,7 ,1.2 };
	int leng_double = sizeof(arr_double) / sizeof(double);
	
	msort(arr_int, 0 , leng_int - 1);
	for (int i = 0; i < leng_int; ++i)
	{
		cout << arr_int[i] << " ";
	}
	std::cout << "\n";

	msort(arr_double, 0, leng_double - 1);
	for (int i = 0; i < leng_double; ++i)
	{
		cout << arr_double[i] << " ";
	}
	std::cout << "\n";
	
	msort(arr_str, 0, leng_str - 1);
	for (int i = 0; i < leng_str - 1; ++i)
	{
		cout << arr_str[i] << ", ";
	}
	cout << arr_str[leng_str - 1] << ".\n";
	
	msort(dyn_arr_str, 0, leng_str - 1);
	for (int i = 0; i < leng_str - 1; ++i)
	{
		cout << dyn_arr_str[i] << ", ";
	}
	cout << dyn_arr_str[leng_str - 1] << ".\n";
	return 0;
}