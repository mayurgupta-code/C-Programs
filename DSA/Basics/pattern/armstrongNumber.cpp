#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "enter number: ";
    cin >> n;
    int a = n;
    int sum = 0;

    while (a > 0){
        int lastdigit = a%10;
        sum = sum + pow(lastdigit,3);
        a = a/10;
    }

    if (sum == n){
        cout << "Number is Armstrong" << endl;
    }
    else{
        cout << "Number is not Armstrong" << endl;
    }

    return 0;
}