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

int main() {
// Zad 3
int number;

cout << "Enter a number [100-999]:";
cin>>number;
if (number < 1000 && number >= 100)
{
    int firstN = number / 100, secondN = ((number / 10) % 10), thirdN = number % 10;
    int N = firstN + secondN;
    int M = firstN + thirdN;
    for (int i = 0; i < N; i++)
    {
        for (int z = 0; z < M; z++)
        {
            
            if (number % 5 == 0){
                number -= firstN;}
            else if (number % 3 == 0){
               
                number -= secondN;}
            else{
                number += thirdN;}
        cout<<number<<" ";
        
        }
        cout<<endl;
    }
}
}