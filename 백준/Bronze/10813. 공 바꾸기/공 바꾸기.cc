#include <iostream>
#include <algorithm>

int main()
{
	int N{ 0 }, M{ 0 }, i{ 0 }, j{ 0 };
	int a[101];

	std::cin >> N >> M;

	for (int k{ 1 };k <= N;k++)
	{
		a[k] = k;
	}

	for (int k{ 1 };k <= M;k++)
	{
		std::cin >> i >> j;
		std::swap(a[i], a[j]);
	}

	for (int k{ 1 };k <= N;k++)
	{
		std::cout << a[k] << ' ';
	}

	return 0;
}