#include<stdio.h>

int main()
{
/*.....................................*/
    /* Began by creating an interactive 
    MENU where the user could select the
    cipher type they wanted*/
   int number;
   
    printf("Please select a Cipher\n");
    printf("1) Caesar Cipher\n");
    printf("2) Substitution Cipher\n");
    scanf("%d\n", &number); /*scan the users answer*/

    switch(number-1){
    case 0: printf("You have selected the Caesar Cipher\n");
            break;
    case 1: printf("You have Selected the Substitution Cipher\n");
            break;
    default: printf("Selection not recognised please select 1 or 2\n");
    }

            
}
