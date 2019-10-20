// This program takes any integer at all and prints the second and third power.
#include <stdio.h>
#include <math.h>
int main (){
   int n,x,y;
   printf("Enter a number: ");
   scanf("%d",&n);
   printf("%d\n",n);
   x = n*n;
   printf("%d\n",x);
   y = x*n;
   printf("%d",y);
    return 0;
}