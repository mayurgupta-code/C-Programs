//Star Pattern

#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter N: ";
    cin >> n;

    for (int i = 1; i <= n; i++){ //for rows
        for (int j = 1; j <= n-i; j++){ //for spaces
            cout << "  ";
        }
        for (int k = 1; k <= 2*i-1; k++){ //for stars
            cout << "* ";
        }
        cout << endl;
    }

    // for (int i = 1; i <= n; i++){ //for rows
    //     for (int j = 0; j < i-1; j++){ //for spaces
    //         cout << "  ";
    //     }
    //     for (int k = 2*(n-i)+1; k > 0; k--){ //for stars
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    //this is much better option in reverse case
    //like start rows from n to 1 and copy the whole code as it is
    for (int i = n; i >= 1; i--){ //for rows in decreasing order from n to 1
        for (int j = 1; j <= n-i; j++){
            cout << "  ";
        }
        for (int k = 1; k <= 2*i-1; k++){
            cout << "* ";
        }
        cout << endl;
    }


    return 0;
}