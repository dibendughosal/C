//C Program to check given number is even or odd.
#include<stdio.h>
void main(){
    int num;
    printf("Enter The Number");
    scanf("%d",&num);

    if (num%2==0)
    printf("Even");
    else
    printf("Odd");
}