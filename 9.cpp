//increment ++  decrement --
// prefix ++a, --a
//postfix a++, a--
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    
    //11
    ++a; 
    cout << a << endl; 
    
    //11, 12
    cout << a++ << endl;
    cout << a << endl; 

    //11
    --a;
    cout << a << endl;

    //11, 10
    cout << a-- << endl;
    cout << a << endl;


    return 0;
}