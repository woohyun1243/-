#include <iostream>

int main(void)
{
	int N{}, a{}, min{ 1000000 }, max{ -1000000 };
	std::cin >> N;

	for (int i{ 0 };i < N;i++) {
		std::cin >> a;

		if (min > a) min = a;
		if (max < a) max = a;
	}

	std::cout << min << ' ' << max;
    
    return 0;
}