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
// Marc Töpker
//
///////////////////////////////////////////////////////////////////////////////

#include "rational.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 30
using namespace std;

int rational::counter = 0;

rational::rational():rational(0, 1)
{
}

// Custom Konstruktor der Klasse rational für zwei Parameter
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

bool rational::operator> (rational ratBruch) const
{
    rational ratTemp(getZaehler(), getNenner());

    ratTemp.setZaehler(ratTemp.getZaehler() * ratBruch.getNenner());
    ratBruch.setZaehler(ratTemp.getNenner() * ratBruch.getZaehler());

    return (bool)(ratTemp.getZaehler() > ratBruch.getZaehler());
}

bool rational::operator< (rational ratBruch) const
{
    rational ratTemp(getZaehler(), getNenner());

    ratTemp.setZaehler(ratTemp.getZaehler() * ratBruch.getNenner());
    ratBruch.setZaehler(ratTemp.getNenner() * ratBruch.getZaehler());

    return (bool)(ratTemp.getZaehler() < ratBruch.getZaehler());
}

bool rational::operator== (rational ratBruch) const
{
    rational ratTemp(getZaehler(), getNenner());

    ratTemp.setZaehler(ratTemp.getZaehler() * ratBruch.getNenner());
    ratBruch.setZaehler(ratTemp.getNenner() * ratBruch.getZaehler());

    return (bool)(ratTemp.getZaehler() == ratBruch.getZaehler());
}

bool rational::operator!= (rational ratBruch) const
{
    rational ratTemp(getZaehler(), getNenner());

    ratTemp.setZaehler(ratTemp.getZaehler() * ratBruch.getNenner());
    ratBruch.setZaehler(ratTemp.getNenner() * ratBruch.getZaehler());

    return (bool)(ratTemp.getZaehler() != ratBruch.getZaehler());
}

void rational::operator= (rational ratBruch)
{
    setZaehler(ratBruch.getZaehler());
    setNenner(ratBruch.getNenner());
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

double rational::toDouble()
{
    return (double)getZaehler() / (double)getNenner();
}

ostream& operator<< (ostream& os, const rational& ratBruch)
{
    os<< ratBruch.getZaehler() << "/" << ratBruch.getNenner();

    return os;
}

/////////////////// End of File <rational.cpp> ////////////////////////////////
