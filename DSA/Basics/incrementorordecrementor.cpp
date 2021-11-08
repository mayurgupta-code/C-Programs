#include <iostream>
using namespace std;

int main(){
    
    // int a = 10, b;
    
    // b = ++a; //increment a instantly Pre Incrementor
    // b = a++; //current value of a is Post Incrementor
    // cout << a << " " << b << endl;

    // int i = 1;
    //     //1     /3
    // i = i++ + ++i;
    // cout << i << endl;

    // int i = 1, j = 2, k;
    // //  1   2   1 2   2 3   3 3   4  4
    // k = i + j + i++ + j++ + ++i + ++j;
    // // 1+2+1+2+3+4 = 13
    // //3 4 13
    // cout << i << " " << j << " " << k << endl;

    // int i = 0;
    // //  0 1   0 0   1 1   1  0
    // i = i++ - --i + ++i - i--;
    // // 0 - 0 + 1 - 1 = 0
    // cout << i << endl;

    // int i = 0;
    // //  0       0     1   1         <-- value used 
    // i = i++ - --i + ++i - i--;
    // //    1   0     1       0       <-- current value 
    // cout << i << endl;

    // int i = 1, j = 2, k = 3, m;
    // //  1     2     3     <-- value used
    // m = i-- - j-- - k--;
    // //    0     1      2   <-- current value
    // // 1 - 2 - 3 = -4  <-- answer
    // cout << i << " " << j << " " << k << " " << m << " " << endl;

    // int i = 10, j = 20, k;
    // //  10    9       19    20    9   20      10  19  <-- value used
    // k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
    // //    9     10  19    20    9       19  10      20  <-- current value
    // // 10-9+19-20+9-20+10-19   <-- answer
    // cout << i << " " << j << " " << k << endl;

    //Conditional or Ternary operator
    //condition?X:Y
    //variable = Expression1 ? Expression2 : Expression3
    // if(Expression1){
    //     variable = Expression2;
    // }
    // else{
    //     variable = Expression3;
    // }

    // Here, Expression1 is the condition to be evaluated. 
    // If the condition(Expression1) is True 
    // then Expression2 will be executed and the result will be returned. 
    // Otherwise, if the condition(Expression1) is false 
    // then Expression3 will be executed and the result will be returned.

    //Example: find the greater number
    // int a = 5, b = 10, max;
    // max = (a > b) ? a : b;
    // cout << max << endl;

    // Cast operator :- converts one data type into another
    // char ch = 'a';
    // cout << int(ch) << endl;

    // Comma operator :- causes a squence of operations to be performed
    // int a = 5;
    // a = 2, 3, 4;
    // cout << a << endl;

    // Reference operator :- Returns the address of the variable
    // int a;
    // a = 42;
    // int *b = &a;
    // //pointer is a variable that stores the address of other variable
    // cout << &a << " " << b << endl;

    cout << "hello" << '\n';

    return 0;
}