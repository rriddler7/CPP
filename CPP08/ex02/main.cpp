#include "MutantStack.hpp"

int main()
{

	std::cout << "template container" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	std::cout << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	std::cout << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737); //[...] mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
//	std::stack<int> s(mstack);
	std::cout << std::endl;
	MutantStack<int> s(mstack);
	MutantStack<int>::iterator it2 = s.begin();
	MutantStack<int>::iterator ite2 = s.end();
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	std::cout << std::endl;

//	std::cout << "vector stack" << std::endl;
//	std::vector<int> mstack;
//	mstack.push_back(5);
//	mstack.push_back(17);
//	std::cout << mstack.back() << std::endl;
//	std::cout << std::endl;
//	mstack.pop_back();
//	std::cout << mstack.size() << std::endl;
//	std::cout << std::endl;
//	mstack.push_back(3);
//	mstack.push_back(5);
//	mstack.push_back(737);
//	std::vector<int>::iterator it = mstack.begin();
//	std::vector<int>::iterator ite = mstack.end();
//	++it;
//	--it;
//	while (it != ite)
//	{
//		std::cout << *it << std::endl;
//		++it;
//	}

//	std::cout << "list stack" << std::endl;
//	std::list<int> mstack;
//	mstack.push_back(5);
//	mstack.push_back(17);
//	std::cout << mstack.back() << std::endl;
//	std::cout << std::endl;
//	mstack.pop_back();
//	std::cout << mstack.size() << std::endl;
//	std::cout << std::endl;
//	mstack.push_back(3);
//	mstack.push_back(5);
//	mstack.push_back(737);
//	std::list<int>::iterator it = mstack.begin();
//	std::list<int>::iterator ite = mstack.end();
//	++it;
//	--it;
//	while (it != ite)
//	{
//		std::cout << *it << std::endl;
//		++it;
//	}

	return 0;
}
