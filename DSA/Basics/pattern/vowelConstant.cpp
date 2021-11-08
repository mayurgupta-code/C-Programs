//Write a program to find whether a given character is a vowel or a consonant.

#include <iostream>
using namespace std;

int main(){

    char ch;
    cout << "Enter character: ";
    cin >> ch;

    if (ch == 'a' ||  ch == 'e' ||  ch == 'i' ||  ch == 'o' ||  ch == 'u'){
        cout << "Its vowel" << endl;
    }
    else{
        cout << "Its consonant" << endl; 
    }

    return 0;
}

