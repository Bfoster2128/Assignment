/*This code is used to encrypt and decrypt text using Caesar (rotation) and substitution ciphers. 
The code is composed of 5 core sections as of its completion, thde menu, encryption and decryption 
with Caesar cipher and encryption and decryption of text using the substitution cipher. The menu is 
written entirely in int main however the ciphers are seperated into functions and called upon 
throughout the code*/

//Necessary header files for use of scanf and printf and use of strings
#include<stdio.h>
#include<string.h>

//function prototype for encrypting text with the caesar cipher
void CaesarEncrypt(char *EnglishText, int key);

//function prototype for decrypting text with the caesar cipher
void CaesarDecrypt(char *EnglishText, int key);

//function prototype for encrypting text with the substitution cipher
char *SubstitutionEncryption(char[]);

//function prototype for decrypting text with the substitution cipher
void *SubstitutionDecryption(char[]);

//initialisations for substitution code
char alphabet[26]/*the length is 26 chars for 26 letters*/={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char subkey[26];//substitution encryption key which is 26 chars long
char cipher_text[20000];//reads a max amount of 20000 characters
char *c_text;


int main()
{
/*.....................................*/
    /* Began by creating an interactive 
    MENU where the user could select the
    cipher type they wanted*/
   //These initialised values are added to throughout the coding proccess not all at once
   
   //Variables to set up menu with
   int number;
   int caesop;
   int subop;
   int Selection;
   char EnglishText[20000];
   int key;// rotation encryption key
   
   
   //These printf statements left the user know what their options are
    printf("\tPlease select a Cipher\n"); /* '\t' makes the text tabbed and more presentable*/
    printf("\t~   1) Caesar Cipher       ~\n");
    printf("\t~   2) Substitution Cipher ~\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    scanf("%d", &number); /*scan the users answer*/

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
            scanf("%d", &caesop);
            
            switch(caesop-1){
                            /*This is where the user has selected a task item from the caesar selection list*/
                case 0: printf("You have selected encrypt English text with a Caesar code!\n");
                
                        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                        Selection=1;
                        //sends to code which encrypts text with caesar cipher
                        
                    break;
                        
                case 1: printf("You have selected Decrypt with an algorithm, cipher text and key!\n");
                        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                        Selection=2;
                        //sends to code that decrypts caesar text with key 
                    break;
                
                case 2: printf("You have selected Decrypt with Assumptions!\n");
                        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                        Selection=3;
                        //sends person along line to the code which decrypts caesar text with assumptions
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
            scanf("%d", &subop);
           //Add in a go back option
           
            switch (subop-1){//if they select a substitution cipher
                case 0: printf("You have selected encrypt English text with Substition code!\n");
                        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                        Selection=4;// sends to encryption with substitution cipher
                    break;
                case 1: printf("You have selected decrypt text with an algorithm, cipher text and key!\n");
                        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                        Selection=5;// sends to code which decrypts substitution text with a key
                    break;
                case 2: printf("You have selected decrypt text with assumptions!\n");
                        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                        Selection=6;//sends to code which decrypts substitution text with assumptions
                    break;
                default:printf("Selection not recognised please select 1, 2 or 3");
                        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                    break;  
                
                   }//switch ending
        
    }else{
        printf("Selection not recognised please select either 1 or 2");
    }//default ending
    /*..............................................................................................*/
   if(Selection==1){

       printf ("Please enter English text to encrypt then tab\n");
       
       scanf("%[^\t]s", EnglishText); //scans in text, the '%[^\t]' reads white space and exits out after tabbing then entering
       char tmp;
       scanf("%c", &tmp); // Read the stray newline character
           
       printf("Please enter an encryption key\n");//user picks an amount to rotate the text by called a key
       scanf("%d", &key); //entered number is saved to key variable
       printf("Youve selected an encryption key of %d\n", key);
       CaesarEncrypt(EnglishText,key); //call the function that encrypts the message
    
	   printf("Encrypted message: %s\n", EnglishText);//prints the message
	   printf("\n");
//***********************************************************************************************************	
   
   }else if (Selection==2){
    printf("Please enter the encrypted message then tab and enter: \n");
    scanf("%[^\t]s", EnglishText);//scans in message with white space
	printf("Please enter a decryption key: ");
	scanf("%d", &key);//saves to key
	
	CaesarDecrypt(EnglishText, key);//call the function that decrypts the text
	
	printf("\nDecrypted message: %s\n", EnglishText);
       
//****************************************************************************************************
   }else if (Selection==3){
       
       printf("This line of code is incomplete please select another option\n");
       
//****************************************************************************************************
     //substitution encryption option  
   }else if (Selection==4){
       printf("Please type English text in UPPER CASE letters to encrypt then tab and enter\n");
       scanf("%[^\t]", cipher_text);
       
       
        printf("Please enter 26 UPPER CASE letters:"); //these letters are the encryption key
        scanf("%s", subkey);//saves these into the array substitution key
        printf("\nOriginal Alphabet: ABCDEFGHIJKLMNOPQRSTUVWXYZ\n");//prints the alphabet to show which letters align with each other
        printf("\nEncrypted Alphabet:%s\n", subkey);//prints the new key alphabet
        
        c_text=SubstitutionEncryption(cipher_text);//calls the function
        
        printf("\n");
        
       
       
//****************************************************************************************************       
   //Substitution decryption option
   }else if (Selection==5){
       printf("Please type UPPPER CASE English text to decrypt then tab and enter\n");
       scanf("%[^\t]s", subkey);//saves entered text to subkey with white space
       
        printf("Please enter 26 upper case letters:"); //these letters are the encryption key
        scanf("%s", subkey);//saves these into the array substitution key
        printf("\nOriginal Alphabet:ABCDEFGHIJKLMNOPQRSTUVWXYZ\n");//prints the alphabet to show which letters align with the key
        printf("\nEncrypted Alphabet: %s\n", subkey);//prints new alphabet
        
        c_text=SubstitutionDecryption(cipher_text);//calls the function
        
        printf("\n");
       
       
//****************************************************************************************************       
   }else if(Selection==6){
       
       printf("This line of code is incomplete please select another option\n");
       
//****************************************************************************************************       
   }
	
    

   
}//end of int main */

//***************************************************************************************************************

   //ok here are all of the function definitions:

/*Caesar encryption function definition:
After taking a message and encryption key from the user the function 
is a loop that takes each letter and adds the encryption key to give
the new letter. The loop ends as long as the letter being analysed is
not the null character which signifies the end of the text*/
void CaesarEncrypt(char *EnglishText, int key) {//function with return type void, name English text and argument english text and key
    char letter;
    int i;//local variable index which counts each letter in the text
    
        for(i=0; EnglishText[i] !='\0'; ++i){//loop for each letter until the end null character'\0'
            letter = EnglishText[i];//assigns array element to variable letter
		
		if(letter >= 'a' && letter <= 'z'){//loop that assesses all characters between a & z
			letter = (letter-32) + key;//(-32) converts to upper case letter and + key adds the encryption
			
			if(letter > 'Z'){//if the letter goes outside of the ascii range it is looped back to the start of the alphabet
				letter = letter - 'Z' + 'A' - 1;
			}
			
			EnglishText[i] = letter;
		}
		else if(letter >= 'A' && letter <= 'Z'){//assesses all characters from A to Z
			letter = letter + key;//adds encryption key
			
			if(letter > 'Z'){
				letter = letter - 'Z' + 'A' - 1;//loops back to start of alphabet for letters that go past Z
				
			}
			
			EnglishText[i] = letter;
		}
		
	} 
}

//*****************************************************************************************************

/*function that decrypts the input text by analysing each letter and does a conversion
if the letter is lowercase to upercase. The code then deducts the entered encryption key 
from each letter and then prints it. This code is ceratecd so that only letters are 
decrypted and punctuation is left the same.*/
void CaesarDecrypt(char *EnglishText, int key){
    char letter;
    int i;//variable of index that counts each letter
    
    for(i = 0; EnglishText[i] != '\0'; ++i){//loop until the end of text aka the null character
		letter = EnglishText[i];
		
		if(letter >= 'a' && letter <= 'z'){//assesses from a to z
			letter = (letter-32) - key;//converts to uppercase using (-32) and deducts encryption key
			
			if(letter < 'A'){
				letter = letter + 'Z' - 'A' + 1;//loops letters back to the start if they go past Z
			}
			
			EnglishText[i] = letter;
		}
		else if(letter >= 'A' && letter <= 'Z'){//assesses from A to Z
			letter = letter - key;//deducts the encryption key
			
			if(letter < 'A'){
				letter = letter + 'Z' - 'A' + 1;//loops back to beginning of the alphabet
			}
			
			EnglishText[i] = letter;
		}
	}
    
} 
//*************************************************************************************************************
/*
 This function encrypts text using a substitution cipher. It assesses each element of the inputted text and
 allocates it to another letter determined by the key inputted by the user. It then replaces the english text
 with the encrypted letter and prints it.
 */
//The definition for a substitution cipher that encrypts the message:

char *SubstitutionEncryption(char cipher_text[]){//function name
    
    int i1;// counts the increment of text
    int i2;//counts the alphabet and key
    char text[20000];
    
   
    
    for(i1=0; i1<strlen(cipher_text); i1++){//assesses for each element of the text as long as it is less than the string length or the null character
        for(i2=0; i2<26; i2++){//loop for the first alphabet element, and all elements below 26 and increment at the end of the loop 
            if(alphabet[i2]==cipher_text[i1]){
                cipher_text[i1]=subkey[i2];
                break;
            }  
        }
    }
    printf("Encrypted message: %s", cipher_text);//prints the encrypted text
    return cipher_text;
}

//*************************************************************************************************************
/*
 This function decrypts text that was encrypted with the substitution cipher. It assesses every letter of the 
 encrypted code and assigns it to letter of the alphabet. it then replaces the encrypted letter with the letter
 of the alphabet and reveals the english text
 */
//The definition for a substitution cipher that decrypts the message:
 void *SubstitutionDecryption(char cipher_text[]){//function name
    int i1;//counts the increment of the text
    int i2;//counts increment of alphabet and key
    char cipher[20000]; //the variable of the encrypted text 
    
    
    for(i1=0;i1<strlen(cipher);i1++){//loop for each letter of the text as long as it is less than the string length or null character
        for(i2=0; i2<26; i2++){//assesses for all characters of the alphabet
            if (cipher[i1]==alphabet[i2]){
                cipher[i1]=alphabet[i2];
                break;
            }
        }
    }
    printf("\n Decryption Text: %s", cipher);//prints decryption
    
}