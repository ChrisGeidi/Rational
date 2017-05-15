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
    const int serial;
    int counter;
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

};

#endif // RATIONAL_H

/////////////////// End of File <rational.h> //////////////////////////////////
