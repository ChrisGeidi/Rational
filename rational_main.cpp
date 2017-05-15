///////////////////////////////////////////////////////////////////////////////
//
// File: rational_main.cpp
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

# include <iostream >
# include "rational.cpp"

using namespace std;
int main ()
{
    // Erzeugen eines Objektes vom Typ rational
    // impliziert den Aufruf des Default - Konstruktors
    rational r, s, t;
    int b;
    // Per Default wird daher z = 0 und n = 1 gesetzt
    cout << "r = " << r.getZaehler () << "/" << r.getNenner () << endl;
    cout << "s = " << s.getZaehler () << "/" << s.getNenner () << endl;
    cout << "Geben Sie einen Wert fuer den Zaehler ein:" << endl;
    cin >> b;
    // Anwendung der Funktion setZaehler auf das Objekt r
    r.setZaehler (b);
    cout << "Geben Sie einen Wert fuer den Nenner ein:" << endl;
    cin >> b;
    // Anwendung der Funktion setNenner auf das Objekt r
    r.setNenner (b);
    // Ausgabe des geaenderten Objektzustandes
    cout << "r = " << r.getZaehler() << "/" << r.getNenner() << endl;

    cout << "Geben Sie einen Wert fuer den Zaehler ein:" << endl;
    cin >> b;
    // Anwendung der Funktion setZaehler auf das Objekt r
    s.setZaehler (b);
    cout << "Geben Sie einen Wert fuer den Nenner ein:" << endl;
    cin >> b;
    // Anwendung der Funktion setNenner auf das Objekt r
    s.setNenner (b);
    // Ausgabe des geaenderten Objektzustandes
    cout << "s = " << s.getZaehler() << "/" << s.getNenner() << endl;

    // Addieren der beiden Brueche
    t = r + s;
    cout << "r + s = " << t.getZaehler() << "/" << t.getNenner() << endl;

    // Subtrahieren der beiden Brueche
    t = r-s;
    cout << "r - s = " << t.getZaehler() << "/" << t.getNenner() << endl;

    // multiplizieren der beiden Brueche
    t = r * s;
    cout << "r * s = " << t.getZaehler() << "/" << t.getNenner() << endl;

    // dividieren der beiden Brueche
    t = r / s;
    cout << "r / s = " << t.getZaehler() << "/" << t.getNenner() << endl;

    cout<< r.getSerial()<< s.getSerial() << t.getSerial()<<endl;

    cout<< t.toDouble()<<endl;
    return 0;
}

/////////////////// End of File <rational_main.cpp> ///////////////////////////
