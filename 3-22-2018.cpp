#include "mylib.cpp"
using namespace std;

struct firma1
{
    struct ofis1
    {
        float sum;
    };
    ofis1 ofis[9];
};
            ofstream myfile;
            ifstream myreadfile;
float prihod;
float razhod;
string promenliva;

void menu(firma1);

char bufer_za_izvejdane[10000];


int main()
{
    ZAGLAVIE;
    IZTRI;
    CVQT;
    firma1 firma;
    firma.ofis[0].sum=0;
    firma.ofis[1].sum=0;
    firma.ofis[2].sum=0;
    firma.ofis[3].sum=0;
    firma.ofis[4].sum=0;
    firma.ofis[5].sum=0;
    firma.ofis[6].sum=0;
    firma.ofis[7].sum=0;
    firma.ofis[8].sum=0;
    menu(firma);



}
void menu(firma1 firma)
{

    int x;
    int indeks;
    cout<<"1.PRIHOD";
    EL
    cout<<"---------------------------";
    EL
    cout<<"2.RAZHOD";
    EL
    cout<<"---------------------------";
    EL
    cout<<"3.DANNI ZA OFIS";
    EL
    cout<<"---------------------------";
    EL
    cout<<"4.DANNI ZA CQLATA FIRMA";
    EL
    cout<<"---------------------------";
    EL
    cout<<"5.IZLEZ";
    EL
    cout<<"---------------------------";
    EL
    cin>>x;
    switch(x)
    {
    case 1 :
        cout<<"1.PRIHOD";
        EL
        cout<<"IZBERI OFIS";
        EL  cin>>indeks;
        cout<<"VAVEDI PRIHOD";
        EL cin>>prihod;
        firma.ofis[indeks].sum= firma.ofis[indeks].sum+prihod;
        switch(indeks)
        {
        case 0 :
            cout<<"VAVEDI PRODAJBA";
            EL
            myfile.open ("FILE0.txt", std::ios_base::app);
            cin>> promenliva;
            myfile<<promenliva<<" PRODADENO"<<"\n";
            myfile.close();
            IZTRI;
            menu(firma);
            break;
        case 1 :
            cout<<"VAVEDI PRODAJBA";
            EL
            myfile.open ("FILE1.txt", std::ios_base::app);
            cin>> promenliva;
            myfile<<promenliva<<" PRODADENO"<<"\n";
            myfile.close();
            IZTRI;
            menu(firma);


            break;
        case 2 :
            cout<<"VAVEDI PRODAJBA";
            EL
            myfile.open ("FILE2.txt", std::ios_base::app);
            cin>> promenliva;
            myfile<<promenliva<<"PRODADENO"<<"\n";
            myfile.close();
            IZTRI;
            menu(firma);

            break;
        case 3 :
            cout<<"VAVEDI PRODAJBA";
            EL
            myfile.open ("FILE3.txt", std::ios_base::app);
            cin>> promenliva;
            myfile<<promenliva<<"PRODADENO"<<"\n";
            myfile.close();
            IZTRI;
            menu(firma);

            break;
        case 4 :
            cout<<"VAVEDI PRODAJBA";
            EL
            myfile.open ("FILE4.txt", std::ios_base::app);
            cin>> promenliva;
            myfile<<promenliva<<"PRODADENO"<<"\n";
            myfile.close();
            IZTRI;
            menu(firma);

            break;
        case 5 :
            cout<<"VAVEDI PRODAJBA";
            EL
            myfile.open ("FILE5.txt", std::ios_base::app);
            cin>> promenliva;
            myfile<<promenliva<<"PRODADENO"<<"\n";
            myfile.close();
            IZTRI;
            menu(firma);

            break;
        case 6 :
            cout<<"VAVEDI PRODAJBA";
            EL
            myfile.open ("FILE6.txt", std::ios_base::app);
            cin>> promenliva;
            myfile<<promenliva<<"PRODADENO"<<"\n";
            myfile.close();
            IZTRI;
            menu(firma);

            break;
        case 7 :
            cout<<"VAVEDI PRODAJBA";
            EL
            myfile.open ("FILE7.txt", std::ios_base::app);
            cin>> promenliva;
            myfile<<promenliva<<"PRODADENO"<<"\n";
            myfile.close();
            IZTRI;
            menu(firma);

            break;
        case 8 :
            cout<<"VAVEDI PRODAJBA";
            EL
            myfile.open ("FILE8.txt", std::ios_base::app);
            cin>> promenliva;
            myfile<<promenliva<<"PRODADENO"<<"\n";
            myfile.close();
            IZTRI;
            menu(firma);
        }

        break;       // and exits the switch
    case 2 :
        cout<<"2.RAZHOD";
        EL
        cout<<"IZBERI OFIS";
        EL  cin>>indeks;
        cout<<"VAVEDI RAZHOD";
        EL cin>>razhod;
        firma.ofis[indeks].sum= firma.ofis[indeks].sum-razhod;
        switch(indeks)
        {
        case 0 :
            cout<<"VAVEDI POKUPKA";
            EL
            myfile.open ("FILE0.txt", std::ios_base::app);
            cin>> promenliva;
            myfile<<promenliva<<" KUPENO"<<"\n";
            myfile.close();
            IZTRI;
            menu(firma);
            break;
        case 1 :
            cout<<"VAVEDI POKUPKA";
            EL
            myfile.open ("FILE1.txt", std::ios_base::app);
            cin>> promenliva;
            myfile<<promenliva<<" KUPENO"<<"\n";
            myfile.close();
            IZTRI;
            menu(firma);


            break;
        case 2 :
            cout<<"VAVEDI POKUPKA";
            EL
            myfile.open ("FILE2.txt", std::ios_base::app);
            cin>> promenliva;
            myfile<<promenliva<<" KUPENO"<<"\n";
            myfile.close();
            IZTRI;
            menu(firma);

            break;
        case 3 :
            cout<<"VAVEDI POKUPKA";
            EL
            myfile.open ("FILE3.txt", std::ios_base::app);
            cin>> promenliva;
            myfile<<promenliva<<" KUPENO"<<"\n";
            myfile.close();
            IZTRI;
            menu(firma);

            break;
        case 4 :
            cout<<"VAVEDI POKUPKA";
            EL
            myfile.open ("FILE4.txt", std::ios_base::app);
            cin>> promenliva;
            myfile<<promenliva<<" KUPENO"<<"\n";
            myfile.close();
            IZTRI;
            menu(firma);

            break;
        case 5 :
            cout<<"VAVEDI POKUPKA";
            EL
            myfile.open ("FILE5.txt", std::ios_base::app);
            cin>> promenliva;
            myfile<<promenliva<<" KUPENO"<<"\n";
            myfile.close();
            IZTRI;
            menu(firma);

            break;
        case 6 :
            cout<<"VAVEDI POKUPKA";
            EL
            myfile.open ("FILE6.txt", std::ios_base::app);
            cin>> promenliva;
            myfile<<promenliva<<" KUPENO"<<"\n";
            myfile.close();
            IZTRI;
            menu(firma);

            break;
        case 7 :
            cout<<"VAVEDI POKUPKA";
            EL
            myfile.open ("FILE7.txt", std::ios_base::app);
            cin>> promenliva;
            myfile<<promenliva<<" KUPENO"<<"\n";
            myfile.close();
            IZTRI;
            menu(firma);

            break;
        case 8 :
            cout<<"VAVEDI POKUPKA";
            EL
            myfile.open ("FILE8.txt", std::ios_base::app);
            cin>> promenliva;
            myfile<<promenliva<<" KUPENO"<<"\n";
            myfile.close();
            IZTRI;
            menu(firma);
        }



        break;       // and exits the switch
    case 3 :
        cout<<"3.DANNI ZA OFIS";
        EL
        cout<<"IZBERI OFIS";
        EL  cin>>indeks;

















        switch(indeks)
        {
        case 0 :

            myreadfile.open("FILE0.txt");
            if (myreadfile.is_open())
            {
                while (!myreadfile.eof())
                {
                    myreadfile>>bufer_za_izvejdane;
                    cout<<bufer_za_izvejdane<<" ";
                }
            }
            myreadfile.close();
            break;


        case 1 :
            myreadfile.open("FILE1.txt");
            if (myreadfile.is_open())
            {
                while (!myreadfile.eof())
                {
                    myreadfile>>bufer_za_izvejdane;
                    cout<<bufer_za_izvejdane<<" ";
                }
            }
            myreadfile.close();
            break;
        case 2 :
            myreadfile.open("FILE2.txt");
            if (myreadfile.is_open())
            {
                while (!myreadfile.eof())
                {
                    myreadfile>>bufer_za_izvejdane;
                    cout<<bufer_za_izvejdane<<" ";
                }
            }
            myreadfile.close();
            break;
        case 3 :
            myreadfile.open("FILE3.txt");
            if (myreadfile.is_open())
            {
                while (!myreadfile.eof())
                {
                    myreadfile>>bufer_za_izvejdane;
                    cout<<bufer_za_izvejdane<<" ";
                }
            }
            myreadfile.close();
            break;
        case 4 :
            myreadfile.open("FILE4.txt");
            if (myreadfile.is_open())
            {
                while (!myreadfile.eof())
                {
                    myreadfile>>bufer_za_izvejdane;
                    cout<<bufer_za_izvejdane<<" ";
                }
            }
            myreadfile.close();
            break;
        case 5 :
            myreadfile.open("FILE5.txt");
            if (myreadfile.is_open())
            {
                while (!myreadfile.eof())
                {
                    myreadfile>>bufer_za_izvejdane;
                    cout<<bufer_za_izvejdane<<" ";
                }
            }
            myreadfile.close();
            break;
        case 6 :
            myreadfile.open("FILE6.txt");
            if (myreadfile.is_open())
            {
                while (!myreadfile.eof())
                {
                    myreadfile>>bufer_za_izvejdane;
                    cout<<bufer_za_izvejdane<<" ";
                }
            }
            myreadfile.close();
            break;
        case 7 :
            myreadfile.open("FILE7.txt");
            if (myreadfile.is_open())
            {
                while (!myreadfile.eof())
                {
                    myreadfile>>bufer_za_izvejdane;
                    cout<<bufer_za_izvejdane<<" ";
                }
            }
            myreadfile.close();
            break;
        case 8 :
            myreadfile.open("FILE8.txt");
            if (myreadfile.is_open())
            {
                while (!myreadfile.eof())
                {
                    myreadfile>>bufer_za_izvejdane;
                    cout<<bufer_za_izvejdane<<" ";
                }
            }
            myreadfile.close();
        }


























        Sleep(10000);
        IZTRI;
        menu(firma);
        break;       // and exits the switch
    case 4 :
        cout<<"4.DANNI ZA CQLATA FIRMA";
        EL
        cout<<firma.ofis[0].sum+firma.ofis[1].sum+firma.ofis[2].sum+firma.ofis[3].sum+firma.ofis[4].sum+firma.ofis[5].sum+firma.ofis[6].sum+firma.ofis[7].sum+firma.ofis[8].sum;
        EL
        Sleep(10000);
        IZTRI;
        menu(firma);
        break;       // and exits the switch
    case 5 :
        cout<<"5.IZLEZ";
        EL
        IZTRI;

        break;
    default:
        cout<<"GET THE HELL OUT FROM MY CODE";
        EL
    }
}













