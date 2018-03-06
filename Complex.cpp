//
// Created by Ewa on 06.03.2018.
//

#include "Complex.h"
#include <iostream>
#include <cmath>

using namespace std;
Complex::Complex(double r, double i){
    cout<<"Konstruktor inicjujacy"<<endl;
    re=r;
    im=i;
}
Complex::Complex(){
    cout<<"Konstruktor domyslny"<<endl;
}
Complex::~Complex() {
    cout<<"Destruktor"<<endl;
}
double Complex::modul() {
    return  sqrt(re*re+im*im);
}
double Complex::argument() {
    if(this->modul()==0){
        cout<<"Modul=0, brak argumentu"<<endl;
        return 0;
    }
    return  asin(im/this->modul());
}
void Complex::ustaw(double r, double i) {
    re=r;
    im=i;
}
double Complex::getIm() {
    return this->re;
}
double Complex::getRe() {
    return  this->re;
}
//przeciazenia operatorow
Complex operator+ (Complex z1, Complex z2){
    Complex z (z1.getRe()+z2.getRe(), z1.getIm()+z2.getIm());
    return  z;
}
Complex operator+ (Complex z1, double r){
    Complex z(z1.getRe()+r, z1.getIm());
    return  z;
}
Complex operator+ (double r, Complex z1){
    Complex z(z1.getRe()+r, z1.getIm());
    return  z;
}
Complex operator- (Complex z1, Complex z2){
    Complex z(z1.getRe()-z2.getRe(), z1.getIm()-z2.getIm());
    return z;
}
Complex operator- (Complex z1, double r){
    Complex z(z1.getRe()-r, z1.getIm());
    return  z;
}
Complex operator- (double r, Complex z1){
    Complex z(r-z1.getRe(), z1.getIm());
    return  z;
}
Complex operator* (Complex z1, Complex z2){
    double r= z1.getRe()*z2.getRe()-z1.getIm()*z2.getIm();
    double i= z1.getRe()*z2.getIm()+z1.getIm()*z2.getRe();
    Complex z(r,i);
    return  z;
}
Complex operator* (Complex z1, double l){
    Complex z(z1.getRe()*l, z1.getIm()*l);
    return  z;
}
Complex operator* (double l, Complex z1){
    Complex z(z1.getRe()*l, z1.getIm()*l);
    return  z;
}