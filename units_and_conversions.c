// kilometers to miles
// inches to foot
// centimeter to inches
// pound to kgs
// inches to meters

#include <stdio.h>

int main(){
    int units;
    int case1;
    int case2;
    int case3;
    int case4;
    int case5;
    float Kilometer;
    float Miles;
    float inches;
    float foot;
    float centimeter;
    float kgs;
    float pound;
    float meter;
    
   label1:
   printf("\n");
     printf("Program to convert units and mesurement\n");
    printf("\t Enter '1' for Kilometers to miles\n");
    printf("\t Enter '2' for Inches to foot\n");
    printf("\t Enter '3' for Centimeter to inches\n");
    printf("\t Enter '4' for Pound to Kilograms\n");
    printf("\t Enter '5' for Inches to miles\n");
    
    printf("\t \t \t \t \t \t \t \t \t [If you want to quit press any other numbers]\n");
    scanf("%d",&units);
    


     switch (units)
     {
     case 1: 
        printf(" \t Enter Kilometer value.\n");
        scanf("%f",&Kilometer);
        float Miles = Kilometer / 1.6;
        printf("\t Value in miles: %f\n",(float) Miles); 
        goto label1;
     case 2:
        printf("\t Enter inches value.\n");
        scanf("%f",&inches);
        float foot = inches / 12;
        printf("\t Value in Foot: %f\n",(float)foot);
        goto label1;
     case 3:
        printf("\t Enter Centimeter value.\n");
        scanf("%f",&centimeter);
        float inches = centimeter / 2.54;
        printf("\t Value in inches: %f\n",inches);
        goto label1;
     case 4:
        printf("\t Enter Pound value.\n");
        scanf("%f",&pound);
        float kgs = pound / 2.205;
        printf("\t Value in Kgs : %f\n",kgs);
        goto label1;
     case 5:
        printf("\t Enter inches value.\n");
        scanf("%f",&inches);
        float meter = inches / 39.37;
        printf("\t Value in Meters : %f\n",meter);
        goto label1;
        
       
      
        
     
     default:
     printf("Goodbye!\n");
        break;
     }
     return 0;
}
