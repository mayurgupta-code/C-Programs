// Hollow rectangle pattern
#include <iostream>
using namespace std;

int main(){

    int rows, cols;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= cols; j++){
            if (i == 1 || i == rows){
                cout << "*";
                //to looks better use "* " 
            }
            else{
                if (j == 1 || j == cols){
                    cout << "*";
                }
                else{
                    //to looks better use "  "
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}