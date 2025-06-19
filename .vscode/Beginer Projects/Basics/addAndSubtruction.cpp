#include <iostream>
using namespace std;
int main()
{
    cout << "Enter first number: ";
    int a;
    cin >> a;
    cout << "Enter second number: ";
    int b;
    cin >> b;

    int x = a + b;
    int y = a - b;

    cout << "The sum of " << a  << " and " << b << " is " << a + b << "\n";
    cout << "The difference of " << a  << " and " << b << " is " << a - b << "\n"; 

    cout << a << " + " << b << " = " << x << ".\n"; ;  
    cout << a << " - " << b << " = " << y << ".\n"; ;

    return 0;
}   
