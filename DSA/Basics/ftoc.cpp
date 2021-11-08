#include <iostream>
using namespace std;

int main(){
    
    float fahrenheit, celcius = 0;
    cout<< "Enter Temperature in Fahrenheit: ";
    cin >> fahrenheit;
    celcius = (5.0/9) * (fahrenheit - 32);
    cout << "Temp in celcius is " << celcius << "\n";
    
    return 0;
}