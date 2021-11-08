#include <iostream>
using namespace std;

int main(){
    
    float a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    char op;
    cout << "Input operator: ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a+b << endl;
        break;
    case '-':
        cout << a-b << endl;
        break;
    case '*':
        cout << a*b << endl;
        break;
    case '/':
        cout << a/b << endl;
        break;            
    default:
        cout << "Enter Valid Operator" << endl;
        break;
    }

    return 0;
}