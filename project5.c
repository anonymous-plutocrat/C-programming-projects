// This proogram calculates the area of a triangle and also notice the way i wrote the final answer it's really primitive but if you go through the next projects you'll see when i did it right.
#include <stdio.h>
#include <math.h>
int main (){
    float a,b,c,S,area;
    printf("Enter Value of a: ");
    scanf("%f",&a);
    printf("Enter Value of b: ");
    scanf("%f",&b);
    printf("Enter Value of c: ");
    scanf("%f",&c);
    S = ((a+b+c)/2);
    area = sqrtf(S*(S-a)*(S-b)*(S-c));
    printf("The area of triangle of sides");
    printf(" %f ",a);
    printf("%f ",b);
    printf("%f ",c);
    printf("is %f ",area);
    printf("sq. units.");
    return 0;
}