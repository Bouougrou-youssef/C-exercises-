#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{

float a,b;
char operator ;
printf("enter number a:");
scanf("%f",&a);
printf("enter operator :");
scanf(" %c",&operator);
printf("enter number b:");
scanf("%f",&b);

switch(operator){
case '+' :
    printf("a+b= %f",a+b);
    break;
case '-' :
    printf("a-b= %f",a-b);
    break;
case '*':
    printf("a*b= %f",a*b);
    break;
case '/':
    printf("a/b= %f",a/b);
    break;
}



return 0 ;

}

