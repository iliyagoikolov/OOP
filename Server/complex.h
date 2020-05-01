#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <QString>
using namespace std;

class complex
{
    double re, im;
public:
    complex();
    complex(double, double);
    complex(const int&);

    complex operator*(complex);
    complex operator+(complex);
    complex operator-(complex);
    complex operator*(double);
    complex operator/(double);
    complex operator/(complex);
    bool operator==(complex);
    bool operator==(double);

    QString toString();
    double getRe(){
        return re;
    }
    double getIm(){
        return im;
    };

};

#endif // COMPLEX_H
