
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <strings.h>
#define SIZE 400


int main(int argc, char *argv[]){
    
    
    char line[SIZE];
    FILE *inPtr;
    FILE *outPtr;
    int pick, c, flag, i;
    int index;
    
    if(argc != 3)
    {
        puts("Invalid number of arguments!");
        exit(1);
    }
    
    printf("\nChoose an option below to modifyy your wordlist");
    printf("\n1. Change the first letter to a capital letter.");
    printf("\n2. Make lowercase");
    printf("\n3. Make uppercase");
    printf("\n4. Duplicate each word 10 times and displayt he word with it's duplicate # after it.\n");
    
    scanf("%d", &pick);
    
    if((inPtr = fopen(argv[1], "r")) != NULL)
    {
        outPtr = fopen(argv[2], "w");
        
        switch(pick)
        {
                
            case 1:
                flag = 1;
                while((c = getc(inPtr)) != EOF)
                {
                    if(flag)
                    {
                        putc(toupper(c), outPtr);
                        flag = 0;
                    }
                    else
                    {
                        putc(c, outPtr);
                    }
                    if(c == ' ' || c == '\n'){
                        flag = 1;
                    }
                    
                }
                break;
                
            case 2:
                while((c = getc(inPtr)) != EOF)
                {
                    putc(tolower(c), outPtr);
                }
                break;
                
            case 3:
                while((c = getc(inPtr)) != EOF)
                {
                    putc(toupper(c), outPtr);
                }
                break;

            case 4:
                index = 0;
                while((c = getc(inPtr)) != EOF)
                {
                    line[index++] = c;
                    if(c == ' ' || c == '\t' || c == '\n')
                    {
                        line[index] = '\0';
                        for(i = 0; i<10; i++)
                        {
                            fprintf(outPtr, "%s%d \n", line, i);
                        }
                        index = 0;
                    }
                }
                
                break;
            default:
                puts("ERROR");
                break;
        }
        fclose(outPtr);
    }
    else
    {
        printf("%s Can not be opened \n", argv[1]);
    }
    fclose(inPtr);
    printf("\nWordlist complete. Check <outfile.txt> for results.\n");
}

