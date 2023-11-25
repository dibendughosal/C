#include<stdio.h>
int main(){
    float celsius,fahrenhiet;
    printf("Enter the Celsius Value :");
    scanf("%f",&celsius);
    fahrenhiet=(celsius*9/5)+32;
    
    printf("The Celsius value %.2f = The Fahrenhiet value - %.2f",celsius,fahrenhiet);
}