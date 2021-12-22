#include <iostream>
#include <cmath>
using namespace std;
//Konstantin Stoianov 3MI0700089
bool isSumPrime(int a)
{
    int sum = 0;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
            sum += i;
    }
    return sum % 2 != 0;
}
int main()
{
    int k, n;
    cout << "Please enter number of numbers"<<endl;
    cin >> k;
    cout << "Please enter limit to numbers"<<endl;
    cin >> n;
    int counter = 0;
    for (int i = n - 1; i > 0 && counter < k; i--)
    {
        if (isSumPrime(i))
        {
            cout << i << " ";
            counter++;
        }
        if(i==1 && counter!=k){
cout<<"There are not enouth numbers"<<endl;

   }
    }
}