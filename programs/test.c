#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/*
 One function will print all the lower case letters.
 One function will print all the upper case letters.
 One function will print total the number of vowels in the string.
 One function will save the number to an integer variable and pass it back to the main function(by reference) where it will be multiplied by 12 then printed out.
 
 //Sample output
 Enter a string less than 20 characters that includes one number.
 this IS my 2 STRING
 Lowercase letters:
 this my
 Uppercase letters:
 IS STRING
 Number of Vowels:
 4
 Number * 12 = 24
 */




int main()
{
    char string[21];
    printf("enter a string \n");
    //since it is a pointer dont need to put &
    fgets(string,sizeof(string), stdin);
    
    int i;
   for(i=0; i<21; i++){
       
       int temp= (int)string[i];
       
       if(temp>96 && temp<122){        // if the character is lower case ascII table
           
           printf("you have lower \n");
       }
       if(temp<96 && temp>64){        // if the character is upper case ascII table
           printf("you have upper \n");
       }
       if((string[i]=='a') || (string[i]=='A')|| (string[i]=='E')|| (string[i]=='e')|| (string[i]=='I')|| (string[i]=='i')|| (string[i]=='O')|| (string[i]=='o')|| (string[i]=='U')|| (string[i]=='u')){        // if the character is vowel A, E, I, O, U
           
           printf("you have a vowel \n");
           
       }
       if(isdigit(string[i])){        // if the character is a number
           puts("you have a number \n");
       }

       
}
    
    return 0;
}               // THIS IS TEMP TEST SO DELETE IT
/*
    int Lowercase(){
        
    }
    int Uppercase(){
        
    }
    int TotalVowel(){
        
    }
    int number(){
        
      // int *12
        
        //return number
    }

*/






