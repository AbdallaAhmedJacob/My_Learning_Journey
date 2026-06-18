#pragma once
#include "clsMyQue.h"

template<typename T>
class clsMyStack : public clsMyQue <T>
{
public:

	void push(T value)
	{
		clsMyQue<T>::_MyList.InsertAtBiginig(value);
	}

	T Top()
	{
		return clsMyQue<T>::front();
	}

	T Bottom()
	{
		return clsMyQue<T>::back();
	}

};