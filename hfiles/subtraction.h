/**
 * Date: 		16. Juni 2020
 * File-Name:	subtraction.h
 * Version: 	1.0.000.002
 * Copyright:	©Martin Niederkofler
 * Author: 		Martin Niederkofler
 * E-Mail: 		martin.niederkofler@lbs4.salzburg.at
 */

#ifndef TEAM_PROJECT_SUBTRACTION_H
#define TEAM_PROJECT_SUBTRACTION_H

#include <iostream>
#include <cmath>

using namespace std;

/**
 * Diese Funktion gitbt die DIFFERENZ einer SUBTRAKTION aus zwei gegebenen Zahlen, dem MINUENDen und dem SUBTRAHENDen, zurück.
 * Die Funktion verwendet die Funktionen isunordered, isinf, isless, isgreaterequal, islessequal und fdim aus dem C-nativen
 * Header <cmath>, die die übergebenen Parameter exakt, das heißt unter Berücksichtigung der Besonderheiten mit der Berechnung
 * von Fließkomma-Zahlen, berechnet und zurück gibt.
 *
 * Fehlerbehandlung wäre, wenn notwendig mit Hilfe von math_errhandling zu bewerkstelligen. Außerdem gibt die Funktion FP_NAN zurück,
 * wenn ein unerwarteter Fall eintritt.
 *
 * @param n1 double Minuend der Subtraktion als Fließ-Komma-Zahl, aus der die Differenz gebildet werden soll. (die Zahl links).
 * @param n2 double Subtrahend der Subtraktion als Fließ-Komma-Zahl, aus der die Differenz gebildet werden soll. (die Zahl rechts).
 * @return double Die Differenz der beiden Zahlen; Bei einem Overflow wird der Error +HUGE_VAL, da es sich um double-Parameter
 *                  handelt, zurückgegeben. Bei einem Underflow wird der korrekte Parameter nach Rundung zurückgegeben.
 *                  Sollte einer der beiden Parameter nach NaN auflösen wird FP_NAN zurückgegeben.
 *                  Sollte einer der beiden Parameter nach INFINITY auflösen wird FP_INFINITE zurückgegeben.
 */
double subtraction(double n1, double n2) {                //Definition und Implementation der Funktion difference

    /* Ausweichen auf Funktionen die von Personen mehr Verständnis über Fließkomma-Zahlen haben als ich.
     * Achtung: fdim gibt bei einem größerem Minuenden als Subtrahenden immer 0 zurück, und nicht, wie möglicherweise
     *          erwartet, ein/en negativen/s Wert/Ergebnis.
     */
    if (isunordered(n1,
                    n2)) { return FP_NAN; }                  /* isunordered prüft, ob einer der gegebenen Parameter NaN ist. */
    else if (isinf(
            n1)) { return FP_INFINITE; }             /* isinf prüft, ob der gegebene Parameter infinity, oder nicht darstellbar, ist. */
    else if (isinf(n2)) { return FP_INFINITE; }
    else if (isless(n1, n2)) {
        return fdim(n2, n1) * (-1);
    }     /* isless prüft, ob der zweite Parameter geringer ist, als der Erste. */
    else if (isless(n2, n1)) { return fdim(n1, n2); }
    else if (isgreaterequal(n1, n2) && \
             islessequal(n1,
                         n2)) { return 0; }                       /* Diese Prüfung erlaubt das feststellen, ob die Parameter gleich groß sind. */

    return FP_NAN;
}

#endif //TEAM_PROJECT_SUBTRACTION_H
