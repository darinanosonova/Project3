#pragma once

#include <iostream>
#include<string>
#include "TStack.h"
using namespace std;

template <class T>
class TDStack
{
	TStack<T> s1;
	TStack<T> s2;
	T *pmas;
	int size;
public:

	TDStack()
	{
		size = s1.size + s2.size;
		for (int i = 0; i < size; i++)
		{
			if (i != (s1.size - 1))
				pmas[i] = s1.mas[i];
			else
				pmas[i] = s2.mas[i];
		}
	};
	~TDStack()
	{
		delete[] pmas;
	};
	TDStack(const TDStack& v)
	{
		size = v.size;
		s1 = v.s1;
		pmas = new T [size];
		for (int i = 0; i <= size; i++)
		{
			pmas[i] = v.mas[i];
		};
	};

};