

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int limit,sum=0;
    printf("entert a  number");
    scanf("%d",&limit);
    for ( int i = 1; i < limit; i++)
    {
        if (i % 2 !=0)
        {
          sum += i;
        }
        
        
    }
     printf("sum of odd numbers in %d is %d:",limit,sum);
}






// confution