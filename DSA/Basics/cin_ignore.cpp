#include <iostream>
#include <ios> //used to get stream size
#include <limits> //used to get numeric limits
using namespace std;

int main(){

    int x;
    char str[80];

    cout << "Enter a number and string: " << endl;
    cin >> x;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    //using this we can enter the values precedly after an enter
    cin.getline(str, 80);
    cout << "You have entered: " << endl;
    cout << x << endl;
    cout << str << endl;

    return 0;
}