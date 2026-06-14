#pragma once
#include "clsDynamicArray.h"

template<typename T>
class clsMyQueArr
{
protected:
	clsDynamicArray <T> _MyList;

public:

	void push(T item)
	{
		_MyList.InsertEnd(item);
	}

	void pop()
	{
		_MyList.DeleteFirstItem();
	}

	int Size()
	{
		return _MyList.Size();
	}

	void Print()
	{
		_MyList.PrintList();
	}

	T front()
	{
		return _MyList.GetItem(0);
	}

	T back()
	{
		return _MyList.GetItem(_MyList.Size() - 1);
	}

	bool IsEmpty()
	{
		return _MyList.IsEmpty();
	}

	T GetItem(int index)
	{
		return _MyList.GetItem(index);
	}

	void Reverse()
	{
		_MyList.Reverse();
	}

	void UpdateItem(int index, T NewValue)
	{
		_MyList.SetItem(index, NewValue);
	}

	void InsertAfter(int index, T value)
	{
		_MyList.InsertAfter(index, value);
	}

	void InsertAtFront(T value)
	{
		_MyList.InsertAtBigining(value);
	}

	void InsertAtBack(T value)
	{
		push(value);
	}

	void Clear()
	{
		_MyList.Clear();
	}
};