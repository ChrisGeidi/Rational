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


class rational
{
    int z, n;
    int serial;
    void kuerze();
    int ggt() const;

public:
    static int counter;
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

};

#endif // RATIONAL_H

/////////////////// End of File <rational.h> //////////////////////////////////
