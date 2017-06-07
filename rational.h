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
// Marc T�pker
//
///////////////////////////////////////////////////////////////////////////////

#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class rational
{
    int z, n;
    const int serial;
    void kuerze();
    int ggt() const;

public:
    static int counter;
    rational();
    rational(int, int);
    int getZaehler() const;
    int getNenner() const;
    int getSerial() const;
    void setZaehler(int);
    void setNenner(int);
    void changeSign();
    double toDouble() const;
    std::string toString() const;
    rational operator+ (rational) const;
    rational operator- (rational) const;
    rational operator* (rational) const;
    rational operator/ (rational) const;
    bool operator> (rational) const;
    bool operator< (rational) const;
    bool operator== (rational) const;
    bool operator!= (rational) const;
    void operator= (rational);
    friend std::ostream& operator<< (std::ostream& os, const rational& ratBruch);

    class ZeroDenominatorException
    {
        std::string msg = "Nenner ist NULL!";

    public:
        void printMsg();
    };
};

#endif // RATIONAL_H

/////////////////// End of File <rational.h> //////////////////////////////////
