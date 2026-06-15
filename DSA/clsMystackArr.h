#pragma once
#include "clsMyQueArr.h"

template<typename T>
class clsMyStackArr : public clsMyQueArr <T>
{
public:

	void push(T value)
	{
		clsMyQueArr<T>::_MyList.InsertAtBigining(value);
	}

	T Top()
	{
		return clsMyQueArr<T>::front();
	}

	T Bottom()
	{
		return clsMyQueArr<T>::back();
	}
};