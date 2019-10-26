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

    for(i=1; i<=ask ; i++) {

        printf("Enter your grade for course %d: ", i);
        scanf("%s", &grade);
        printf("Enter its unitload: ");
        scanf("%f", &unit_load);
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
printf("Your first semester gp is %.2f\n\n", gp1);
 printf("FOR SECOND SEMESTER:\n");

    printf("How many courses are you offering : ");
    scanf("%d", &ask);

    for(i=1; i<=ask; i++)
    {
        printf("Enter grade for course %d: ", i);
        scanf("%s", &grade);
        printf("Enter its unitload\n");
        scanf("%f", &unit_load);
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
    printf("YOUR CGPA FOR THE SESSION IS %.2f", CGPA);
    
    if(CGPA >=4.5 && CGPA <=5.0){
    printf("\nIt lies within the First Class Range\n");
    }

    else if(CGPA >=3.5 && CGPA < 4.5){
    printf("\nIt lies within the Second Class Upper Range\n");
    }

    else if(CGPA >=2.5 && CGPA < 3.5){
    printf("\nIt lies within the Second Class lower Range\n");
    }

    else if(CGPA >=1.5 && CGPA <2.5){
    printf("\nIt lies within the Third Class Range\n");
    }

    else{
    printf("\nIt lies within the Pass Range\n");
    }
    return 0;
}
