/*This code has 5 parts the first being
a menu which leads to the other 4 options

*/
#include<stdio.h>

//function prototype for encrypting text with the caesar cipher
char CaesarEncrypt(char EnglishText[i], int key, int i);


int main()
{
/*.....................................*/
    /* Began by creating an interactive 
    MENU where the user could select the
    cipher type they wanted*/
   //These initialised values are added to throughout the coding proccess not all at once
   
   //Variables to set up menu with
   int number=1;
   int caesop=1;
   int subop=1;
   int Selection;
   
   //variables needed for reading text from a file
   char EnglishText[20000];
   int i=0;
   int key;
   
   //variables for encrypting the data
   char letter;
   
   
   //These printf statements left the user know what their options are
    printf("\tPlease select a Cipher\n"); /* '\t' makes the text tabbed and more presentable*/
    printf("\t~   1) Caesar Cipher       ~\n");
    printf("\t~   2) Substitution Cipher ~\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    /*scanf("%d\n", &number);*/ /*scan the users answer*/

/*The users answer e.g. 1 for caesar cipher is then subtracted by 1 giving 0 
as switch cases begin at 0*/
    if (number==1){
            printf("You have selected the Caesar Cipher!\n");
            /*Important to give user feedback on their answer to make sure they have
            selected correctly and also allows you as the programmer to check if the
            program is following the branch of commands you want it to*/
    
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            
            printf("Please Select a Caesar cipher task\n");
            
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            
            printf("\t Ceasar Cipher Option Menu\n"); 
            printf("\t~   1)Encrypt English Code with Caesar Cipher\n");
            printf("\t~   2)Decrypt with an algorithm, cipher text and key\n");
            printf("\t~   3)Decrypt with assumptions\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            caesop=1;//just an initialised variable delete later
            //scanf("%d\n, &caesop");
            
            switch(caesop-1){
                            /*This is where the user has selected a task item from the caesar selection list*/
                case 0: printf("You have selected encrypt English text with a Caesar code!\n");
                
                        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                        Selection=1;
                        //write code to encrypt english text
                        
                    break;
                        
                case 1: printf("You have selected Decrypt with an algorithm, cipher text and key!\n");
                        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                        Selection=2;
                        //write code to decrypt text
                    break;
                
                case 2: printf("You have selected Decrypt with Assumptions!\n");
                        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                        Selection=3;
                        //write code to decrypt text
                    break;
                
                default: printf("Selection not recognised please select 1, 2 or 3");
                         printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                //Send back to previous menu
                    break;
                //Add go back option
                        }
                    
    } else if(number==2){
        printf("You have Selected the Substitution Cipher!\n");
    
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            
            printf("Please Select a Substitution cipher task\n");
            
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            
            printf("\t Substitution Cipher Option Menu\n"); 
            printf("\t~   1)Encrypt English Code with substitution cipher\n");
            printf("\t~   2)Decrypt with an algorithm, cipher text and key\n");
            printf("\t~   3)Decrypt with assumptions\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            subop=1; //just an initialisation value delete later
            /*scanf("%d\n", &subop);*/
           //Add in a go back option
           
            switch (subop-1){//if they select a substitution cipher
                case 0: printf("You have selected encrypt English text with Substition code!\n");
                        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                        Selection=4;
                    break;
                case 1: printf("You have selected decrypt text with an algorithm, cipher text and key!\n");
                        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                        Selection=5;
                    break;
                case 2: printf("You have selected decrypt text with assumptions!\n");
                        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                        Selection=6;
                    break;
                default:printf("Selection not recognised please select 1, 2 or 3");
                        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                    break;  
                    //Add go back option
                   }//switch ending
        
    }//else if ending
    /*..............................................................................................*/
   if(Selection==1){

       
       /*FILE *input;
       input=fopen("input.txt", "r"); //the file input is opened with the read function
       if (input==NULL){
           printf("Error: Failed to open file\n");
           return 0;
       }else{
           fgets(max, 20000, input);
           
        for(i=0, i<strlen(max); i++){
            printf("%c", EnglishText[i]);//prints the entered text back to them
           */
           
       printf ("Please enter English text to encrypt\n");
       gets(EnglishText);    
       printf("Please enter an encryption key\n");//user picks an amount to rotate the text by called a key
       scanf("%d", &key);
       printf("Youve selected an encryption key of %d\n", key);\
       
       EnglishText=CaesarEncrypt(char EnglishText, int key, i); //call the function that encrypts the message
    
	   printf("Encrypted message: %s\n", EnglishText);
//***********************************************************************************************************	
   
   }else if (Selection==2){
       printf("Please enter the encrypted message\n");
       gets(EnglishText);
	printf("Please enter a decryption key: ");
	scanf("%d", &key);
	
	for(i = 0; EnglishText[i] != '\0'; ++i){
		letter = EnglishText[i];
		
		if(letter >= 'a' && letter <= 'z'){
			letter = (letter-32) - key;
			
			if(letter < 'A'){
				letter = letter + 'Z' - 'A' + 1;
			}
			
			EnglishText[i] = letter;
		}
		else if(letter >= 'A' && letter <= 'Z'){
			letter = letter - key;
			
			if(letter < 'A'){
				letter = letter + 'Z' - 'A' + 1;
			}
			
			EnglishText[i] = letter;
		}
	}
	
	printf("Decrypted message: %s", EnglishText);
       
//****************************************************************************************************
   }else if (Selection==3){
//****************************************************************************************************
       
   }else if (Selection==4){
       printf("Please type English text to encrypt\n");
//****************************************************************************************************       
   }else if (Selection==5){
//****************************************************************************************************       
   }else if(Selection==6){
//****************************************************************************************************       
   }
	
    

   //ok here are all of the function definitions:
   
}//int main */

/*Caesar encryption function definition:
After taking a message and encryption key from the user the function 
is a loop that takes each letter and adds the encryption key to give
the new letter. The loop ends as long as the letter being analysed is
not the null character which signifies the end of the text*/
char CaesarEncrypt(char EnglishText[i], int key, int i){
    char letter;
    
        for(i=0; EnglishText[i] !='\0'; ++i){
            letter = EnglishText[i];
		
		if(letter >= 'a' && letter <= 'z'){
			letter = (letter-32) + key;
			
			if(letter > 'Z'){
				letter = letter - 'Z' + 'A' - 1;
			}
			
			EnglishText[i] = letter;
		}
		else if(letter >= 'A' && letter <= 'Z'){
			letter = letter + key;
			
			if(letter > 'Z'){
				letter = letter - 'Z' + 'A' - 1;
			}
			
			EnglishText[i] = letter;
		}
		
	} 
    
    return EnglishText;
}


