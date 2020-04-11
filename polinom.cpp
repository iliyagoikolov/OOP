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
    if(a==0)
    {
        return 0;
    }
    number Z;
    bool ZisSet=0;
    double reZ=0;
    double imZ=0;
    number D = b*b-a*c*4;
    double reD = D.getRe();
    double imD = D.getIm();
    double absZ = sqrt(reD*reD+imD*imD);
    double argZ=0;

    if (reD < 0 && imD < 0)
    {
        argZ = (-1)*M_PI+atan(imD/reD);
    }
    else if (reD < 0 && imD > 0)
    {
        argZ = M_PI+atan(imD/reD);
    }
    else if (reD < 0 && imD == 0)
    {
        imD = sqrt((-1)*reD);
        Z = complex(0, imD);
        ZisSet=1;
    }
    else if (reD == 0 && imD == 0)
    {
        x[0] = (b*(-1))/(a*2);
        return 1;
    }
    else
    {
        argZ = atan(imD/reD);
    }

    if (!ZisSet)
    {
        reZ = sqrt(absZ)*cos((argZ)/2);
        imZ = sqrt(absZ)*sin((argZ)/2);
        Z = complex(reZ, imZ);
    }

    x[0] = (b*(-1)+Z)/(a*2);
    x[1] = (b*(-1)-Z)/(a*2);
    return 2;

}

ostream& operator<<(ostream& os, polinom& p)
{
    os<<p.a<<"x^2+"<<p.b<<"x+"<<p.c;
    return os;
}
