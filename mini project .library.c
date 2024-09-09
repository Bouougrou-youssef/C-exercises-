
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
        char title[50][50], author[50][50] ;
        int quantity [50], numOfBook, stock = 0;
        float price [50];

void addBook()
{
    printf ("how many books you want to add ");
    scanf ("%d",&numOfBook);
    if (stock + numOfBook >50)
    {
        printf ("sorry! the stock is full ");
    }
    else
    {
        for (int i=stock; i<numOfBook+stock; i++)
        {
            printf ("entre book title :");
            scanf ("%s",&title[i]);
            printf ("enter the author name :");
            scanf ("%s",&author[i]);
            printf ("enter the quantity :");
            scanf ("%d",&quantity[i]);
            printf ("enter the price :");
            scanf ("%f",&price[i]);


        }
        stock=stock+numOfBook;
        printf ("the books added succefully\n");
        system("pause");
    }


}
void displayBook()
{

    if (stock==0)
    {
        printf ("no books available to display");
        system ("pause");
    }
    else
    {
        for (int i=0; i<stock ; i++)
        {

            printf ("the id : %d \n",i);
            printf ("the title : %s \n",title[i]);
            printf ("AUTHOR :%s \n",author[i]);
            printf ("quantity : %d \n",quantity[i]);
            printf (" price : %.2f dh \n",price[i]);
        }
        system ("pause");
    }
}
void updateBooks()
{
    displayBook();
    int id ;
    printf ("enter the id that you want to update :");
    scanf ("%d",&id);
            printf ("entre book title :");
            scanf ("%s",&title[id]);
            printf ("enter the author name :");
            scanf ("%s",&author[id]);
            printf ("enter the quantity :");
            scanf ("%d",&quantity[id]);
            printf ("enter the price :");
            scanf ("%f",&price[id]);


}
void removeBooks(){

int id ;
printf ("enter the id that you want to update :");
scanf (" %d", &id);
for (int i =id ; i<stock; i++){
    quantity[i]=quantity[i+1];
    price[i]=price[i+1];
    strcpy(title[i],title[i+1]);
    strcpy(author[i],author[i+1]);
}
stock--;
printf ("the id %d removed succefully",quantity[id]);





}
void searchBook(){
    int choice;
    start:
    printf("\ndo you want to search by 1-id or 2-title : \n");
    scanf("%d",&choice);
    if(choice==1){
            printf("\nPlease enter the id of the book you'r looking for : \n");

        scanf("%d",&choice);

        printf("your book is : \n");
        printf("\nTitle : %s",title[choice]);
        printf("\nautor : %s",author[choice]);
        printf("\nquantity : %d",quantity[choice]);
        printf("\nprrice : %d",price[choice]);

    }else if(choice==2){
        char nameBook[50];
        scanf(" %s",&nameBook);
        for(int i=0;i<stock;i++){
            if(strcmp(title[i],nameBook)){

        printf("your book is : \n");
        printf("\nTitle : %s",title[i]);
        printf("\nautor : %s",author[i]);
        printf("\nquantity : %d",quantity[i]);
        printf("\nprrice : %d",price[i]);

            }
        }
    }else {

        printf("invalid choice");
        goto start;
        }




}
int main()
{

    int choice ;
    do
    {
        system ("cls");
        printf ("------------- main menu ---------------\n");
        printf (" 1 : add book to the stock \n 2 : display all avaiable books \n 3 : update the quantity  \n 4 : delete book from the stock \n 5 : show all the books from the stock \n 0 : Exit \n Enter your choice : ") ;
        scanf ("%d",&choice);

        switch (choice)
        {
        case 1 :
            addBook();

            break;
        case 2 :
            displayBook();

            break;
        case 3 :
            updateBooks();
            break;
        case 4 :
            removeBooks();
            break;
        case 5 :
            searchBook();
            break;
        case 0 :
            printf("bye ! have a great time ");
            return 0;
            break ;
        default :
            printf("please enter a valid number ");
        }
    }
    while (choice != 0);
    return 0;
}

