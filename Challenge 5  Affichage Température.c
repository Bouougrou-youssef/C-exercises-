#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{

float C ;
printf("enter temperature in C :");
scanf("%f",&C);
if(C<0){
    printf ("water is solid");

} else if (C>=0 && C<100 ){
printf ("water is liquide ");

}   else {
printf ("water is gaz");
}








return 0 ;

}

