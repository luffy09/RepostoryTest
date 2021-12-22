#include <iostream>
#include <cmath>
using namespace std;

int main() {
double w, h;
cout<<"Enter weight and hight"<<endl;
cin>>w>>h;
cout<<"BMI: "<<round((w/(h*h)))<<endl;

}