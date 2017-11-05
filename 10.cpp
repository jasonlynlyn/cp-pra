//modulus
#include <iostream>
using namespace std;

int main()
{
    int num1 = 20, num2 = 3;
    // cout << num1 % num2 << endl;

    num1 += num2;//store in num1
    cout << num1 << endl; //23

    num1 -= num2;
    cout << num1 << endl; //20

    num1 %= num2;
    cout << num1 << endl;//2


    return 0;
}