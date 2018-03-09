//
// Created by Ewa on 06.03.2018.
//

#ifndef PROJEKT1_COMPLEX_H
#define PROJEKT1_COMPLEX_H

#include <iostream>

class Complex {
private:
    double re, im;
public:
    Complex();

    Complex(double i, double r);

    Complex(const Complex &com); //konstruktor kopiujacy
    Complex(double r);

    ~Complex();

    double getRe() const;

    double getIm() const;

    void ustaw(double r, double i);

    double modul();

    double argument();

    friend std::ostream &operator<<(std::ostream &wyjscie, const Complex &z);

    friend Complex operator+(const Complex &z1, const Complex &z2);
};

#endif //PROJEKT1_COMPLEX_H