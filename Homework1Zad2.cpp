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
string int_to_Roman(int a);
int main() {

//Zad 2
int number;
cout << "Enter a number (1-1000):";
cin >> number;
if (number <= 1000 && number >= 1)
{  cout << "You number was: " << number << " and in Roman numbers it would be: ";
    if(number == 1000){
    cout<<"M";
    }else if(number > 99){
  int firstN = number / 100, secondN = ((number / 10) % 10), thirdN = number % 10;
        switch (firstN)
{
case 1:
cout<<"C";
    break;
case 2:
cout<<"CC";
    break;
case 3:
cout<<"CCC";
    break;
case 4:
cout<<"CD";
    break;
case 5:
cout<<"D";
    break;
case 6:
cout<<"DC";
    break;
case 7:
cout<<"DCC";
    break;
case 8:
cout<<"DCCC";
    break;
case 9:
cout<<"CM";
    break;
default:
    break;
}
        switch (secondN)
{
case 1:
cout<<"X";
    break;
case 2:
cout<<"XX";
    break;
case 3:
cout<<"XXX";
    break;
case 4:
cout<<"XL";
    break;
case 5:
cout<<"L";
    break;
case 6:
cout<<"LX";
    break;
case 7:
cout<<"LXX";
    break;
case 8:
cout<<"LXXX";
    break;
case 9:
cout<<"XC";
    break;
default:
    break;
}

        switch (thirdN)
{
case 1:
cout<<"I";
    break;
case 2:
cout<<"II";
    break;
case 3:
cout<<"III";
    break;
case 4:
cout<<"IV";
    break;
case 5:
cout<<"V";
    break;
case 6:
cout<<"VI";
    break;
case 7:
cout<<"VII";
    break;
case 8:
cout<<"VIII";
    break;
case 9:
cout<<"IX";
    break;
default:
    break;
}
    }else if(number > 9){
  int  firstN = (number / 10), secondN = number % 10;
     
        switch (firstN)
{
case 1:
cout<<"X";
    break;
case 2:
cout<<"XX";
    break;
case 3:
cout<<"XXX";
    break;
case 4:
cout<<"XL";
    break;
case 5:
cout<<"L";
    break;
case 6:
cout<<"LX";
    break;
case 7:
cout<<"LXX";
    break;
case 8:
cout<<"LXXX";
    break;
case 9:
cout<<"XC";
    break;
default:
    break;
}

        switch (secondN)
{
case 1:
cout<<"I";
    break;
case 2:
cout<<"II";
    break;
case 3:
cout<<"III";
    break;
case 4:
cout<<"IV";
    break;
case 5:
cout<<"V";
    break;
case 6:
cout<<"VI";
    break;
case 7:
cout<<"VII";
    break;
case 8:
cout<<"VIII";
    break;
case 9:
cout<<"IX";
    break;
default:
    break;
}
    }else {      
      switch (number)
{
case 1:
cout<<"I";
    break;
case 2:
cout<<"II";
    break;
case 3:
cout<<"III";
    break;
case 4:
cout<<"IV";
    break;
case 5:
cout<<"V";
    break;
case 6:
cout<<"VI";
    break;
case 7:
cout<<"VII";
    break;
case 8:
cout<<"VIII";
    break;
case 9:
cout<<"IX";
    break;
default:
    break;
}}
}
    
    
  



}
