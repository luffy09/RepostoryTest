#include <iostream>
#include <cmath>
using namespace std;
//Konstantin Stoianov 3MI0700089
int main()
{
    int octave1;
    char note1;
    int octave2;
    char note2;
    
        cout << "Octave (0-8): ";
        cin >> octave1;
     while (octave1 < 0 || octave1 > 8)
     {
        cout << "Incorrect input, please try again!" << endl;
        cout << "Octave (0-8): "<< endl;
        cin >> octave1;
     }
    if (octave1 == 0)
    {
        cout << "Note (A;B): ";
        cin >> note1;
        while (note1 != 'A' && note1 != 'B')
        {
            cout << "Incorrect input, please try again!" << endl;
            cout << "Note (C;D;E;F;G;A;B): "<< endl;
            cin >> note1;
        }
    }
    else if (octave1 == 8)
    {
        cout << "Only note C is in 8 octave!" << endl;
        note1 = 'C';

    }
    else
    {

        cout << "Note (C;D;E;F;G;A;B): ";
        cin >> note1;
        while (note1 != 'C' && note1 != 'D' && note1 != 'E' && note1 != 'F' && note1 != 'G' && note1 != 'A' && note1 != 'B')
        {
            cout << "Incorrect input, please try again!" << endl;
            cout << "Note (C;D;E;F;G;A;B): "<< endl;
            cin >> note1;
        }
    }
   
        cout << "Octave (0-8): ";
        cin >> octave2;
         while (octave2 < 0 || octave2 > 8)
     {
        cout << "Incorrect input, please try again!" << endl;
        cout << "Octave (0-8): "<< endl;
        cin >> octave2;
     }
    if (octave2 == 0)
    {

        cout << "Note (A;B): ";
        cin >> note2;
    
    while (note2 != 'A' && note2 != 'B')
      cout << "Incorrect input, please try again!" << endl;
        cout << "Note (A;B): "<< endl;
    cin >> note2;
    }
    else if (octave2 == 8)
    {
        cout << "Only note C is in 8 octave!" << endl;
        note2 = 'C';
    }
    else
    {

        cout << "Note (C;D;E;F;G;A;B): ";
        cin >> note2;

        while (note2 != 'C' && note2 != 'D' && note2 != 'E' && note2 != 'F' && note2 != 'G' && note2 != 'A' && note2 != 'B')
        {
            cout << "Incorrect input, please try again!" << endl;
            cout << "Note (C;D;E;F;G;A;B): "<< endl;
            cin >> note2;
        }
    }

    if ((octave1 == 0 && note1 == 'A') || (octave2 == 0 && note2 == 'A') || (octave1 == 0 && note1 == 'B') || (octave2 == 0 && note2 == 'B'))
    {
        switch (abs(note1 - note2))
        {
        case 0:
            if (octave1 == octave2)
                cout << "prima" << endl;
            else
                cout << "octava" << endl;
            break;
        case 1:
            cout << "sekunda" << endl;
            break;
        case 2:
            cout << "terca" << endl;
            break;
        case 3:
            cout << "kvarta" << endl;
            break;
        case 4:
            cout << "kvinta" << endl;
            break;
        case 5:
            cout << "seksta" << endl;
            break;
        case 6:
            cout << "septima" << endl;
            break;
        }
        return 0;
    }

    if (note1 == 'A' || note1 == 'B')
        note1 = note1 + 7;
    if (note2 == 'A' || note2 == 'B')
        note2 = note2 + 7;

    if (note1 == note2 && octave1 != octave2)
    {
        if (abs(octave1 - octave2) == 1)
        {
            cout << abs(octave1 - octave2) << ' ' << "oktava" << endl;
            return 0;
        }
        else
        {
            cout << abs(octave1 - octave2) << ' ' << "oktavi" << endl;
            return 0;
        }
    }

    switch (abs(note1 - note2))
    {
    case 0:
        cout << "prima" << endl;
        break;
    case 1:
        cout << "sekunda" << endl;
        break;
    case 2:
        cout << "terca" << endl;
        break;
    case 3:
        cout << "kvarta" << endl;
        break;
    case 4:
        cout << "kvinta" << endl;
        break;
    case 5:
        cout << "seksta" << endl;
        break;
    case 6:
        cout << "septima" << endl;
        break;
    }

    return 0;
}
