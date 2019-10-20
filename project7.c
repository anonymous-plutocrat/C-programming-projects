// This program takes any 3 numbers and calculates the product the sum and also te difference, remember wen I told you that i would fix the way answers appear the way the final answer here was produced is the right way to go about it.

#include <stdio.h>
#include <math.h>
int main (){
   int a,b,c,p,s,d;
   printf("Input the three numbers:");
   scanf("%d%d%d",&a,&b,&c);
   p = a*b*c;
   s = a+b+c;
   d = p - s;
   printf("The product of %d%s%d%s%d%s%d%s",a,"x",b,"x",c," is ",p,"\n");
   printf("The sum of %d%s%d%s%d%s%d%s",a,"+",b,"+",c," is ",s,"\n");
   printf("difference = %d%s%d%s%d",p," - ",s," = ",d);
    return 0;
}