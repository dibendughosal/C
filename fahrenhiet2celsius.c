#include<stdio.h>
int main(){
    float celsius,fahrenhiet;
    printf("enter the Fahrenhiet temp. :");
    scanf("%f", &fahrenhiet);

    celsius=((fahrenhiet-32)*5)/9;

    printf(" %.2f Fahrenhiet = %.2f celsius", fahrenhiet, celsius);
    return 0;
}

