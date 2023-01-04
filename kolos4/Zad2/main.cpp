#include <iostream>
#include <string>

using namespace std;

void odwroc(string str){
   for (int i = str.length() - 1; i >= 0; i--) {
    cout << str[i];
  }
  cout << endl;
}

int main() {
  string x = "Krokodyl";
  odwroc(x);
  return 0;
}
