//Add two Numbers without using + operator

#include<stdio.h>
int main(){
    int firstnum,secondnum,i;

    printf("Enter The First Number: ");
    scanf("%d",&firstnum);
    printf("enter the Second Number:");
    scanf("%d",&secondnum);

    for ( i = 1; i <=secondnum;i++)
    {
        firstnum++;
    }
    printf("Sum = %d",firstnum);
    return 0;
    
}