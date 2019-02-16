#include <stdio.h>
#include <stdlib.h>




int main (void)
{
    int i=0;
    int k=4;
    int j=0;
    int w=0;
    int temp[]={0,0,0,0,0};
    int firstArray[]={2,4,6,8,10};
    int secondArray[]={1,3,5,7,9};
    
    printf("Before Swap \n");
    
    for (j=0;j<5;j++) {
        printf("firstArray[%d] = %d, secondArray[%d] = %d \n", j, firstArray[j],j,secondArray[j]);
    }
    
    
    
    for(i=0; i<5; i++){
        temp[i]= firstArray[i];
        firstArray[i]=secondArray[i];
        secondArray[i]=temp[i];
        
    }
    
    
    
    printf("After Swap \n");
    
    for (w=0;w<5;w++)
    {
        printf("firstArray[%d] = %d, secondArray[%d] = %d \n", w, firstArray[w],w,secondArray[w]);
        
    }
    
    
    return 0;
}










