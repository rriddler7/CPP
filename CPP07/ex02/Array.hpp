#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template<typename T>
class Array
{
public:
	Array()
	{
		len = 1;
		ptr = new T[len];
	};

	Array(unsigned int N)
	{
		len = N;
		ptr = new T[len]();
	}

	Array(const Array &prototype)
	{
		*this = prototype;
	}

	Array<T> & operator = (const Array<T> &prototype)
	{
		if (this != &prototype)
		{
			if (ptr)
				delete [] ptr;
			len = prototype.len;
			ptr = new T[len];
			for (unsigned int i = 0; i < len; i++)
				ptr[i] = prototype[i];
		}
		return *this;
	}

	~Array()
	{
		delete ptr;
	}

	unsigned int size()
	{
		return len;
	}

	T &operator[](unsigned int index) const
	{
		if (index >= len)
			throw (std::out_of_range("Array bounds exceeded"));
		return *(ptr+index);
	}

private:
	unsigned int len;
	T *ptr;
};

template<typename T>
std::ostream &operator<<(std::ostream &out, Array<T> &arr)
{
	for (unsigned int i = 0; i < arr.size(); i++)
	{
		out << "element[" << i << "] " << arr[i] << " ";
	}
	return out;
}

#endif
