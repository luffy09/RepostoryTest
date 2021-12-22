#include <iostream>
//<stdio.h>, <stdlib.h> и <time.h>
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
void creatingNumber(int bigNumber, int array[], int smallNumber)
{
    int size = 0;
    int finalNumber = 0;
    size = countDigit(bigNumber);
    for (int i = size - 1; i >= 0; i--)
    {
        array[i] = bigNumber % 10;
        bigNumber /= 10;
    }
    for (int i = 0; i < size; i++)
    {
        finalNumber *= 10;
        if (array[i] * smallNumber > 9)
        {
            finalNumber += (array[i] * smallNumber) / 10;
        }
        else
        {
            finalNumber += array[i] * smallNumber;
        }
    }
    cout << finalNumber;
}
int main()
{
    int biggerNumber;
    int smallerNumber;
    int array[countDigit(biggerNumber)];
    cout << "Enter any whole number" << endl;
    cin >> biggerNumber;
    cout << "Enter a number 0-9" << endl;
    cin >> smallerNumber;
    creatingNumber(biggerNumber, array, smallerNumber);
}