#pragma once
template<class T>
class clsDynamicArray
{
protected:
	int _Size = 0;
	T* _TempArray;

public:

	T* OriginalArray;

	clsDynamicArray(int Size = 0)
	{
		if (Size < 0)
			Size = 0;

		_Size = Size;
		OriginalArray = new T[_Size];
	}

	~clsDynamicArray()
	{
		delete[] OriginalArray;
	}

	bool SetItem(int index, T value)
	{
		if (index >= _Size || _Size < 0)return false;

		OriginalArray[index] = value;
		return true;
	}

	bool IsEmpty()
	{
		return !_Size;
	}

	int Size()
	{
		return _Size;
	}

	void PrintList()
	{
		for (int i = 0; i < _Size; i++)
			std::cout << OriginalArray[i] << " ";
		std::cout << std::endl;
	}

	void Resize(int NewSize)
	{
		_TempArray = new T[NewSize];

		if (NewSize == _Size)
			return;

		_Size = NewSize;

		for (int i = 0; i < _Size; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}
		delete OriginalArray;

		OriginalArray = _TempArray;
	}

	T GetItem(int index)
	{
		if (index >= _Size || index < 0)
			return NULL;
		else
			return OriginalArray[index];
	}

	void Reverse()
	{
		_TempArray = new T[_Size];

		for (int i = 0; i < _Size; i++)
		{
			_TempArray[i] = OriginalArray[_Size - 1 - i];
		}

		delete OriginalArray;
		OriginalArray = _TempArray;
	}

	void Clear()
	{
		_Size = 0;
	}

	bool DelelteItemAt(int index)
	{
		if (index <0 || index> _Size)
			return false;

		_Size--;
		_TempArray = new T[_Size];

		for (int i = 0; i < index; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}

		for (int i = index; i < _Size; i++)
		{
			_TempArray[i] = OriginalArray[i + 1];
		}
		delete OriginalArray;
		OriginalArray = _TempArray;

		return true;
	}

	void DeleteFirstItem()
	{
		DelelteItemAt(0);
	}

	void DeleteLastItem()
	{
		DelelteItemAt(_Size - 1);
	}

	int Find(T value)
	{
		int index = 0;
		for (int i = 0; i < _Size; i++)
		{
			if (OriginalArray[i] == value)
				return index;
			index++;
		}

		return -1;
	}

	bool DeleteByValue(T value)
	{
		int index = Find(value);

		if (index != -1)
			return DelelteItemAt(index);

		return false;
	}

	bool InsertAt(int index, T value)
	{
		if (index <0 || index> _Size)
			return false;

		_Size++;
		_TempArray = new T[_Size];

		for (int i = 0; i < index; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}

		_TempArray[index] = value;

		for (int i = index; i < _Size; i++)
		{
			_TempArray[i + 1] = OriginalArray[i];
		}
		delete OriginalArray;
		OriginalArray = _TempArray;

		return true;
	}

	bool InsertAtBigining(T value)
	{
		if (InsertAt(0, value))
			return true;
		else
			return false;
	}

	bool InsertEnd(T value)
	{
		if (InsertAt(_Size, value))
			return true;
		else
			return false;
	}

	bool InsertAfter(int index, T value)
	{
		if (InsertAt(index + 1, value))
			return true;
		else
			return false;
	}

	bool InsertBefor(int index, T value)
	{
		if (InsertAt(index - 1, value))
			return true;
		else
			return false;
	}

};

