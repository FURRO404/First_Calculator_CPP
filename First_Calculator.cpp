/*First_Calculator.cpp by FURRO404*/
#include <iostream>
using namespace std;


int main()
{
    int x;
    int y;

    cout << "First number: ";
    cin >> x;

    cout << "\nSecond number: ";
    cin >> y;


    cout << "\n\nThe sum of " << x << " and " << y << " is " << x + y;

    cout << "\nThe difference of " << x << " minus " << y << " is " << x - y;

    cout << "\nThe product of " << x << " times " << y << " is " << x * y;

    cout << "\nThe quotient of " << x << " divided by " << y << " is " << x / y;

    if (x % y != 0) {
        cout << " with remainder "<< x % y;
    } else {
        cout << " and no remainder";
    }

    return 0;
}
/*First_Calculator.cpp by FURRO404*/
