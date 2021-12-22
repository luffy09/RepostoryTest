#include <iostream>
#include <cmath>
using namespace std;
//Konstantin Stoianov 3MI0700089
int main(){
int secondsIn;
int seconds=0,minutes=0, hours=0, days=0;
do{
cout<<"Please input seconds"<<endl;
cin>> secondsIn;
}while(secondsIn<0 && secondsIn> 10000000);
seconds=secondsIn;
minutes= seconds/60;
hours= minutes/60;
days=hours/24;
minutes= minutes%60;
hours=hours%24;
seconds%=60;
cout<<days<<" Days "<<hours<<" Hours "<<minutes<<" Minutes "<<seconds<<" Seconds "<<endl;

}