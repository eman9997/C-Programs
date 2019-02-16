/*
  
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

// My globals
// need for stream selection
int counter;
int selection(void);
FILE *filein;
FILE *fileout;
int pick;
void Choice1(FILE *filein, FILE *fileout);
void Choice2(FILE *filein, FILE *fileout);
void Choice3(FILE *filein, FILE *fileout);
void Choice4(FILE *filein, FILE *fileout);



int main(int argc, char *argv[])
{
    
    
    
    if(argc == 3)
    {
        if((filein = fopen(argv[1],"r")) == NULL)
        {
            printf("cannot open %s   \n ",argv[1]);
        }
        else
        {
            if((fileout = fopen(argv[2],"w")) == NULL)
            {
                printf("cannot open %s   \n ",argv[2]);
            }
            else  // my menu begins
            {
                pick = selection();
                switch(pick)
                {
                    case 1:
                        Choice1(filein, fileout);
                        break;
                    case 2:
                        Choice2(filein,fileout);
                        break;
                    case 3:
                        Choice3(filein,fileout);
                        break;
                    case 4:
                        Choice4(filein,fileout);
                        break;
                    default:
                       
                        break;
                }
            }
        }
        fclose(filein);
        fclose(fileout);
    }
    
}

void Choice4(FILE *filein, FILE *fileout)
{
    char inputStream[256];
    int i;
    while(fscanf(filein,"%s",inputStream) != EOF)
    {
        for(i=1;i<11;i++)
        {
            fprintf(fileout,"%s:%d\n",inputStream,i);
        }
    }
}

void Choice3(FILE *filein, FILE *fileout)
{
    char inputStream[300];
    int i;
    
    while(fgets(inputStream,sizeof(inputStream),filein))
    {
        for(i=0;inputStream[i];i++)
        {
            inputStream[i] = toupper(inputStream[i]);
        }
        fprintf(fileout," %s",inputStream);
    }
}

void Choice2(FILE *filein, FILE *fileout)
{
    char inputStream[300];
    int i;
    
    while(fgets(inputStream,sizeof(inputStream),filein))
    {
        for(i=0;inputStream[i];i++)
        {
            inputStream[i] = tolower(inputStream[i]);
        }
        fprintf(fileout," %s",inputStream);
    }
}

void Choice1(FILE *filein, FILE *fileout)
{
    char inputStream[300];
    
    while(fgets(inputStream,sizeof(inputStream),filein))
    {
        inputStream[0]=toupper(inputStream[0]);
        fprintf(fileout," %s",inputStream);
    }
}

int selection(void)
{
    int pick2;
    printf( "\n  Enter your pick   \n");
    puts("1 - Change the first letter to a capital letter\n");
    puts("2 - Make lowercase");
    puts("3 - Make uppercase");
    puts("4 - Multiply each word 10 times and display it");
    scanf("%d", &pick);
    
    return pick2;
}

