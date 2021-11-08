#include <iostream>
using namespace std;

int main(){

    int num, i;
    cout << "Enter the Number till you want prime numbers: ";
    cin >> num;

    for (int a = 2; a <= num; a++){
        for (i = 2; i < a; i++){ //in this a is noted
            if (a%i == 0){ 
                //cout << "Number is not Prime" << endl;
                break;
            }
        }
        if (i == a){
            cout << a << " is Prime" << endl;
        }
    }

    return 0;
}