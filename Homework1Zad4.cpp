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
int number;
cout << "Enter a number:";
cin>>number;
while (number>=1){
    for(int i=0;i<number/10+1;i++){
        cout<<"*";
    }
    cout<<number<<endl;
    if(number==1)number=0;
    else
    if(number%2!=0)number=number*3+1;
    else
    number/=2;
}

}
