#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
    int x1,x2,y1,y2,z1,z2,a,b;
    float d;
    printf ("entre les coordonnees du point a (x1,y1,z1): ");
    scanf("%d,%d,%d",&x1,&y1,&z1);
     printf ("entre les coordonnees du point b (x2,y2,z2): ");
    scanf("%d,%d,%d",&x2,&y2,&z2);
    d = sqrt(pow((x2-x1),2) + pow((y2-y1),2) + pow((z2-z1),2));
    printf("la distance entre les deux points a et b: %f",d);


return 0 ;

}

