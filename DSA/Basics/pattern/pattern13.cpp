//Pallindromic Pattern

#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter N: ";
    cin >> n;
    int a, b;

    for (int i = 1; i <= n; i++){ //for rows
        a = 0;
        b = 2;
        for (int j = 1; j <= n-i; j++){ // for spaces
            cout << "  ";
        }
        for (int k = 1; k <= 2*i-1; k++){ // for decreasing and increasing ones
            if (k <= i){
                cout << i-a << " ";
                a++; 
            }
            else{
                cout << b << " ";
                b++;
            }
        }
        cout << endl;
    }

    return 0;
}