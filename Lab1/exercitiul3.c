#include <stdio.h>
#include <math.h>

int main()
{
    double (*pf[])(double)={sqrt,sin,cos,tan,exp,log};
    double i;
    for(i=0;i<=1;i+=0.1)
    {
        printf("sqrt(%lf)=%lf\n",i,pf[0](i));
        printf("sin(%lf)=%lf\n",i,pf[1](i));
        printf("cos(%lf)=%lf\n",i,pf[2](i));
        printf("tan(%lf)=%lf\n",i,pf[3](i));
        printf("exp(%lf)=%lf\n",i,pf[4](i));
        printf("log(%lf)=%lf\n",i,pf[5](i));
    }
}