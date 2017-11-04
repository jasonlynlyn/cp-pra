//ci: read from keyboard
#include <iostream>
using namespace std;

int main()
{
    //declare variable
    int age;
    float average;
    
    // cout << "please enter a number: " << endl;
    cout << "Enter your age and average: " << endl;
    //input
    cin >> age >> average; // stored in age and average

    cout << "the age is " << age << endl;
    cout << "the average is " << average << endl;
    cout << "the age is " << age << " the average is " << average << endl;
    
    return 0;
}