/**
 * Date: 		16. Juni 2020
 * File-Name:	main.cpp
 * Version: 	1.0.000.002
 * Copyright:	©Jeremias Braun
 * Author: 		Jeremias Braun
 * E-Mail: 		jeremias.braun@lbs4.salzburg.at
 */

#include <iostream>
#include <sstream>

// Include the header files of my team partners.
#include "hfiles/addition.h"
#include "hfiles/division.h"
#include "hfiles/multiply.h"
#include "hfiles/subtraction.h"

// Use std as namespace
using namespace std;

int main() {
    // Declare two variables for the numbers from the user input
    double number1, number2;

    // Get the first number input of the user.
    cout << "Enter the first:" << endl;
    cin >> number1;

    // Get the second number input of the user.
    cout << "Enter the second:" << endl;
    cin >> number2;

    // KURZFORM, BESCHREIBUNG, Anwendung, Bauweise, Besonderheit | Zusammenfassung - Geschichte - Speicher
    // Declare the variables for the different results of the math operations
    double finishedAddition, finishedDivision, finishedMultiply, finishedSubtraction;

    // Initialize the variable with the result of the addition function
    finishedAddition = addition(number1, number2);

    // Initialize the variable with the result of the division function
    finishedDivision = division(number1, number2);

    // Initialize the variable with the result of the multiply function
    finishedMultiply = multiply(number1, number2);

    // Initialize the variable with the subtraction function
    finishedSubtraction = subtraction(number1, number2);

    cout << "Calculating the results..." << endl;

    // Print out the different results in a nice and ordered format.
    cout << number1 << " + " << number2 << " is " << finishedAddition << endl;
    cout << number1 << " / " << number2 << " is " << finishedDivision << endl;
    cout << number1 << " * " << number2 << " is " << finishedMultiply << endl;
    cout << number1 << " - " << number2 << " is " << finishedSubtraction << endl;

    return 0;
}