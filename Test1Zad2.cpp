#include <iostream>
#include <cmath>
using namespace std;
//Konstantin Stoianov 3MI0700089
int main(){
double MoneyGoal;
double lev=1,Dstotinki=0.20,Pstotinki=0.05,Estotinka=0.01;
int counter=0;
do{
cout<<"Please input your money goal"<<endl;
cin>>MoneyGoal;
}while(MoneyGoal<0 && MoneyGoal>100);
while(MoneyGoal>=lev){
MoneyGoal-=lev;
counter++;
}
cout<<MoneyGoal<<" Lv. ="<<counter<<" X "<<lev<<" Lv. + ";
counter=0;
while(MoneyGoal>=Dstotinki){
MoneyGoal-=Dstotinki;
counter++;
}
cout<<counter<<" X "<<Dstotinki<<" Lv. + ";
counter=0;
while(MoneyGoal>=Pstotinki){
MoneyGoal-=Pstotinki;
counter++;
}
cout<<counter<<" X "<<Pstotinki<<" Lv. + ";
counter=0;
while(MoneyGoal>=Estotinka){
MoneyGoal-=Estotinka;
counter++;
}
cout<<counter<<" X "<<Estotinka<<" Lv.";
counter=0;
}