#include <stdio.h>
#include "control.h"


int main()
{

static double i;

scanf("%lf",&i);

double j = i;

double *p= &j;

acc(&j);

printf("75%% of %.2lf is %.2lf", i, *p);

        return 0;
    }
