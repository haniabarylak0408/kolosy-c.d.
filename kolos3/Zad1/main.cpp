#include <iostream>
#include <string>
#include <fstream>


using namespace std;

int main() {

    int liczby[3];
    liczby[0] = 2;
    liczby[1] = 3;
    liczby[2] = 4;

    ofstream plik;
    plik.open("liczby.txt", ios::app);
    for (int i = 0; i < 3; i++) {
        plik << liczby[i]<< "\n";
        liczby[i] = 0;
    }
    plik.close();

    ifstream plik1;
    plik1.open("liczby.txt");
    string line;
    int n = 0;
    while (getline(plik1,line))
    {
        liczby[n] = stoi(line);
        cout << liczby[n] << "\n";
        n++;
    }


return 0;
}
