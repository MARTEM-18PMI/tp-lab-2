#include<iostream>
#include"task2.h"
using namespace std;
template <typename T>
T gen()
{
	return (T)1;
}

template <>
char* gen()
{
	return (char *)"111";
}


const size_t DIM = 5;
const size_t DIM_STR = 10;

int main() {
	double (*func)() = gen;
	double *arr = creatArr(DIM, func);

	char* (*func_s)() = gen;
	char** arr_s = creatArr(DIM_STR, func_s);

	for (size_t i = 0; i < DIM; ++i) 
	{	
		cout << arr[i] << " ";
	}
	cout << endl;
	for (size_t i = 0; i < DIM_STR; ++i)
	{
		cout << arr_s[i] << " ";
	}
	return 0;
}