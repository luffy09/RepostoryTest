#include <algorithm>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <vector>
#include <stdio.h>
#include <cstdio>
#include <fstream>
#include <string.h>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int num, num2, num3;

    cin >> num >> num2 >> num3;
    if (num % num3 == 0 && num2 % num3 == 0)
        cout << ((num / num3) * (num2 / num3));
    else
    {
        if (num % num3 == 0)
            cout << ((num / num3) * (num2 / num3 + 1));
        else
        {
            if (num2% num3 == 0)
                cout << ((num / num3 + 1) * (num2 / num3));
            else
            {
                cout << ((num / num3 + 1) * (num2 / num3 + 1));
            }
        }
    }
    return 0;
}