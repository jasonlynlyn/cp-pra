#include <iostream>
#include <limits.h>
#include <inttypes.h>
#include <stdint.h>
using namespace std;

int main(){
    /*
    int x = 0;
    int cars = 14;
    int debt = -1000;
    float cash = 2.32;
    double credit = 32.32;
    char a = 'a';
    char* sandwich = "ham"; //string of char
    bool does_she_like_me = true;
    auto do_i_have_pants_on = false;
    auto blank_check = 200.00;
    int over_9000 = INT_MAX; //max value of an integer

    cout << over_9000 << endl;
   */
    cout << sizeof(char) <<endl;//1
    cout << sizeof(int) <<endl;//4
    cout << sizeof(float) <<endl;//4
    cout << sizeof(bool) <<endl;//1
    cout << sizeof(double) <<endl;//8
    cout << sizeof(short int) << endl; //2
    cout << sizeof(long int) << endl; //8
    cout << sizeof(long long int) <<endl; //8

    signed int y = -1;
    unsigned int x = -1;

    cout << x << endl;//4294967295
    cout << y << endl; //-1
    cout << INT_MAX <<endl;
    cout << INT_MIN <<endl;
    cout << LONG_MIN <<endl;
    cout << LONG_MAX <<endl;
    cout << SHRT_MIN <<endl;
    cout << SHRT_MAX <<endl;
    cout << 0 <<endl;



    return 0;

}