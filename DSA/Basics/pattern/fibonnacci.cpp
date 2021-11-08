#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "enter number of terms: ";
    cin >> n;
    int a = 0, b = 1;

    if (n == 1){
        cout << a << endl;
    }
    else if (n == 2){
        cout << a << " " << b << endl;
    }
    else{
        cout << a << " " << b << " ";
        int curr_t; //current term
        for (int i = 3; i <= n; i++){ //starting from 3rd term
            curr_t = a + b;
            cout << curr_t << " ";
            a = b;
            b = curr_t;

        }
    }

    return 0;
}