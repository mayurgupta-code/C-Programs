#include "bits:stdc++.h"
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b){
        if (a > c){
            cout << "a is maximum of three" << endl;
        }
        else{
            cout << "c is maximum of three" << endl;
        }
    }
    else if (b > a){ // that means a is greater than b
        if (b > c){
            cout << "b is maximum of three" << endl;
        }
        else{
            cout << "c is maximum of three" << endl;
        }
    }

    return 0;
}

