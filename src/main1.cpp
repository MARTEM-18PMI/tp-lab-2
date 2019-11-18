#include<iostream>
#include "task1.h"
#include <cstring>

using namespace std;
const int DIM = 5;
int main() {
	const char *arr_str[]= {
					 "1",
					 "333",
					 "4444",
					 "333",
					 "828",
					 "Lebedinoe Ozero",
					 "13",
					 "Us"
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

	msort(arr_int, leng_int);
	for (int i = 0; i < leng_int; ++i)
	{
		cout << arr_int[i] << " ";
	}
	std::cout << "\n";

	msort(arr_str,leng_str );
	for (int i = 0; i < leng_str - 1; ++i)
	{
		cout << arr_str[i] << ", ";
	}
	cout << arr_str[leng_str - 1] << ".\n";
	
	msort(dyn_arr_str, leng_str );
	for (int i = 0; i < leng_str - 1; ++i)
	{
		cout << dyn_arr_str[i] << ", ";
	}
	cout << dyn_arr_str[leng_str - 1] << ".\n";
	return 0;
}