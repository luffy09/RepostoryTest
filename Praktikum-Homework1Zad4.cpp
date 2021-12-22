#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int countDigit(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}

int main()
{
    int number;
    cin >> number;
    int digits[30] = {};
    int numberOfDigits = countDigit(number);
    for (int i = 0; i < numberOfDigits; i++)
    {
        digits[i] = number % 10;
        number /= 10;
    }
    sort(digits, digits + numberOfDigits, greater<int>());
    for (int i = 0; i < numberOfDigits; i++)
    {
        cout << digits[i];
    }
}