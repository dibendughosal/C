//Check the year is leap year or not

#include<stdio.h>
void main(){
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);

    if (year % 400==0){
        printf("Given year %d is a leap year.", year);
    }
     else if (year%4==0)
     {
        printf("Given year %d is - Leap Year",year); 
     }
     else if (year%100==0)
     {
        printf("Given year %d is - Not Leap Year",year);
     }
     else
        printf("Given Year %d is NOT Leap Year",year);
    
    
}