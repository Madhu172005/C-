#include <iostream>

using namespace std;

int main() {
    int number;

    // Prompt user for input
    cout << "Enter an integer: ";
    cin >> number;

    // Use conditional statement to check if the number is even or odd
    if (number % 2 == 0) {
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }

    return 0;
}
