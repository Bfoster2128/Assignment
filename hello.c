#include<stdio.h>

int main()
{
/*.....................................*/
    /* Began by creating an interactive 
    MENU where the user could select the
    cipher type they wanted*/
   //These initialised values are added to throughout the coding proccess not all at once
   int number=2;
   int caesop=1;
   int subop=1;
   int selection;
   int caesar;
   int substitution;
   
   //These printf statements left the user know what their options are
    printf("\tPlease select a Cipher\n"); /* '\t' makes the text tabbed and more presentable*/
    printf("\t~   1) Caesar Cipher       ~\n");
    printf("\t~   2) Substitution Cipher ~\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    /*scanf("%d\n", &number);*/ /*scan the users answer*/

/*The users answer e.g. 1 for caesar cipher is then subtracted by 1 giving 0 
as switch cases begin at 0*/
    switch(number-1){
    case 0: printf("You have selected the Caesar Cipher!\n");
            /*Important to give user feedback on their answer to make sure they have
            selected correctly and also allows you as the programmer to check if the
            program is following the branch of commands you want it to*/
    
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            
            printf("Please Select a Caesar cipher task\n");
            
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            
            printf("\t Ceasar Cipher Option Menu\n"); 
            printf("\t~   1)Encrypt English Code\n");
            printf("\t~   2)Decrypt with an algorithm, cipher text and key\n");
            printf("\t~   3)Decrypt with assumptions\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            caesop=3;//just an initialised variable delete later
            selection=caesar;
            //scanf("%d\n, &caesop");
            break;
    case 1: printf("You have Selected the Substitution Cipher!\n");
    
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            
            printf("Please Select a Substitution cipher task\n");
            
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            
            printf("\t Substitution Cipher Option Menu\n"); 
            printf("\t~   1)Encrypt English Code with substitution cipher\n");
            printf("\t~   2)Decrypt with an algorithm, cipher text and key\n");
            printf("\t~   3)Decrypt with assumptions\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            subop=1; //just an initialisation value delete later
            selection=substitution;
            /*scanf("%d\n", &subop);*/
            break;
    default: printf("Selection not recognised please select 1 or 2!\n");
            /* send them back to beginning of selection*/
           break;
           //Add in a go back option
    
     }
     if ("selection=caesar"){
    switch (caesop-1){ /*This is where the user has selected a task item from the caesar selection list*/
    case 0: printf("You have selected encrypt English text with a Caesar code!\n");
    
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            //write code to encrypt english text
            
        break;
            
    case 1:printf("You have selected Decrypt with an algorithm, cipher text and key!\n");
            //write code to decrypt text
        break;
    
    case 2:printf("You have selected Decrypt with Assumptions!\n");
            //write code to decrypt text
        break;
    
    default: printf("Selection not recognised please select 1, 2 or 3");
    //Send back to previous menu
        break;
    //Add go back option
   }     
   }else if("selection=substitution"){
       switch (subop-1){//if they select a substitution cipher
           case 0: printf("You have selected encrypt English text with Substition code!\n");
            break;
           case 1:printf("You have selected decrypt text with an algorithm, cipher text and key!\n");
            break;
           case 2:printf("You have selected decrypt text with assumptions!\n");
            break;
           default:printf("Selection not recognised please select 1, 2 or 3");
            break;  
            //Add go back option
       }
   }else{
       //pathway that leads to menu again
   }

    
    

}
