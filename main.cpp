#include <iostream>
#include <sstream>

#include "hfiles/addition.h"
#include "hfiles/division.h"
#include "hfiles/multiply.h"
#include "hfiles/subtraction.h"

using namespace std;

int main() {
    double number1, number2;

    cout << "Enter the first:" << endl;
    cin >> number1;

    cout << "Enter the second:" << endl;
    cin >> number2;

    // Do the next stuff
    double finishedAddition;
    double finishedDivision;
    double finishedMultiply;
    double finishedSubtraction;

    finishedAddition = addition(number1, number2);
    finishedDivision = division(number1, number2);
    finishedMultiply = multiply(number1, number2);
    finishedSubtraction = subtraction(number1, number2);

    cout << "Calculating the results..." << endl;

    cout << number1 << " + " << number2 << " is " << finishedAddition << endl;
    cout << number1 << " / " << number2 << " is " << finishedDivision << endl;
    cout << number1 << " * " << number2 << " is " << finishedMultiply << endl;
    cout << number1 << " - " << number2 << " is " << finishedSubtraction << endl;

    return 0;
}