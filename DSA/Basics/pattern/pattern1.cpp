//Rectangle pattern
#include <iostream>
using namespace std;

int main(){

    int rows, columns;
    cout << "Enter rows and columns: ";
    cin >> rows >> columns;

    for (int i = 1; i <= rows; i++){ // for increment of rows
        for (int j = 1; j <= columns; j++){ // for increment of columns
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}