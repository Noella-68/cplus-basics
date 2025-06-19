#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    double sum;
    double sub;
    double mul;
    double div;

    cout << "Enter first number: ";
    cin >> num1;
    cout << num1 << '\n';
    cout << "Enter second number";
    cin >> num2;
    cout << num2 << '\n';
    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << '\n';
    cout << "The difference of " << num1 << " and " << num2 << " is " << sub << '\n';
    cout << "The product of " << num1 << " and " << num2 << " is " << mul << '\n';
    cout << "The division of " << num1 << " and " << num2 << " is " << div << '\n';
    cout << "Thank you for using the calculator!" << '\n';
    return 0;
}
