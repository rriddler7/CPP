
class Awesome
{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
	template<typename T>
	void iter(T *array, int len, void function(T &el))
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
private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

//template< typename T >
//void print( T const & x ) { std::cout << x << std::endl; return; }
