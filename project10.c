// This is a GPA and CGPA calculator 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;
    int ask = 0 , i;
    float multiplier = 0, total, total2=0, totalunitload=0, gp1,gp2,CGPA,unit_load = 0;
    printf("GP CALCULATOR FOR A SESSION\n\n");
     printf("FOR FIRST SEMESTER:\n");
    printf("How many courses are you offering : ");
    scanf("%d", &ask);

    for(i=0; i<=ask ; i++) {

        printf("Enter your grade: ");
        scanf("%s", &grade);
        printf("Enter its unitload: ");
        scanf("%d", &unit_load);
        if (grade == 'A' || grade == 'a') { multiplier = 5; }
        if (grade == 'B' || grade == 'b') { multiplier = 4; }
        if (grade == 'C' || grade == 'c') { multiplier = 3; }
        if (grade == 'D' || grade == 'd') { multiplier = 2; }
        if (grade == 'E' || grade == 'e') { multiplier = 1; }
        if (grade == 'F' || grade == 'f') { multiplier = 0; }


        total = multiplier * unit_load;
        total2 += total;
        totalunitload += unit_load;
        gp1 = total2 / totalunitload;
    }
printf("Your first semester gp is %.3f\n\n", gp1);
 printf("FOR SECOND SEMESTER:\n");

    printf("How many courses are you offering : ");
    scanf("%d", &ask);

    for(i=0; i<=ask; i++)
    {
        printf("Enter grade for course %d:\n", ask);
        scanf("%s", &grade);
        printf("Enter its unitload\n");
        scanf("%d", &unit_load);
        if(grade=='A'||grade=='a'){multiplier=5;}
        if(grade=='B'||grade=='b'){multiplier=4;}
        if(grade=='C'||grade=='c'){multiplier=3;}
        if(grade=='D'||grade=='d'){multiplier=2;}
        if(grade=='E'||grade=='e'){multiplier=1;}
        if(grade=='F'||grade=='f'){multiplier=0;}

        total=multiplier*unit_load;
        total2+=total;
        totalunitload+=unit_load;
        gp2=total2/totalunitload;
    }
    printf("Your second semester gp is %.3f\n\n", gp2);

    CGPA=(gp1+gp2)/2;
    printf("YOUR CGPA FOR THE SESSION IS %.3f", CGPA);

    return 0;
}