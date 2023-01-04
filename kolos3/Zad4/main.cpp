#include<iostream>

using namespace std;

void Limit(int tabSize, int i) {
    if(i > tabSize){
        string w = "Out of index";
        throw w;
    }
}

int main() {

    double tab[10];
    try {
        for(int i = 0; i < 12; i++){
            Limit(sizeof(tab)/sizeof(double), i);
        }
    }
    catch (string w) {
        cout<< "Blad: " << w << "\n";
    }

    return 0;
}
