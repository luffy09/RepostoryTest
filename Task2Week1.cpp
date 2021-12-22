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
int num;
int a,b,c;
cin>>num;
a=num/100;
c=num%10;
b=(num/10)%10;


cout<<a<<" "<<b<<" "<<c<<" "<<a+b+c;
return 0;

}