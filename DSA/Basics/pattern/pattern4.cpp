//half pyramid after 180 degree rotation

#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter N: ";
    cin >> n;

    // //for rows
    // for (int i = 1; i <= n; i++){
    //     //for printing spaces
    //     for (int j = n-i; j > 0; j--){
    //         cout << " ";
    //     }
    //     //for printing stars
    //     for (int k = 1; k <= i; k++){
    //         cout << "*";
    //     }
    //     cout << endl; 
    // }

    // one more way using conditinal
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (j <= (n-i)){
                cout << "  ";
            }
            else{
                cout << "* ";
            }
        }
        cout << endl;
    }

    return 0;
}