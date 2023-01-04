#include <iostream>

using namespace std;

int dodawanie(int a, int b){

int wynik = a+b;
if (wynik>100)
    throw runtime_error ("Wynik dodawania jest wiekszy od 100!");
return wynik;

}

int main()
{
    int a = 15;
    int b = 110;

    try{
    cout << dodawanie(a,b) <<endl;
    }

    catch(runtime_error &e){
    cout << e.what() <<endl;
    }

    return 0;
}

