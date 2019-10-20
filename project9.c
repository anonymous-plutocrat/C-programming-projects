// This program calculates the focal length of a lens
#include <stdio.h>
#include <math.h>
int main (){
   float u,v,f;
   printf("Enter the object distance: ");
   scanf("%f",&u);
   printf("Enter the image distance: ");
   scanf("%f",&v);
   f = (u*v)/(v+u);
   printf("Object distance,u = %f\n",u);
   printf("Image distance,v = %f\n",v);
   printf("Focal length,f = %f",f);
    return 0;
}