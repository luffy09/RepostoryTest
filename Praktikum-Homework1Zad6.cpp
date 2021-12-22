#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x1,y1,r1,x2,y2,r2;
    cin>>x1;
    cin>>y1;
    cin>>r1;
    cin>>x2;
    cin>>y2;
    cin>>r2;
if(sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))<r1+r2){
cout<<"Ne se dopirat ne se i presichat";
}
else if(sqrt((x1-x2)*(x1-x2)+(y1-y2))>r1+r2){
    cout<<"presichat se";
}else{
    cout<<"dopirat se";
}
}