#include <iostream>
using namespace std;

void leap(int i){

    if (i % 4 == 0)
        cout << i << " is leap year" << endl;
    else
        cout << i << " is not leap year" << endl;

}

int main(){
    int i;    
    cout << "Please enter a year: ";
    cin >> i ;
    leap (i);
    return 0;
}




