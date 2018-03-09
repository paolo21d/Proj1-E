#include <iostream>

using namespace std;

#include "Complex.h"

int main() {
    cout << "Podaj re oraz im" << endl;
    double re, im;

    cin >> re >> im;
    Complex zesp1(re, im);
    cout << zesp1;
    cin >> re >> im;
    Complex zesp2(re, im);
    cout << zesp2;
    Complex w = zesp1 + zesp2;
    //Complex zx(Complex (1,2));
    //cout<<"Modul: "<<zesp1.modul()<<endl;
    return 0;
}