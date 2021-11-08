#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n;
    cout << "enter number: ";
    cin >> n;
    int flag = 0;

    for (int i = 2; i <= sqrt(n); i++){ //can do with sqrt and n/2
        //cout << i << " ";
        if (n%i == 0){
            cout << "Number is non Prime" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0){
        cout << "Number is Prime" << endl;
    }

    return 0;
}