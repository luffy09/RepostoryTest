#include "mylib.cpp"
using namespace std;

class lol{
  public:
 char codirane[26];
  public:
 char razkodirane[26];
  public:
 string text[100];


};



int main() {
lol TRASH;
TRASH.razkodirane[0]='A';
TRASH.codirane[0]='Z';
for(int br=1;br<26;br++){
TRASH.razkodirane[br]='A'+br;
TRASH.codirane[br]='Z'-br;
}
cout << endl
<< " 1 - code.\n"
<< " 2 - decode.\n"
<< " 4 - Fuck you.\n"
<< " 5 - Exit.\n"
<< " Enter your choice and press return: ";
int choice;
cin >> choice;

switch (choice)
{
case 1:
cin>>TRASH.text;
int g=0;

for(char i=TRASH.text[g];i!='32';){

   for(int z=0;z<26;z++){
    if(TRASH.text[g]==TRASH.razkodirane[z]){
        TRASH.text[g]=TRASH.codirane[z];
    }

   }
    g++;
   i=TRASH.text[g];
}
cout<<TRASH.text;
break;
case 2:
//code to make score for this game to count how many times u win the game
break;
case 3:
//code to make option for the game
break;
case 4:
//code to help the user like give him
//extra information about the mode and the controller
break;
case 5:
cout << "End of Program.\n";
break;
default:
cout << "Not a Valid Choice. \n"
<< "Choose again.\n";
break;
}

}while (choice !=5);
return 0;
}


}
