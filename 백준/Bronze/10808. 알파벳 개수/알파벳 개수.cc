#include <iostream>
#include <string>

int main() 
{
    std::string s;
    std::cin >> s;

    int arr[26] = { 0 };

    for (int i{ 0 }; i < s.length(); i++)
    {
        arr[s[i] - 97]++;
    }

    for (int i{ 0 }; i < 26; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}