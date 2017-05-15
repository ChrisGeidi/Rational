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
using namespace std;
class rational
{
    int z, n;
    unsigned int counter;
    int serial;
    void kuerze();
    int ggt() const;

public:
    rational();
    rational(int);
    rational(int, int);
    int getZaehler() const;
    int getNenner() const;
    int getSerial() const;
    void setZaehler(int);
    void setNenner(int);
    double toDouble();
    rational operator+ (rational) const;
    rational operator- (rational) const;
    rational operator* (rational) const;
    rational operator/ (rational) const;
    bool operator> (rational) const;
    bool operator< (rational) const;
    bool operator== (rational) const;
    bool operator!= (rational) const;
    friend ostream& operator<< (ostream& os, const rational& ratBruch);

};

#endif // RATIONAL_H

/////////////////// End of File <rational.h> //////////////////////////////////
