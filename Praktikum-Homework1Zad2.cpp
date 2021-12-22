#include <iostream>
#include <cmath>
using namespace std;

bool isPalindrome(unsigned long int n)
{

    unsigned long int numCopy, digit, rev = 0;

    numCopy = n;

    do
    {
        digit = numCopy % 10;
        rev = (rev * 10) + digit;
        numCopy = numCopy / 10;
    } while (numCopy != 0);
    return n == rev;
}

int main()
{
    unsigned long int num;
    cout << "Enter a positive number: ";
    cin >> num;
    int count = 0;

    for (unsigned long int i = 9; count < num; i++)
    {
       
        if(i>=65534){
       
        cout <<"there are only: "<< count<<" numbers ";
    
            break;
        }
        if (isPalindrome(i))
        {
          
            if (isPalindrome(i*i))
            {
               
                cout << i << " -> " << i*i << endl;
                count++;
            }
        }
    }

}