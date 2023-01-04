#include<iostream>

using namespace std;

class Klasa_1 {
public:
    int x = 1;
    virtual int getX() { return x; };

};

class Klasa_2 : private Klasa_1 {
public:
    int getX() { return x; };
};

class Klasa_3 : private Klasa_2 {
public:
    //int getX() { return x; }; tu ju¿ nie widzi
};

int main() {

    Klasa_1 k1;
    Klasa_2 k2;
    Klasa_3 k3;


    //cout<< k2.x << "\n"; nie mo¿na
    cout<< k2.getX() << "\n";
    //dla k3.getX() nie zadzia³a


    return 0;
}
