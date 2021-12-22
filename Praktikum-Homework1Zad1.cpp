#include <iostream>
#include <cmath>
using namespace std;

int countDigit(long long n)
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
    int copyOfNumber = number;
    int numberOfDigits = countDigit(number);
    int sum = 0;
    for (int i = 0; i < numberOfDigits; i++)
    {
        sum += pow((number % 10), numberOfDigits);
        cout << (number % 10) << " ^ " << numberOfDigits << " + ";
        number /= 10;
    }
    cout << " = " << sum;
    if (sum == copyOfNumber)
    {
        cout << " - YES";
    }
    else
    {
        cout << " - NO";
    }
    return 0;
}