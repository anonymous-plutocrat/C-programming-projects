// This program just takes the value of a supplies the answer of b as square root of a and te answer of c as 'a' to the power of two divided by (b+1).
#include <stdio.h>
#include <math.h>
int main (){
    int a,b;
    float c;
    printf("Enter Value of Integer a");
    scanf("%d",&a);
    printf("a = %d  ",a);
    b = sqrt(a);
    printf("b = %d   ",b);
    c = sqrt(pow(a,2)/(b+1));
    printf("c = %f  ",c);
    return 0;
}