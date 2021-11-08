// Number Pattern

#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter N: ";
    cin >> n;

    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= n; j++){
    //         if (j <= n-i){
    //             cout << " ";
    //         }
    //         else{
    //             cout << j+i-n << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // one more logic is of three loops
    for (int i = 1; i <= n; i++){ //for rows
        for (int j = 1; j <= n-i; j++){ //for spaces
            cout << " ";
        }
        for (int k = 1; k <= i; k++){ //for numbers
            cout << k << " ";
        }
        cout << endl;
    }

    return 0;
}