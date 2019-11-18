#pragma once
#include<iostream>
using namespace std;
template <typename T, size_t N>
void map(T (&arr)[N], T change(T))
{
	for (size_t i = 0; i < N; ++i)
	{
		arr[i] = change(arr[i]);
	}
}