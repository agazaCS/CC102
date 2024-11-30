#include <iostream>

using namespace std;

int main() {
  int rows = 15;  // Adjust as needed to match the image's rows
  int cols = 20; // Adjust as needed to match the image's columns

  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      cout << "#";
    }
    cout << endl; // Newline after each row
  }

  return 0;
}