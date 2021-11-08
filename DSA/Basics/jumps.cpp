//Continue :- Skip to the next iteration of the loop
//Break :- Terminate the loop

#include <iostream>
using namespace std;

int main(){
    // can only go out in odd days
    int pocketMoney = 3000;

    for (int date = 1; date <= 30; date++){
        if (date % 2 == 0){
            continue;
        }
        if (pocketMoney < 300){
            break;
        }
        cout << date << " Go out Today" << endl;
        pocketMoney = pocketMoney - 300;
    }

    return 0;
}