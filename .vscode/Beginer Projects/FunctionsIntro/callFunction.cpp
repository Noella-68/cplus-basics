#include <iostream>
#include <cmath> // For mathematical functions
using namespace std;

int getValueFromUser()
{
    cout << "Enter a number: ";
    int x;
    cin >> x;
    return x;
}

int main()
{
    int value{getValueFromUser()};
    cout << "You entered: " << value << endl;
    cout << "The double of " << value << " is " << 2 * value << "\n";
    cout << "The tripple of " << value << " is " << 3 * value << "\n";
    cout << "The square of " << value << " is " << value * value << "\n";
    cout << "The cube of " << value << " is " << value * value * value << "\n";
    cout << "The square root of " << value << " is " << sqrt(value) << "\n";
    cout << "The logarithm of " << value << " is " << log(value) << "\n";
    cout << "The exponential of " << value << " is " << exp(value) << "\n";
    cout << "The sine of " << value << " is " << sin(value) << "\n";
    cout << "The cosine of " << value << " is " << cos(value) << "\n";
    cout << "The tangent of " << value << " is " << tan(value) << "\n";
    cout << "The absolute value of " << value << " is " << abs(value) << "\n";
    cout << "The minimum of " << value << " and 10 is " << min(value, 10) << "\n";
    cout << "The maximum of " << value << " and 10 is " << max(value, 10) << "\n";
    cout << "The remainder of " << value << " divided by 3 is " << value % 3 << "\n";
    cout << "The value of " << value << " raised to the power of 2 is " << pow(value, 2) << "\n";
    cout << "The value of " << value << " raised to the power of 3 is " << pow(value, 3) << "\n";
    cout << "The value of " << value << " raised to the power of 4 is " << pow(value, 4) << "\n";
    return 0;
}
