// This program calculates te exchange rate between naira and dollar

#include <stdio.h>
#define nair 148
int main (){
    int mulla,m;
    printf("Insert the dollar amount");
    scanf("%d",&m);
    mulla = m * nair;
    printf("The naira amount of ");
    printf("%d",m);
    printf(" is %d",mulla);
    return 0;

}