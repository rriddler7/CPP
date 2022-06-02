#include "Span.hpp"

int main()
{
	{
		std::cout << "--- Subject -->" << std::endl;

		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl;

	{
		std::cout << "--- addNumber(). Adding over the limit -->" << std::endl;

		try
		{
			Span sp = Span(4);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;

	{
		std::cout << "--- addRange() -->" << std::endl;

		try
		{
			Span sp = Span(8);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);

			std::vector<int> tmp;
			for (int i = 0; i < 10; i++)
				tmp.push_back(100 + i);

			sp.addRange(tmp.begin(), tmp.begin() + 2);

			std::cout << "ОK" << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;

	{
		std::cout << "--- addRange(). Adding over the limit -->" << std::endl;

		try
		{
			Span sp = Span(8);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);

			std::vector<int> tmp;
			for (int i = 0; i < 10; i++)
				tmp.push_back(100 + i);

			sp.addRange(tmp.begin(), tmp.end());
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;

	{
		std::cout << "--- shortestSpan() -->" << std::endl;

		try
		{
			Span sp = Span(10);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);

			std::cout << "6, 3, 17, 9, 11. Res: " << sp.shortestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;

	{
		std::cout << "--- shortestSpan(). Less than 2 item -->" << std::endl;

		try
		{
			Span sp = Span(1);
			sp.addNumber(6);
			std::cout << "6. Res: " << sp.shortestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;

	{
		std::cout << "--- longestSpan() -->" << std::endl;

		try
		{
			Span sp = Span(10);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);

			std::cout << "6, 3, 17, 9, 11. Res: " << sp.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;

	{
		std::cout << "--- longestSpan(). Less than 2 item -->" << std::endl;

		try
		{
			Span sp = Span(1);
			sp.addNumber(6);
			std::cout << "6. Res: " << sp.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;

	{
		std::cout << "--- Add a random sequence of elements to the container -->" << std::endl;

		std::vector<int> v(20000);

		std::srand(std::time(0));
		for (std::vector<int>::iterator i = v.begin(); i < v.end(); i++)
			*i = rand() % 10000 + rand() % 10000;
////	 for (std::vector<int>::iterator i = v.begin(); i < v.end(); i++)
////	 	std::cout << *i << " ";
		std::cout << std::endl;

		Span sp1(20000);

		sp1.addRange(v.begin(), v.end());

		std::cout << "shortest span = " << sp1.shortestSpan() << std::endl;
		std::cout << "longest span = " << sp1.longestSpan() << std::endl;
	}

	return 0;
}
