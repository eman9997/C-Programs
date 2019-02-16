// Emanuel Fonseca
// CSC 255 C AND UNIX

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void Lowercase(char letter);
void Uppercase(char letter);
int TotalVowel(void);
void number(int num);

int Lowercounter=0;
int Uppercounter=0;
int vowelCounter=0;
char new[20];
char new2[20];
int num;




int main()
{
    
    int i;
    char letter;
    char string[21];
    printf("enter a string \n");
    fgets(string,sizeof(string), stdin);
    
    
   for(i=0; i<21; i++){
       
       int temp= (int)string[i];
       
       if(temp>96 && temp<122) // if the character is lower case ascII table
       {
           Lowercase(string[i]);
       }
       
       if(temp<96 && temp>64) // if the character is upper case ascII table
       {
           Uppercase(string[i]);
       }
       
       if((string[i]=='a') || (string[i]=='A')|| (string[i]=='E')|| (string[i]=='e')|| (string[i]=='I')|| (string[i]=='i')|| (string[i]=='O')|| (string[i]=='o')|| (string[i]=='U')|| (string[i]=='u'))
       {
           TotalVowel();
       }
       
       if(isdigit(string[i])) // if the character is a number
       {
           
          num=atoi(&string[i]);  // change to number
           number(num);
       }
       
   }
    printf("Lowercase letters: \n");
    printf(" %s \n",new);
    printf("Uppercase letters: \n");
    printf(" %s \n",new2);
    puts("Number of Vowels: \n");
    printf(" %d \n",vowelCounter);
    printf("Number * 12= %d \n", num);
    return 0;
}


    void Lowercase(char letter)
    {
        char tmp=letter;
        
        new[Lowercounter]=tmp;
        ++Lowercounter;
    }

    void Uppercase(char letter)
    {
        char tmp2=letter;
       
        int number=Uppercounter;
        new2[Uppercounter]=tmp2;
        ++Uppercounter;
    }

    int TotalVowel(void)
    {
        vowelCounter++;
        return 0;
    }

    void number(int Num)
    {
        num *=12;
    }







