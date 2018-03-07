//
// Created by Ewa on 06.03.2018.
//

#ifndef PROJEKT1_COMPLEX_H
#define PROJEKT1_COMPLEX_H


class Complex {
private:
    double  re, im;
public:
    Complex(double r, double i);
    //Complex(Complex z);
    Complex(double r);
    Complex();
    ~Complex();
    double getRe();
    double getIm();
    void ustaw(double r, double i);
    double modul();
    double argument();
};


#endif //PROJEKT1_COMPLEX_H
