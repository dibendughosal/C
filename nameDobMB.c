/* Write a C program to print your first name, date of birth, and mobile number.
Expected Output:

Name   : Dibendu 
DOB    : 23052002  
Mobile : 9999 */

#include<stdio.h>
#include<string.h>
int main(){
    char DOB[10],mob[12];
    char name[30];
    printf("Enter Your Name First Name: ");
    scanf("%s",&name);
    printf("Enter Your Date of birth(dd/mm/yyyy): ");
    scanf("%s", &DOB);
    printf("Enter Your Mobile No.: ");
    scanf("%s", &mob);

    printf("Your Name First Letter :%s",name);
    printf("\nYour Date of birth:%s",DOB);
    printf("\nYour Mobile Number Last 4 Digits:%s", mob);

    return 0;
}