//Butterfly pattern

#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter N: ";
    cin >> n;

    //for upper part
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= 2*n; j++){
            if (j <= i || j > (2*n - i)){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;   
    }

    //for lower part
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= 2*n; j++){
            if (j <= n-i+1 || j > n+i-1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }    
    
    
    return 0;
}