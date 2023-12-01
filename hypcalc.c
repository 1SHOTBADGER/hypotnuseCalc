#include <stdio.h>
#include <math.h>

int main(){

double a ;
double b ;

double hypotnuse;

printf("enter the A side angle ");
scanf("%lf", &a);

printf("enter the b side angle 2");
scanf("%lf", &b);

hypotnuse = sqrt(a*a + b*b);

printf("your hyptonuse is %lf", hypotnuse);


// c^2=a^2+b^2    c=/(a^2+b^2)
    return 0;
}