#include <iostream>
using namespace std;

int main() {

    cout << "\n\nWelcome to Angelo's largest of three program!\n\n";

    string userName;
    int num1, num2, num3, largest;

    cout << "\nPlease enter your name: ";
    cin >> userName;

    cout << "\n The username is: " << userName;

    cout << "\n Enter number one: ";
    cin >> num1;

    cout << "\n You entered: " << num1 << " for the first number.";

    cout << "\n Enter number two: ";
    cin >> num2;

    cout << "\n You entered: " << num2 << " for the second number.";

    cout << "\n Enter number three: ";
    cin >> num3;

    cout << "\n You entered: " << num3 << " for the third number.";

    cout << "\n You entered: " << num1 << ", " << num2 << ", " << num3;

    if (num1 > num2 && num1 > num3) {
        largest = num1;
    }
    else if (num2 > num1 && num2 > num3) {
        largest = num2;
    }
    else if (num3 > num1 && num3 > num2) {
        largest = num3;
    }

    cout << "\n The largest of " << num1 << " , " << num2 << " , " << num3 << " is: " << largest;

    return 0;
}