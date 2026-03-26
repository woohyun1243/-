#include <iostream>

int main()
{
	int n{ 0 }, rem{ 0 }, sum{ 0 };
	int type[43]{ 0 };

	for (int i{ 0 }; i < 10; i++)
	{
		std::cin >> n;

		rem = n % 42;
		type[rem] = 1;
	}

	for (int i{ 0 };i <= 42;i++)
	{
		sum += type[i];
	}

	std::cout << sum;

	return 0;
}