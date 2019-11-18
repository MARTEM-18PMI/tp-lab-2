#pragma once
#include<iostream>
#include<cstring>
using namespace std;

template <typename T> bool compare(T left_el, T right_el)
{
	return left_el < right_el ? true : false;
}

template<> bool compare<const char*>(const char* left_el, const char*  right_el)
{
	return strlen(left_el) < strlen(right_el) ? true : false;
}

template<> bool compare<char*>(char* left_el, char*  right_el)
{
	return strlen(left_el) < strlen(right_el) ? true : false;
}

template <typename T> void fnMerge(T * arr, int left_pos, int mid_pos, int right_pos)
{
	int  n1 = mid_pos - left_pos + 1, n2 = right_pos - mid_pos;

	T *left = new T[n1];
	T *right = new T[n2];

	for (int i = 0; i < n1; i++)
		left[i] = arr[left_pos + i];
	for (int i = 0; i < n2; i++)
		right[i] = arr[mid_pos + i + 1];
	int i = 0;
	int j = 0;
	for (int k = left_pos; k < right_pos + 1; k++)
	{
		if (i < n1 && j < n2)
		{
			if (compare(left[i], right[j])) 
			{
				arr[k] = left[i];
				i++;
			}
			else
			{
				arr[k] = right[j];
				j++;
			}
		}
		else if (i == n1) {
			arr[k] = right[j];
			j++;
		}
		else if (j == n2) {
			arr[k] = left[i];
			i++;
		}
	}
	delete[] left;
	delete[] right;
}

template <typename T> void sort(T * arr, int left_pos, int right_pos)
{
	if (left_pos < right_pos)
	{
		int m;
		if ((left_pos + right_pos) % 2 == 0)
			m = -1;
		else
			m = 0;
		int mid_pos = (left_pos + right_pos + m) / 2;
		sort(arr, left_pos, mid_pos);
		sort(arr, mid_pos + 1, right_pos);
		fnMerge(arr, left_pos, mid_pos, right_pos);
	}

}

template <typename T> void msort(T * arr, int DIM)
{
	return sort(arr, 0, DIM - 1);
}

