#include <iostream>

using namespace std;

int main() {
  int rows = 5;   // Number of rows in the grid
  int cols = 12;  // Number of columns in the grid

  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      cout << "∧"; // Print the character '∧'
    }
    cout << endl; // Move to the next line after each row
  }

  return 0;
}