#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// list of methods that will be used
    int printer(int answer);
    int calculate(int side1, int side2);
    int pythagorean1(void);
    int pythagorean2(void);

int main ()
{
    int element;
    int side1;
    int side2;
    
    side1=pythagorean1();
    side2=pythagorean2();
    
    element=calculate(side1,side2);
    printer(element);
   
    
    return 0;
}

int pythagorean1()
{
    int side1;
   
    
    printf("Enter the value for a side of a right triangle: \n");
    scanf(" %d",&side1);
    
    return side1;
}

int pythagorean2()
{
   
    int side2;
    
    printf("Enter the value for a side of a right triangle: \n");
    scanf(" %d",&side2);
    
    return side2;
}

int calculate(int side1, int side2)
{
    int total=0;
    
    total +=pow(side1, 2);
    total +=pow(side2, 2);
    total = sqrt(total);
    
    return total;
}


int printer(int element)
{
    printf("The hypotenuse is %d \n", element);
    return 0;
}







