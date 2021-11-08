//zig-zag pattern

#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter N: ";
    cin >> n;

    //if no pattern is understandable 
    //then just write the index of that points in the matrix
    //and start making some pattern from them
    for (int i = 1; i <= 3; i++){
        for (int j = 1; j <= n; j++){
            if ((i+j)%4 == 0){
                cout << "* ";
            }
            else if (i == 2 && j%4 == 0){
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