#include <iostream>
using namespace std;

// Function to get a value from the user
int getValueFromUser()
{
    cout << "Enter a number: ";
    int x;
    cin >> x;
    return x;
}

void displayResultsReceived(int value)
{
    cout << "You entered: " << value << endl;
    cout << "The double of " << value << " is " << 2 * value << "\n";
    cout << "The tripple of " << value << " is " << 3 * value << "\n";
    cout << "The square of " << value << " is " << value * value << "\n";
    cout << "The cube of " << value << " is " << value * value * value << "\n";
}

int main()
{
    // Get a value from the user
    int numbers (getValueFromUser());
    displayResultsReceived(numbers);

    return 0;
}
