#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int rows = 7;
    int cols = 7;
    char char1 ='#';
    char char2 ='*';
    
    for (int i = 0; i < rows; ++ i){
        for (int j = 0; j < cols; ++ j) { 
            if( ( i + j )%2 == 0) {
                cout << char1;
            }
            else {
                cout << char2;
            }
        }
        cout << endl;
    }
    return 0;
}