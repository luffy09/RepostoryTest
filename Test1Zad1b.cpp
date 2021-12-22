#include <iostream>
#include <cmath>
using namespace std;
//Konstantin Stoianov 3MI0700089
double PtoStartdistance(double x, double y){
double sideC=sqrt(x*x+y*y);
return sideC;
}
int main(){
double x,y;
cout<<"Please enter X"<<endl;
cin>>x;  
cout<<"Please enter Y"<<endl;
cin>>y;
if(PtoStartdistance(x,y)<=2 && y<=1)
  {
  cout<<"It's inside"<<endl;

  }else{
  cout<<"It's not inside"<<endl;    
  }

}