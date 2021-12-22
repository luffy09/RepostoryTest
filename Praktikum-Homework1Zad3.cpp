#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int number)
{
    bool isPrime = true;
    if (number == 0)
    {
        return false;
    }
    if (number == 1)
    {
        return false;
    }
    else
    {
        for (int i = 2; i <= number / 2; ++i)
        {
            if (number % i == 0)
            {
                return false;
                break;
            }
        }
        return isPrime;
    }
}
bool isNotDivisible_By_Highter_Prime_Number_Than_K( int number,int k=5)
{

    for (int i = k+1; i < number; i++)
    {
        if (isPrime(i) )
        {
            if (number % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int k, amountOfNumbers;
    cout << "Enter amount of numbers wanted: ";
    cin >> amountOfNumbers;
    cout << "Enter prime parameter: ";
    cin >> k;
    if(!isPrime(k)){k=5;}
    int count = 0;
    for (int i = 2; count < amountOfNumbers; i++)
    {
        if (isNotDivisible_By_Highter_Prime_Number_Than_K(k, i))
        {
            if(i<=k || !isPrime(i)){
            cout << i << " ";
            count++;
            }
        }
    }
}