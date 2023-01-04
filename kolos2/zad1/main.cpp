#include <iostream>

using namespace std;


class KlasaX{

public:
    int x;
    KlasaX(int arg_x){

    x=arg_x;
    };

};

class KlasaY{

public:
    int y;
    KlasaY(int arg_y){

    y=arg_y;
    };

    int operator+(KlasaX objx);

};

int KlasaY::operator+(KlasaX objx){

return y + objx.x;
}


int main(){


  KlasaY objy(5);
  KlasaX objx(7);

  cout << objy + objx <<endl;




    return 0;
}
