#include "../includes/Array.hpp"

template <typename T> Array<T>::Array() : _ptr(new T[0]()), _arraySize(0)
{
}

template <typename T> Array<T>::Array(int i) : _ptr(new T[i]()), _arraySize(i)
{
	for (std::size_t i = 0; i < _arraySize; ++i)
	{
		_ptr[i] = T();
	}
}

template <typename T> Array<T>::~Array()
{
	delete[] _ptr;
}

template <typename T> T &Array<T>::operator[](std::size_t index)
{
	if (index >= _arraySize)
	{
		throw std::out_of_range("Index out of range.");
	}
	return (_ptr[index]);
}

template <typename T> std::size_t Array<T>::size() const
{
	return (_arraySize);
}

template <typename T> Array<T>::Array(const Array &copyArray) : _ptr(new T[copyArray._arraySize]()),
	_arraySize(copyArray._arraySize)
{
	for (unsigned int i = 0; i < this->_arraySize; ++i)
		this->_ptr[i] = copyArray._ptr[i];
}

template <typename T> Array<T> &Array<T>::operator=(const Array<T> &copyArray)
{
	if (this != &copyArray)
	{
		delete[] _ptr;
		_arraySize = copyArray.size();
		_ptr = new T[_arraySize];
		for (size_t i = 0; i < _arraySize; ++i)
			_ptr[i] = copyArray._ptr[i];
	}
	return (*this);
}