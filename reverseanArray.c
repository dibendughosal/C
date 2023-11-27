#include<stdio.h>
int main(){
    int n,a[100],i;
    printf("Enter the size of an Array: ");
    scanf("%d",&n);

    
    for ( i = 0; i < n; i++)
    {
        printf("\nEnter the element:%d - ",i+1);
        scanf("%d",&a[i]);
    }

    printf("\nthe elements are ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    printf("\nthe value store in array is reverse are:");
    for ( i = n-1; i >= 0; i--)
    {
        printf("%d ",a[i]);
    }
    
    
}