#include <iostream>
using namespace std;


int main(){
    char sample[] = "Mayur";
    cout << sample << " - My Name" << "\n";

    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "\nYour age is: " << age << "\n";

    cerr << "An error occured"<<endl;
    clog << "error from clog"<<endl;

    return 0;
}


