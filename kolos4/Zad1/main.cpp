#include <iostream>
#include <stdexcept>

using namespace std;

const int MAX_SIZE = 50;

int main()
{
    double array[MAX_SIZE];

    try
    {
        int index;
        cout << "Podaj indeks elementu tablicy, ktory chcesz odczytac ";
        cin >> index;

        if (index < 0 || index >= MAX_SIZE)
            throw out_of_range("Przekroczony zakres tablicy");
        cout << "Element o indeksie " << index << " to " << array[index] << endl;
    }
    catch (out_of_range& e){
        cout << "Blad: " << e.what() << endl;
    }

    return 0;
}
