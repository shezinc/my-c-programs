#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float mark;
    printf("enter your mark");
    scanf("%f",&mark);
    if (mark<50)
    {
        printf(" you are failed!!. better luck same time");
    }else{
        printf(" you are passed good!!!!");
    }
    
}