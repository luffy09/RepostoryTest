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
double Celzii(double temp){
return ((temp-32)*5)/9;

}
double Kelv(double temp){
return Celzii(temp)+273.15;

}
int main()
{
    int num;
    char a;

cout<< "Vuvedete temperatura v fahrenheit";
    cin >> num;
    
cout<< "Vuvedete C za celzii, K za kelvini ili B za dvete zaedno";
    cin >> a;
if(a=='C')
cout<<Celzii(num);
else{
if(a=='K'){
cout<<Kelv(num);

}else{
    if(a=='B')
    cout<<"Celzii="<<Celzii(num)<<" Kelvini="<<Kelv(num);
}
}

    return 0;
}