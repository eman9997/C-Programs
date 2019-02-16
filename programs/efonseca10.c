
/*
    Fonseca, Emanuel
    CSC - 251
    Lab 10
    03/06/2018
*/


#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define SIZE 40


void ZeroBalance(void);
void Total(void);
void Menu();
void Positive(void);
void Negative(void);


int main()
{
  Menu();

}

void Menu()
{
  int choice;

  while(choice != 5)
  {

    puts("Menu: ");
    printf("1- Display all positive balance accounts. \n");
    printf("2- Display all negative balance accounts.\n");
    printf("3- Display all zero balance accounts.\n");
    printf("4- Display the total of all balance.\n");
    printf("5- Exit.\n");

    scanf("%d", &choice);

    switch(choice)
      {

      case 1:
          Positive();
          break;
      case 2:
          Negative();
          break;
      case 3:
          ZeroBalance();
          break;
      case 4:
          Total();
          break;
      case 5:
          exit(0);
          break;
      default:
          puts("Selection must be between 1 - 5");
          puts("Going back to Menu");
          break;
     }

  }

}

void Positive(void)
{

  FILE *rptr;
  char name[SIZE];
  int accountNumber;
  double accountBalance;

  if((rptr = fopen("data.txt", "r")) == NULL){
      puts("File could not be opened");
  }
  else{
        while(!feof(rptr)){

            fscanf(rptr, "%d%s%lf", &accountNumber, name, &accountBalance);

        if(accountBalance > 0){
            printf("%d %s %lf \n", accountNumber, name, accountBalance);
          }
  }

  fclose(rptr);
  }
}

void Negative(void)
{

    FILE *rptr;
    char name[SIZE];
    int accountNumber;
    double accountBalance;
    
    if((rptr = fopen("data.txt", "r")) == NULL)
    {
        puts("File could not be opened");
    }
    else
    {
        while(!feof(rptr)){
            
            fscanf(rptr, "%d%s%lf", &accountNumber, name, &accountBalance);
            
            if(accountBalance < 0){
                printf("%d %s %lf \n", accountNumber, name, accountBalance);
            }
        }
        
        fclose(rptr);
    }
}

void ZeroBalance(void)
{

    FILE *rptr;
    char name[SIZE];
    int accountNumber;
    double accountBalance;
    
    if((rptr = fopen("data.txt", "r")) == NULL)
    {
        
        puts("File could not be opened");
    }
    else
    {
        while(!feof(rptr)){
            
            fscanf(rptr, "%d%s%lf", &accountNumber, name, &accountBalance);
            
            if(accountBalance == 0 || accountBalance == 0.0){
                printf("%d %s %lf \n", accountNumber, name, accountBalance);
            }
        }
        
        fclose(rptr);
    }
}

void Total(void)
{

    FILE *rptr;
    char name[SIZE];
    int accountNumber;
    double accountBalance;
    double total = 0.0;

    if((rptr = fopen("data.txt" , "r")) == NULL)
    {

        puts("File could not be not be opened");
    }
    else
    {
        while(!feof(rptr)){
            fscanf(rptr, "%d%s%lf", &accountNumber, name, &accountBalance);

            total += accountBalance;
        }

        printf("The total of all balances: %.2f \n", total);
        fclose(rptr);
    }

}


