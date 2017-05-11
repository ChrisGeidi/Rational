///////////////////////////////////////////////////////////////////////////////
//
// File: rational.cpp
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

#ifndef RATIONAL_CPP
#define RATIONAL_CPP

#include "rational.h"
#include <iostream>

int rational::counter=0;

rational::rational():rational(0, 1)
{
}


// Custom Konstruktor der Klasse rational f�r zwei Parameter
rational::rational(int iZaehler, int iNenner) : serial(++counter)
{
    setZaehler(iZaehler);
    setNenner(iNenner);
}

int rational::getZaehler() const
{
    return z;
}

int rational::getNenner() const
{
    return n;
}

int rational::getSerial()const
{
    return serial;
}

void rational::setZaehler(int iZaehler)
{
    z = iZaehler;
}

void rational::setNenner(int iNenner)
{
    using namespace std;
    if(iNenner == 0)
    {
        cout << "Fuer den Nenner wird keine 0 akzeptiert!" << endl;
    }
    else
    {
        n = iNenner;
    }
}

rational rational::operator+ (rational ratBruch) const
{
    rational ratErgebnis;

    ratErgebnis.setZaehler(getZaehler() * ratBruch.getNenner() + getNenner() * ratBruch.getZaehler());
    ratErgebnis.setNenner(getNenner() * ratBruch.getNenner());
    ratErgebnis.kuerze();

    return ratErgebnis;
}

rational rational::operator- (rational ratBruch) const
{
    rational ratErgebnis;

    ratErgebnis.setZaehler(getZaehler() * ratBruch.getNenner() - getNenner() * ratBruch.getZaehler());
    ratErgebnis.setNenner(getNenner() * ratBruch.getNenner());
    ratErgebnis.kuerze();
    return ratErgebnis;
}

rational rational::operator*(rational ratBruch) const
{
    rational ratErgebnis;

    ratErgebnis.setZaehler(getZaehler()*ratBruch.getZaehler());
    ratErgebnis.setNenner(getNenner()*ratBruch.getNenner());
    ratErgebnis.kuerze();
    return ratErgebnis;
}

rational rational::operator/(rational ratBruch) const
{
    rational ratErgebnis;

    ratErgebnis.setZaehler(getZaehler()*ratBruch.getNenner());
    ratErgebnis.setNenner(getNenner()*ratBruch.getZaehler());

    ratErgebnis.kuerze();

    return ratErgebnis;
}


int rational::ggt() const
{
    int a = getZaehler();
    int b = getNenner();
    int r = 0;

    do
    {
        r = a % b;
        a = b;
        b = r;
    }while(r != 0);

    return a;
}

void rational::kuerze()
{
    int iGgt = ggt();
    setZaehler(getZaehler() / iGgt);
    setNenner(getNenner() / iGgt);
}


#endif //RATIONAL_CPP

/////////////////// End of File <rational.cpp> ////////////////////////////////
