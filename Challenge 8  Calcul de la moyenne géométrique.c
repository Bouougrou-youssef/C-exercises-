#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
float mg,a,b,c;
printf("entre le nombre a:");
scanf("%f",&a);
printf("entre le nombre  b:");
scanf("%f",&b);
printf("entre le nombre  c:");
scanf("%f",&c);
mg = pow(a*b*c,1.0/3.0);
printf("Moyenne géométrique: %f",mg);



return 0 ;

}

