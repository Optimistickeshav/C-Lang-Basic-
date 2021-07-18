#include <stdio.h>
#include <ctype.h>

/*To check type inside a string*/
/*a,b..z = Alpha*/
/*A,B..Z = Alpha*/
/*0....9 = digit*/
/*10-infinity. = will read only last char, as an digit*/

int main()
{

	char xat = 'AA';
	
	if(isalpha(xat)){/*to check wheather it is alphabet or not*/
	
		printf("%c is Letter", xat);
	
		}else{
	
		if(isdigit(xat)){/*to check wheather it is digit or not*/
	
			printf("%c is Digit", xat);
	
			}else{
	
			printf("%c is nothing", xat);
	
			}
	
	}
	return 0;
}

