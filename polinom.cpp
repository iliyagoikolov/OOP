#include "polinom.h"
#include <math.h>
polinom::polinom(number x,number y,number z)
{
    a=x;
    b=y;
    c=z;
}

number polinom::value(number x)
{
    return a*x*x+b*x+c;
}

int polinom::roots(number* x)
{
    double D = b*b-4*a*c;
    if (D>0) {
        D = sqrt(D);
        x[0] = ((-1)*b+D)/(2*a);
        x[1] = ((-1)*b-D)/(2*a);
        return 2;
    } else if (D==0) {
        x[0] = ((-1)*b)/(2*a);
        return 1;
    } else {
    return 0;
    }
}

ostream& operator<< (ostream& os,polinom& p)
{
    char sign_b ='-';
    char sign_c ='-';
    if (p.b>=0) sign_b='+';
    if (p.c>=0) sign_c='+';

    os<<p.a<<"x^2"<<sign_b<<abs(p.b)<<"x"<<sign_c<<abs(p.c);
    return os;
}


