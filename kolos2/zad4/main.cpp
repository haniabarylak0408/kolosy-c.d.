#include <iostream>

using namespace std;

struct Dane{

string imie;
int wiek;
float waga;

};

int main()
{
    Dane Osoby[3];

    Osoby[0].imie = "Ola";
    Osoby[0].wiek = 18;
    Osoby[0].waga = 65.3;

    Osoby[1].imie = "Weronika";
    Osoby[1].wiek = 18;
    Osoby[1].waga = 61.3;

    Osoby[2].imie = "Natalia";
    Osoby[2].wiek = 19;
    Osoby[2].waga = 58.3;

    cout << Osoby[0].imie << ", " << Osoby[0].wiek << ", " << Osoby[0].waga <<endl;
    cout << Osoby[1].imie << ", " << Osoby[1].wiek << ", " << Osoby[1].waga <<endl;
    cout << Osoby[2].imie << ", " << Osoby[2].wiek << ", " << Osoby[2].waga <<endl;




    return 0;
}
