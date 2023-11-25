//Program to find out Simple interest by Dibendu Ghosal.

#include<stdio.h>
int main(){
    float p,r,t,SI;
    printf("Enter the principle amount:");
    scanf("%f",&p);
    printf("Enter the rate:");
    scanf("%f",&r);
    printf("Enter the time (in Year's):");
    scanf("%f",&t);

    SI=(p*r*t)/100;
    printf("The simple interest is - %.2f",SI);
    return 0;
}