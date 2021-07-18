#include<stdio.h>
#include<ctype.h>
#include<string.h> /*To append new thing in a string, string overrite*/

int main(){

	char a = 'f';
	char b = 'S';
	
	char x[] = "This is Keshav ";
	char y[] = "New String\n";
	
		printf("%c \n", toupper(a));
		printf("%c \n", tolower(b));
		
	strcat(x, "Verma"); /*String Concatination*/
	strcat(x, " in ");
	strcat(x, "India");

		printf("Value of x is = %s \n", x);
		
	strcpy(x, y); /*String copy*/
	
	printf("Value of x = %s \n", x);

return 0;
}

