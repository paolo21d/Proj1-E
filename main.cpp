#include <iostream>
using  namespace std;
#include "Complex.h"
int main() {
    cout<<"Podaj re oraz im"<<endl;
    double re, im;
    cin>>re>>im;
    Complex zesp1(re, im);
    cout<<"Modul: "<<zesp1.modul()<<endl;

    return 0;
}