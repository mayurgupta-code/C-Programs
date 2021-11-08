// Inverted half pyramid
#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter N: ";
    cin >> n;

    for (int i = n; i >= 1; i--){
        for (int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }

    // for (int j = n; j >= 1; j--){
    //     cout << j << endl;
    // }

    return 0;
}