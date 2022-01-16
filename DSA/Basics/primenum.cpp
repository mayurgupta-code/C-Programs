#include "bits:stdc++.h"
using namespace std;

int main()
{
    int num, k = 0;
    cout << "Enter the Number to check: ";
    cin >> num;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "Number is not Prime" << endl;
            break;
        }
        else {
            k++;
        }
    }

    if (k == num-2){
        cout << "Number is Prime" << endl;
    }

    return 0;
}