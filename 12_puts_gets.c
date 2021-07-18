#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){

char name[50];
char food[25];
char text[75] = "";

puts("Enter Name:");
gets(name);

puts("Enter Food:");
gets(food);

strcat(text, name);/*blank + Keshav*/
strcat(text, " Loves to Eat ");/* blank + Keshav + Loves to Eat*/
strcat(text, food);/* blank + Keshav + Loves to Eat + Apple*/

puts(text);

return 0;
}

