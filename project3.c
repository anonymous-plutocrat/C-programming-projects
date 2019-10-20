//This program calculates the force of a particular mass of object.
#include <stdio.h>
#define g 10
int main (){
    int w,m;
    printf("Insert the mass value");
    scanf("%d",&m);
    w = m * g;
    printf("The force of object of mass");
    printf(" %d",m);
    printf(" is %d",w);
    return 0;
}
