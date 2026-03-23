#include <iostream>

int main()
{
	int a{}, b{}, c{};
	std::cin >> a >> b;

	c = a - b;

	if (c > 0) std::cout << ">";
	else if (c == 0) std::cout << "==";
	else std::cout << "<";

	
}