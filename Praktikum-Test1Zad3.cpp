#include <iostream>
using namespace std;
void fillArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}
int main()
{
    int n;
    cin >> n;
    int array[n];
    int counter = 0;
    fillArray(array, n);
    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                counter++;
            }
        }
    }
    cout << counter;
}