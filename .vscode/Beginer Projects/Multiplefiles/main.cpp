//Main function gets the inputs and output the sum of two numbers
#include <iostream>
#include <cmath> // For mathematical functions like pow, sqrt, abs
using namespace std;
int getValueFromUser(); // Function prototype

int main()
{
    // Get a value from the user
    int x{getValueFromUser()};
    int y{getValueFromUser()};
    std::cout << x  << "+" << y << "is" << x+y << "\n";
    std::cout << x  << "-" << y << "is" << x-y << "\n";
    std::cout << x  << "*" << y << "is" << x*y << "\n";
    std::cout << x  << "/" << y << "is" << x/y << "\n";
    std::cout << x  << "%" << y << "is" << x%y << "\n";
    std::cout << x  << "^" << y << "is" << pow(x, y) << "\n";
    std::cout << "The square root of " << x << " is " << sqrt(x) << "\n";
    std::cout << "The square root of " << y << " is " << sqrt(y) << "\n";
    std::cout << "The absolute value of " << x << " is " << abs (x) << "\n";
    std::cout << "The absolute value of " << y << " is " << abs (y) << "\n";

    return 0;
}
