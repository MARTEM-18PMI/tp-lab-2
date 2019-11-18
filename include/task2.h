#pragma once

template <typename T, size_t DIM>
T* createArr(T(*gen)())
{
	T* arr = new T[DIM];
	for (size_t i = 0; i < DIM; ++i)
	{
		arr[i] = gen();
	}
	return arr;
}

