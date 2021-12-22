#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//<stdio.h>, <stdlib.h> и <time.h>
using namespace std;
void fillArray(int diceThrown[])
{
    srand (time(NULL));
    int checking = 0;
    for (int i = 0; i < 5; i++)
    {
        
        checking = rand() % 10;
        if (checking > 6)
            checking -= 3;
        if (checking < 1)
            checking++;
      cout<<checking<<endl;
        diceThrown[i] = checking;
    }
    return;
}

int main()
{
    int diceThrown[5];
    int counterOfEquals = 0;
    int counterOfDiceThrown = 0;
    int counter=0;
    bool isFinished = false;
    while (!isFinished)
    {
        counterOfDiceThrown++;
        fillArray(diceThrown);

        for (int i = 0; i < 5; i++)
        {

            counterOfEquals = 0;
            for (int j = 0; j < 5; j++)
            {

                if (diceThrown[i] == diceThrown[j])
                {
                    counterOfEquals++;
                }
            }
            if (counterOfEquals >= 3)
            {counter++;
            if(counter==3){
                isFinished = true;
                cout << "We made " << counterOfDiceThrown << " throws" << endl;
            }break;
            }
        }
    }
}