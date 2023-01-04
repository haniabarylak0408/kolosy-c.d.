#include <iostream>

using namespace std;

int main() {

    string wprowadz;

    while(true){
        cout << "Wpisz stop: ";
        cin >> wprowadz;
        if(wprowadz == "stop")
            break;
    }

    return 0;
}
