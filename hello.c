#include<stdio.h>

int main()
{
/*.....................................*/
    /* Began by creating an interactive 
    MENU where the user could select the
    cipher type they wanted*/
   int number=1;
   
    printf("\tPlease select a Cipher\n"); /* '\t' makes the text tabbed and more presentable*/
    printf("\t~   1) Caesar Cipher       ~\n");
    printf("\t~   2) Substitution Cipher ~\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    /*scanf("%d\n", &number);*/ /*scan the users answer*/

    switch(number-1){
    case 0: printf("You have selected the Caesar Cipher!\n");
    
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            
            printf("Please Select a Caesar cipher task\n");
            
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            
            printf("\t Ceasar Cipher Option Menu\n"); 
            printf("\t~   1)Encrypt English Code\n");
            printf("\t~   2)Decrypt with an algorithm, cipher text and key\n");
            printf("\t~   3)Decrypt with assumptions\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            break;
    case 1: printf("You have Selected the Substitution Cipher!\n");
    
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            
            printf("Please Select a Substitution cipher task\n");
            
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            
            printf("\t Substitution Cipher Option Menu\n"); 
            printf("\t~   1)Encrypt English Code\n");
            printf("\t~   2)Decrypt with an algorithm, cipher text and key\n");
            printf("\t~   3)Decrypt with assumptions\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            break;
    default: printf("Selection not recognised please select 1 or 2!\n");
            /* send them back to beginning of selection*/
    
    
    }

            
}
