#include <iostream>

using namespace std;

int main() {
  for (int i = 7; i >= 1; i--) {
    for (int j = 1; j <= 7 - i; j++) {
      cout << " ";
    }
    for (int k = 1; k <= i; k++) {
      cout << "#";
    }
    cout << endl;
  }
  return 0;
}