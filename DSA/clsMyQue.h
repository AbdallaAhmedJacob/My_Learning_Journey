#pragma once
#include "clsDblLinkedList.h"

template<typename T>
class clsMyQue
{
protected:
	clsDblLinkedList <T> _MyList;

public:

	void push(T item)
	{
		_MyList.InsertAtEnd(item);
	}

	void pop()
	{
		_MyList.DeleteFirstNode();
	}

	int Size()
	{
		return _MyList.Size();
	}

	void Print()
	{
		_MyList.Print();
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
		_MyList.UpdateItem(index, NewValue);
	}

	void InsertAfter(int index, T value)
	{
		_MyList.InsertAfter(index, value);
	}

	void InsertAtFront(T value)
	{
		_MyList.InsertAtBiginig(value);
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