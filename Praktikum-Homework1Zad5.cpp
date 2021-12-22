#include <iostream>
#include <cmath>

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
    bool isUnique = true;
    int digits[30] = {};
    int numberOfDigits = countDigit(number);
    for (int i = 0; i < numberOfDigits; i++)
    {
        digits[i] = number % 10;
        number /= 10;
    }
    for (int i = 0; i < numberOfDigits; i++)
    {
        for (int z = 0; isUnique && z < numberOfDigits; z++)
        {
            if (i != z)
            {
                if (digits[i] == digits[z])
                {
                    isUnique = false;
                }
            }
        }
    }
    if (isUnique)
    {
        cout << "TRUE";
    }
    else
    {
        cout << "FALSE";
    }
}