#include <iostream>
using namespace std;

int main(){
    int num, i;
    cout << "Enter the Number: ";
    cin >> num;

    for (i = 2; i < num; i++){
        if (num%i == 0){
            cout << "Number is not Prime" << endl;
            break;
        }
    }
    if (i == num){
        cout << "Number is Prime" << endl;
    }


    return 0;
}