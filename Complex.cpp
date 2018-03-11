//
// Created by Ewa on 06.03.2018.
//

#include "Complex.h"
#include <cmath>

using namespace std;

Complex::Complex(double r, double i) {
    //cout<<"Konstruktor inicjujacy"<<endl;
    re = r;
    im = i;
}

Complex::Complex() {
    re = 0;
    im = 0;
}

Complex::Complex(double r) {
    re = r;
    im = 0;
}

Complex::Complex(const Complex &com) {
    re = com.re;
    im = com.im;
}

Complex::~Complex() {
    //cout << "Destruktor " << this << endl;
}

/////////Metody
double Complex::modul() {
    return sqrt(re * re + im * im);
}

double Complex::argument() {
    if (this->modul() == 0) {
        cout << "Modul=0, brak argumentu" << endl;
        return 0;
    }
    return asin(im / this->modul());
}

void Complex::ustaw(double r, double i) {
    re = r;
    im = i;
}

double Complex::getIm() const {
    return this->im;
}

double Complex::getRe() const {
    return this->re;
}

//przeciazenia operatorow
Complex operator+(const Complex &z1, const Complex &z2) {
    //Complex z (z1.getRe()+z2.getRe(), z1.getIm()+z2.getIm());
    //return  z;
    //return  Complex (z1.getRe()+z2.getRe(), z1.getIm()+z2.getIm())
    return Complex(z1.re + z2.re, z1.im + z2.im);
}

Complex operator-(const Complex &z1, const Complex &z2) {
    return Complex(z1.re - z2.re, z1.im - z2.im);
}

Complex operator*(const Complex &z1, const Complex &z2) {
    double r = z1.re * z2.re - z1.im * z2.im;
    double i = z1.re * z2.im + z1.im * z2.re;
    //double r = z1.getRe() * z2.getRe() - z1.getIm() * z2.getIm();
    //double i = z1.getRe() * z2.getIm() + z1.getIm() * z2.getRe();
    return Complex(r, i);
}

/*Complex &operator+=(Complex &z1, Complex &z2) {
    Complex z(z1.getRe() + z2.getRe(), z1.getIm() + z2.getIm());
    return z;
}

Complex &operator+=(Complex &z1, double r) {
    Complex z(z1.getRe() + r, z1.getIm());
    return z;
}

Complex &operator+=(double r, Complex &z1) {
    Complex z(z1.getRe() + r, z1.getIm());
    return z;
}*/

Complex &Complex::operator+=(const Complex &z) {
    this->re += z.re;
    this->im += z.im;
    return *this;
}

Complex &Complex::operator-=(const Complex &z) {
    this->re -= z.re;
    this->im -= z.im;
    return *this;
}

Complex &Complex::operator*=(const Complex &z) {
    this->re = this->re * z.re - this->im * z.im;
    this->im = this->re * z.im + this->im * z.re;
    return *this;
}

ostream &operator<<(ostream &wyjscie, const Complex &z) {
    if (z.getIm() > 0)
        return wyjscie << z.getRe() << "+" << z.getIm() << "i";
    else if (z.getIm() < 0)
        return wyjscie << z.getRe() << "" << z.getIm() << "i";
    else
        return wyjscie << z.getRe();
}