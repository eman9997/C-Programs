#include <stdio.h>
#include <stdlib.h>

        //mechanics
    char grade;
    double counter=0;
    double gpa=0;

        //grade count
    int countA=0;
    int countB=0;
    int countC=0;
    int countD=0;
    int countF=0;

int main (void) {

   /* local variable definition */

printf("Enter a letter grade (press z to quit): \n");
    
    while (grade !='z')
	 {
         scanf(" %c", &grade);
         
    
            if(grade =='a' || grade=='A')
             {
                 gpa += 4;
                 counter++;
                 countA++;
                 printf("Enter a letter grade (press z to quit): \n");
             }
         
            if(grade =='b' || grade =='B')
             {
                 gpa += 3;
                 counter++;
                 countB++;
                 printf("Enter a letter grade (press z to quit): \n");
             }
         
             if(grade =='c' || grade =='C')
             {
                 gpa += 2;
                 counter++;
                 countC++;
                 printf("Enter a letter grade (press z to quit): \n");
             }
         
            if(grade =='d' || grade =='D')
             {
                 gpa +=1;
                 counter++;
                 countD++;
                 printf("Enter a letter grade (press z to quit): \n");
             }
         
             if(grade =='f' || grade =='F')
             {
                 
                gpa += 0;
                 counter++;
                 countF++;
                 printf("Enter a letter grade (press z to quit): \n");
             }
		
	 }
	
   gpa = gpa / counter;
   printf("The class average is %f \n", gpa);
   printf("There are %d A's, %d B's, %d C's, %d D's, and %d F's \n", countA,countB,countC,countD,countF);
 
    
   return 0;
}
