#include <iostream>
#include <string>

using namespace std;

int main() {
    int max_chars = 12; // Maximum number of characters on the widest line

    // Upper half of the pattern
    for (int i = 1; i <= max_chars; ++i) {
        if (i < max_chars) {
            string line(i, '^');
            line += "*";
            cout << line << endl;
        } else {
            string line(i, '#');
            line += string(i, '^');
            line += "*";
            cout << line << endl;
        }
    }

    // Lower half of the pattern (mirrored)
    for (int i = max_chars -1; i >= 1; --i) {
        string line(i, '^');
        line += "*";
        cout << line << endl;
    }

    return 0;
}
