#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{

float speed_h,speed_s ;
printf("enter speed in km/h  :");
scanf("%f",&speed_h);
speed_s = speed_h * 0.27778;
printf("speed in m/s %f ",speed_s);

return 0 ;

}

