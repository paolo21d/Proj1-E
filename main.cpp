#include <iostream>

using namespace std;

#include "Complex.h"

int main() {
    /*cout << "Podaj re oraz im" << endl;
    double re, im;
    cin >> re >> im;
    Complex zesp1(re, im);
    cout << zesp1;
    cin >> re >> im;
    Complex zesp2(re, im);
    cout << zesp2;
    Complex w = zesp1 + zesp2;*/
    int opcja;
    double re, im;
    while (1) {
        cout << "MENU" << endl;
        cout << "1 Dodaj liczby" << endl;
        cout << "2 Odejmij liczby" << endl;
        cout << "3 Pomnoz liczby" << endl;
        cout << "4 Oblicz modul liczby" << endl;
        cout << "5 Oblicz argument liczby" << endl;
        cout << "0 Wyjscie z programu" << endl;
        cout << "Liczby wprowadzamy w postaci: czesc_rzeczywista czesc_urojona" << endl;
        cin >> opcja;
        if (opcja == 1) {
            cout << "Podaj liczbe z1 ";
            cin >> re >> im;
            Complex z1(re, im);
            cout << "Podaj liczbe z2 ";
            cin >> re >> im;
            Complex z2(re, im);
            cout << endl << "Wynik " << z1 << " + " << z2 << " = " << z1 + z2 << endl;
        } else if (opcja == 2) {
            cout << "Podaj liczbe z1 ";
            cin >> re >> im;
            Complex z1(re, im);
            cout << "Podaj liczbe z2 ";
            cin >> re >> im;
            Complex z2(re, im);
            cout << endl << "Wynik " << z1 << " - (" << z2 << ") = " << z1 - z2 << endl;
        } else if (opcja == 3) {
            cout << "Podaj liczbe z1 ";
            cin >> re >> im;
            Complex z1(re, im);
            cout << "Podaj liczbe z2 ";
            cin >> re >> im;
            Complex z2(re, im);
            cout << endl << "Wynik " << z1 << " * (" << z2 << ") = " << z1 * z2 << endl;
        } else if (opcja == 4) {
            cout << "Podaj liczbe z ";
            cin >> re >> im;
            Complex z(re, im);
            cout << "|" << z << "| = " << z.modul() << endl;
        } else if (opcja == 5) {
            cout << "Podaj liczbe z ";
            cin >> re >> im;
            Complex z(re, im);
            cout << "arg(" << z << ") = " << z.argument() << endl;
        } else {
            break;
        }
    }
    return 0;
}