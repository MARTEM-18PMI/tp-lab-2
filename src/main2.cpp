#include<iostream>
#include"task2.h"
using namespace std;

const size_t DIM = 5;
const size_t DIM_STR = 10;

int main() {
	int* arr = createArr<int, DIM>(gen);
	for (size_t i = 0; i < DIM; ++i) 
	{	
		cout << arr[i] << " ";
	}
	cout << endl;

	char** arr_str = createArr<char*, DIM_STR>(gen);
	for (size_t i = 0; i < DIM_STR; ++i)
	{
		cout << arr_str[i] << " ";
	}
	return 0;
}