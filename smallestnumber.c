//Find the Smallest Number among 3 numbers

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first Number: ");
    scanf("%d",&a);
    printf("Enter the Second Number: ");
    scanf("%d",&b);
    printf("Enter the third Number: ");
    scanf("%d",&c);

    if (a<=b && a<=c)
    {
        printf("The First Number - %d is smallest",a);
    }
    if(b<=a && b<=c)
    {
        printf("The Second Number - %d is smallest",b);
    }
    if (c<=a && c<=b)
    {
        printf("The third number - %d is smallest",c);
    }
    return 0;

}