//0-1 pattern

#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter N: ";
    cin >> n;

    for (int i = 1; i <= n; i++){ // 1 to n
        for (int j = 1; j <= i; j++){ //columns from 1 to row number
            if((i+j)%2 == 0){
                cout << 1 << " ";
            }
            else{
                cout << 0 << " ";
            }
            
        }
        cout << endl;
    }

    return 0;
}