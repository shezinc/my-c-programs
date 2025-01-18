#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a,b,choice,answer;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    printf("enter 1 for adition \n2 for subtraction \n3 for multiplication \n4 for divition");
    scanf("%d",&choice);
    if (choice==1)
    {
        answer=a+b;
    }else if (choice==2){
        answer=a-b;
    }else if (choice==3){
        answer=a*b;
    }else if (choice==4){
        answer=a/b;
    }else {
        printf("fool");
    }
    printf("answer=%d",answer);
    
    

}