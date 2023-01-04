#include <iostream>

using namespace std;

class Klasa{

private:
    int x, y;

public:
    //1
    Klasa(){
    x=0;
    y=0;

    };

    //2
    Klasa(int X, int Y){

    x=X;
    y=Y;
    }

    //3
    Klasa(const Klasa &a){

    x=a.x;
    y=a.y;
    }

    int getx(){
    return x;
    }

    int gety(){
    return y;
    }


};

int main()
{
    //1
    Klasa obj1;
    cout << obj1.getx() << " " << obj1.gety() <<endl;

    //2
    Klasa obj2(2,4);
    cout << obj2.getx() << " " << obj2.gety() <<endl;

    //3
    Klasa obj3(obj2);
    cout << obj3.getx() << " " << obj3.gety() <<endl;

    return 0;
}
