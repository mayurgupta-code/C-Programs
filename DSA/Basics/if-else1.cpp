#include <iostream>
using namespace std;

int main()
{
    int savings;
    cout << "Enter savings: ";
    cin >> savings;

    if (savings > 5000)
    {
        if (savings < 8000)
        {
            cout << "Neha on RoadTrip\n"
                 << endl;
        }
        else
        {
            cout << "Neha on Shopping\n"
                 << endl;
        }
    }
    else if (savings > 2000)
    {
        cout << "Rashmi\n";
    }
    else
    {
        cout << "Friends\n";
    }

    return 0;
}