#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float a;
    printf("enter your mark");
    scanf("%f",&a);
    if (a>=90)
    {
        printf("(A)");
    }
    else if (a>=80 && a <90)
    {
        printf("(B)");
    }
    else if (a>=70 && a <80)
    {
        printf("(C)");
    }
    else if (a>=60 && a <70)
    {
        printf("(D)");
    }
    else if ( a>=50 && a <60)
    {
        printf("(E)");
    }
    else {
        printf("(FAILED)");
        
    }
    
}