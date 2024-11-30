#include <iostream>

using namespace std;

int main() {
  int max_hashes = 10; // Maximum number of '#' characters on a line

  for (int i = 1; i <= max_hashes; ++i) {
    for (int j = 0; j < i; ++j) {
      cout << "#";
    }
    cout << "∧" << endl; // Print '∧' at the end of each line
  }

  return 0;
}
