#include <iostream>

int main(void)
{
	int N{};
	double M{}, sum{}, grade[1001];

	std::cin >> N;

	for (int i{ 0 };i < N;i++)
	{
		std::cin >> grade[i];

		if (M < grade[i]) M = grade[i];
	}

	for (int i{ 0 };i < N;i++)
	{
		grade[i] = grade[i] / M * 100;
		sum += grade[i];
	}

	std::cout << sum / N;

	return 0;
}