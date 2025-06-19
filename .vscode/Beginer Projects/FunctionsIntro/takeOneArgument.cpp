#include <iostream>
using namespace std;

// Function that take one argument and returns its double
int doubleNumber(int number)
{
    return number * 2;
}

int main()
{
    cout << "Enter an integer: ";
    int userInput;
    cin >> userInput;

    // Call the function with the user's input
    int result = doubleNumber(userInput);

    cout << "The double of " << userInput << " is " << result << "\n";

    cout << doubleNumber(5) << "\n"; // Example of calling the function with a hardcoded value

    return 0;
}

