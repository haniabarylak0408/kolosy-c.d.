#include <iostream>

using namespace std;

class Konstrukcje {
    int x;
    string nazwa;
public:
    Konstrukcje() = default;
    Konstrukcje(int _x) { x = _x; };
    Konstrukcje(string _nazwa) { nazwa = _nazwa; };
};

int main() {

    Konstrukcje k1;
    Konstrukcje k2(3);
    Konstrukcje k3("test");
    return 0;
}
