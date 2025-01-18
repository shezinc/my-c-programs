#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a,i,our;
  printf("enter a number");
  scanf("%d",&a);
  for ( i = 2; i <a/2; i++)
  {
    if (a%i==0)
    {
      our=1;
      break;
    }
    
  }
  if (our==0)
  {
    printf("prime");
  }else{
    printf("not prime");
  }
  
}
