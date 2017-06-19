///////////////////////////////////////////////////////////////////////////////
//
// File: rational.h
//
// Ingenieurorientierte Programmierung
// Dr. Alexander Kling
//
// Carsten Bevermann
// Christoph Geitner
// Jens Reimer
// Marc Töpker
//
///////////////////////////////////////////////////////////////////////////////

#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class rational
{
    // Integer fuer Zaehler und Nenner
    int z, n;

    // Konstante fuer die "Seriennummer"
    const int serial;

    // Private Funktion zum Kuerzen des Bruchs
    void kuerze();

    // Private Funktion zum Finden des groessten gemeinsamen Teilers
    int ggt() const;

public:
    // Zaehlvariable
    static int counter;

    // Default-Konstruktor
    rational();

    // Konstruktor zur Erstellung eines Bruchs
    //
    // Parameter 1: Zaehler
    // Parameter 2: Nenner
    rational(int, int);

    // Gibt den Zaehler zurueck
    int getZaehler() const;

    // Gibt den Nenner zurueck
    int getNenner() const;

    // Gibt die "Seriennummer" zurueck
    int getSerial() const;

    // Setzt den Zaehler
    //
    // Parameter 1: gewuenschter Zaehler
    void setZaehler(int);

    // Setzt den Nenner
    //
    // Parameter 1: gewuenschter Nenner
    void setNenner(int);

    // Aendert das Vorzeichen des Zaehlers, falls der Nenner negativ ist
    void changeSign();

    // Konvertiert den Bruch zu einem double-Wert
    double toDouble() const;

    // Konvertiert den Bruch zu einem string
    std::string toString() const;

    // Ueberladungsfunktionen fuer die vier Grundrechenoperatoren
    //
    // Parameter 1: Zu verrechnender Bruch
    rational operator+ (rational) const;
    rational operator- (rational) const;
    rational operator* (rational) const;
    rational operator/ (rational) const;

    // Ueberladungsfunktionen fuer die vier Vergleichsoperatoren
    //
    // Parameter 1: Zu vergleichender Bruch
    bool operator> (rational) const;
    bool operator< (rational) const;
    bool operator== (rational) const;
    bool operator!= (rational) const;

    // Ueberladungsfunktion fuer den Gleichheitsoperator
    //
    // Paramter 1: Zuzuweisender Bruch
    void operator= (rational);

    // Ueberladungsfunktion fuer den Ausgabeoperator
    friend std::ostream& operator<< (std::ostream& os, const rational& ratBruch);

    // Exceptionhandling
    class ZeroDenominatorException
    {
        std::string msg = "Nenner ist NULL!";

    public:
        void printMsg();
    };
};

#endif // RATIONAL_H

/////////////////// End of File <rational.h> //////////////////////////////////
