/*Absolute Value of -55 is = 55*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){

int year1;
int year2;
int age;

printf("Enter Year:");
scanf("%d", &year1);

printf("\nEnter another Year:");
scanf("%d", &year2);

age = year1 - year2;

printf("\n%d\n", age);

age = abs(age);

printf("\n%d\n", age);

return 0;
}

