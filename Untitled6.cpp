#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double number, squareRoot;

    cout << "Enter a non-negative number: ";
    cin >> number;

    if (number >= 0) {
        squareRoot = sqrt(number);
        cout << "Square root of " << number << " is " << squareRoot << endl;
    } else {
        cout << "Error: Negative number. Square root is not defined for negative numbers." << endl;
    }

    return 0;
}
