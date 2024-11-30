#include <iostream>

using namespace std;

int main() {
  int rows = 8; // Number of rows in the pyramid

  for (int i = 1; i <= rows; i++) {
    // Print '#' characters for each row
    for (int j = 1; j <= i; j++) {
      cout << "#";
    }
    // Move to the next line
    cout << endl;
  }

  return 0;
}