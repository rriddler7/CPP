#ifndef ITER_HPP
#define ITER_HPP

template<typename T>
void iter(T *array, int len, void function(T const &el))
{
	for (int i = 0; i < len; i++)
		function(array[i]);
}

template<typename T>
void print_el(T &el)
{
	std::cout << "element " << el << std::endl;
}

template<typename T>
void increm(T &el)
{
	el++;
	std::cout << "element " << el << std::endl;
}

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

#endif
