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

    cout << "********************************************************" << endl;
    cout << "* Projekt: Rational                                    *" << endl;
    cout << "*                                                      *" << endl;
    cout << "* Carsten Bevermann, Christoph Geitner,                *" << endl;
    cout << "* Jens Reimer, Marc Toepker                            *" << endl;
    cout << "********************************************************" << endl;

    // Per Default wird daher z = 0 und n = 1 gesetzt
    cout << r << endl;
    cout << s << endl;
    cout << "Geben Sie einen Wert fuer den Zaehler des ersten Bruches ein: ";
    cin >> b;
    // Anwendung der Funktion setZaehler auf das Objekt r
    r.setZaehler (b);
    cout << "Geben Sie einen Wert fuer den Nenner des ersten Bruches ein: ";
    cin >> b;
    // Anwendung der Funktion setNenner auf das Objekt r
    r.setNenner (b);
    // Anwendung der Funktion changeSign auf das Objekt r
    r.changeSign();
    // Ausgabe des geaenderten Objektzustandes
    cout << "r = " << r << endl << endl;

    cout << "Geben Sie einen Wert fuer den Zaehler des zweiten Bruches ein:" << endl;
    cin >> b;
    // Anwendung der Funktion setZaehler auf das Objekt r
    s.setZaehler (b);
    cout << "Geben Sie einen Wert fuer den Nenner des zweiten Bruches ein:" << endl;
    cin >> b;
    // Anwendung der Funktion setNenner auf das Objekt s
    s.setNenner (b);
    // Anwendung der Funktion changeSign auf das Objekt s
    s.changeSign();
    // Ausgabe des geaenderten Objektzustandes
    cout << "s = " << s << endl << endl;

    // Addieren der beiden Brueche
    t = r + s;
    cout << "r + s = " << t << endl;

    // Subtrahieren der beiden Brueche
    t = r-s;
    cout << "r - s = " << t << endl;

    // Multiplizieren der beiden Brueche
    t = r * s;
    cout << "r * s = " << t << endl;

    // Dividieren der beiden Brueche
    t = r / s;
    cout << "r / s = " << t << endl << endl;

    // Ausgabe der Seriennummern
    cout << "Seriennummern:" << endl;
    cout << "r: " << r.getSerial() << endl;
    cout << "s: " << s.getSerial() << endl;
    cout << "t: " << t.getSerial() << endl << endl;

    // Ausgabe der Brueche als Dezimalzahl
    cout << "Brueche als Dezimalzahl:" << endl;
    cout << "r: " << r.toDouble() << endl;
    cout << "s: " << s.toDouble() << endl;
    cout << "t: " << t.toDouble() << endl << endl;

    // Ausgabe eines Bruches als string
    cout << "Ergebnis als string:" << endl;
    cout << "t: " << t.toString() << endl << endl;

    // Ausgabe der Vergleichsoperationen
    cout << "Anwendung der Vergleichsoperatoren auf die Brueche r und s:" << endl;
    cout << "r > s = " << (r > s) << endl;

    cout << "r < s = " << (r < s) << endl;

    cout << "r == s = " << (r == s) << endl;

    cout << "r != s = " << (r != s) << endl << endl;

    cout << "********************************************************" << endl;

    return 0;
}

/////////////////// End of File <rational_main.cpp> ///////////////////////////
