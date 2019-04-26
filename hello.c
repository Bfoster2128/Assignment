/*This code has 5 parts the first being (menu, caesar encryption, caesar decryption, substitution encryption, substitution decryption)
a menu which leads to the other 4 options*/


#include<stdio.h>
#include<string.h>

//function prototype for encrypting text with the caesar cipher
void CaesarEncrypt(char *EnglishText, int key);

//function prototype for decrypting text with the caesar cipher
void CaesarDecrypt(char *EnglishText, int key);

//function prototype for encrypting text with the substitution cipher
char *SubstitutionEncryption(char[]);

//function prototype for decrypting text with the substitution cipher
char *SubstitutionDecryption(char[]);

//initialisations for substitution code
char alphabet[26]/*the length is 26 chars for 26 letters*/={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char subkey[26];
char cipher_text[20000];
char *c_text;

int main()
{
/*.....................................*/
    /* Began by creating an interactive 
    MENU where the user could select theq
    cipher type they wanted*/
   //These initialised values are added to throughout the coding proccess not all at once
   
   //Variables to set up menu with
   int number=2;
   int caesop=1;
   int subop=1;
   int Selection;
   
   //variables needed for reading text from a file
   char EnglishText[20000];
   int key;
   
   
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
            subop=2; //just an initialisation value delete later
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

       printf ("Please enter English text to encrypt then tab\n");
       
       scanf("%[^\t]s", EnglishText); 
       char tmp;
       scanf("%c", &tmp); // Read the stray newline character
           
       printf("Please enter an encryption key\n");//user picks an amount to rotate the text by called a key
       scanf("%d", &key);
       printf("Youve selected an encryption key of %d\n", key);
       CaesarEncrypt(EnglishText,key); //call the function that encrypts the message
    
	   printf("Encrypted message: %s\n", EnglishText);
	   printf("\n");
//***********************************************************************************************************	
   
   }else if (Selection==2){
    printf("Please enter the encrypted message: \n");
    scanf("%[^\t] s", EnglishText);
	printf("Please enter a decryption key: ");
	scanf("%d", &key);
	
	CaesarDecrypt(EnglishText, key);//call the function that decrypts the text
	
	printf("\nDecrypted message: %s\n", EnglishText);
       
//****************************************************************************************************
   }else if (Selection==3){
//****************************************************************************************************
     //substitution encryption option  
   }else if (Selection==4){
       printf("Please type English text to encrypt\n");
       scanf("%[^\t]", cipher_text);
       
       
        printf("Please enter 26 upper case letters:"); //these letters are the encryption key
        scanf("%s", subkey);//saves these into the array substitution key
        printf("\nABCDEFGHIJKLMNOPQRSTUVWXYZ\n");
        printf("||||||||||||||||||||||||||");
        printf("\n%s\n", subkey);
        
        c_text=SubstitutionEncryption(cipher_text);
        
       
       
//****************************************************************************************************       
   //Substitution decryption option
   }else if (Selection==5){
       printf("Please type English text to decrypt\n");
       scanf("%[^\t]s", subkey);
       
        printf("Please enter 26 upper case letters:"); //these letters are the encryption key
        scanf("%s", subkey);//saves these into the array substitution key
        printf("\nABCDEFGHIJKLMNOPQRSTUVWXYZ\n");
        printf("||||||||||||||||||||||||||");
        printf("\n%s\n", subkey);
        
        c_text=SubstitutionDecryption(cipher_text);
       
       
//****************************************************************************************************       
   }else if(Selection==6){
//****************************************************************************************************       
   }
	
    

   
}//int main */

//***************************************************************************************************************

   //ok here are all of the function definitions:

/*Caesar encryption function definition:
After taking a message and encryption key from the user the function 
is a loop that takes each letter and adds the encryption key to give
the new letter. The loop ends as long as the letter being analysed is
not the null character which signifies the end of the text*/
void CaesarEncrypt(char *EnglishText, int key) {
    char letter;
    int i;
    
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
}

//*****************************************************************************************************

/*function that decrypts the input text by analysing each letter and does a conversion
if the letter is lowercase to upercase*/
void CaesarDecrypt(char *EnglishText, int key){
    char letter;
    int i;
    
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
    
} 
//*************************************************************************************************************
//The definition for a substitution cipher that encrypts the message:
char *SubstitutionEncryption(char cipher_text[]){
    
    int i1;// counts the increment of text
    int i2;//counts the alphabet and key
    char text[20000];
    
   
    
    for(i1=0; i1<strlen(cipher_text); i1++){
        for(i2=0; i2<26; i2++){
            if(alphabet[i2]==cipher_text[i1]){
                cipher_text[i1]=subkey[i2];
                break;
            }  
        }
    }
    printf("Encrypted message: %s", cipher_text);
    return cipher_text;
}

//*************************************************************************************************************

//The definition for a substitution cipher that decrypts the message:
 char *SubstitutionDecryption(char cipher_text[]){
    int i1;
    int i2;
    char cipher[20000]; //the variable of the encrypted text 
    for(i1=0;i1<strlen(cipher);i1++){
        for(i2=0; i2<26; i2++){
            if (cipher[i1]==alphabet[i2]){
                cipher[i1]=alphabet[i2];
                break;
            }
        }
    }
    printf("\n Decryption Text: %s", cipher_text);
    
}


