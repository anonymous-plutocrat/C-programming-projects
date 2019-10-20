// This program calculates linear equations.
#include <stdio.h>
#include <math.h>
int main (){
    float a1,b1,c1;
    float a2,b2,c2;
    float x,y;
    printf("Enter Value of a1: ");
    scanf("%f",&a1);
    printf("Enter Value of b1: ");
    scanf("%f",&b1);
    printf("Enter Value of constant: ");
    scanf("%f",&c1);
    printf("Enter Value of a2: ");
    scanf("%f",&a2);
    printf("Enter Value of b2: ");
    scanf("%f",&b2);
    printf("Enter Value of constant: ");
    scanf("%f",&c2);
    y = ((c1*a2)-(c2*a1))/((b1*a2)-(a1*b2));
    printf("the value of y = %f",y);
    x = (c2-(b2*y))/a2;
    printf(" the value of x = %f",x);
    return 0;
}
