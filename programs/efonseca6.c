#include <stdio.h>
#include <stdlib.h>

        //mechanics
    int printer(void);
    int roll(int Dicerolls);
    int prompt(void);
    int Dicerolls;
    int counter=0;

        //count time Dice landed on a side
    int countOnes=0;
    int countTwos=0;
    int countThree=0;
    int countFour=0;
    int countFive=0;
    int countSix=0;
    int countSeven=0;
    int countEight=0;
    int countNine=0;
    int countTen=0;


int main (void)
{
    
    Dicerolls=prompt();
    roll(Dicerolls);
    printer();
    
 
   return 0;
}

int prompt(void)
{
    int HowMany;
    
    printf("How many time would you like to roll the 10 sided die? \n");
    scanf(" %d", &HowMany);
    return HowMany;
    
}

int roll(int Dicerolls)
{
    
    while (counter !=Dicerolls)
    {
        int r = rand() % 10 + 1; // generates random number
        
        if(r ==1)
        {
            counter++;
            countOnes++;
            
        }
        if(r ==2)
        {
            
            counter++;
            countTwos++;
            
        }
        if(r ==3)
        {
            
            counter++;
            countThree++;
            
        }
        if(r ==4)
        {
            
            counter++;
            countFour++;
            
        }
        if(r ==5)
        {
            
            counter++;
            countFive++;
            
        }
        if(r ==6)
        {
            
            counter++;
            countSix++;
            
        }
        if(r ==7)
        {
            
            counter++;
            countSeven++;
            
        }
        if(r ==8)
        {
            
            counter++;
            countEight++;
            
        }
        if(r ==9)
        {
            
            counter++;
            countNine++;
            
        }
        if(r ==10)
        {
            
            counter++;
            countTen++;
            
        }
        
        
    }
    
    return 0;
}
int printer(void)
{
    
    printf(" %d ones \n", countOnes);
    printf(" %d twos \n", countTwos);
    printf(" %d threes \n", countThree);
    printf(" %d fours \n", countFour);
    printf(" %d fives \n", countFive);
    printf(" %d sixes \n", countSix);
    printf(" %d sevens \n", countSeven);
    printf(" %d eights \n", countEight);
    printf(" %d nines \n", countNine);
    printf(" %d tens \n", countTen);
    
    return 0;
}








