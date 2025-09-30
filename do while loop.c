//focus on variable which one is to be stay constant , which will change and on which condition to be applied

#include <stdio.h>

void main (){

int a,b=0;
printf("whats your number");
scanf("%d" , &a);

do
{
    b=b+1;
  int c = a*b;
    printf("%d \n" , c );
   
} while (b<10);

}
