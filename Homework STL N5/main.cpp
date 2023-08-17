#include <iostream>
#include <set>
#include <vector>
#include <list>

template<class T>
void print_container(T container)
{
	for (auto it : container)
	{
		std::cout << it << " ";
	}
}

int main()
{
	std::set<int> set = { 2,5,8,5,1 };
	print_container(set);
	return 0;
}