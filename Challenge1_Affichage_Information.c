#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char  name[50],nickname[50],email_adress[50],sex[50];
    int age ;
    printf("enter your name :");
    scanf("%s",&name);
    printf("enter your nickname:");
    scanf("%s",&nickname);
    printf("enter your email adress:");
    scanf("%s",&email_adress);
    printf("enter your sex male/female :");
    scanf("%s",&sex);
    printf("enter your age :");
    scanf("%d",&age);
    printf("your name :%s \n your nickname:%s \n your email adress: %s \n your sex: %s \n your age :%d ",name,nickname,email_adress,sex,age);










 return 0 ;
}



