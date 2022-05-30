#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	Base *base;
	size_t	order;

	order = rand() % 3;
	if (order == 0)
		base = new A;
	if (order == 1)
		base = new B;
	if (order == 2)
		base = new C;
	return base;
}

void identify(Base *p)
{
	A *a = dynamic_cast<A*>(p);
	if (a)
		std::cout << "A" << std::endl;
	B *b = dynamic_cast<B*>(p);
	if (b)
		std::cout << "B" << std::endl;
	C *c = dynamic_cast<C*>(p);
	if (c)
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
}

int	main()
{
	srand(time(NULL));
	for (int i = 0; i < 3; i++)
	{
		Base *base;

		base = generate();
		std::cout << "Identify by the pointer" << std::endl;
		std::cout << "Actual type is ";
		identify(base);
		std::cout << "Identify by the reference" << std::endl;
		std::cout << "Actual type is ";
		identify(*base);
		delete base;
	}
	return 0;
}
