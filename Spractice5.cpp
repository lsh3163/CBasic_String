#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main(){

	int i = 0;
	printf("\n\n");
	printf("Upper Characters:\n");
	for(i=0;i<128;i++){
		if(isupper(i)) putchar(i);
	}
	printf("\n\n");
	printf("Lower Characters:\n");
	for(i=0;i<128;i++){
		if(islower(i)) putchar(i);
	}
	printf("\n\n");
	printf("Alphabets:\n");
	for(i=0;i<128;i++){
		if(isalpha(i)) putchar(i);
	}
	printf("\n\n");
	printf("Digits:\n");
	for(i=0;i<128;i++){
		if(isdigit(i)) putchar(i);
	}
	printf("\n\n");
	printf("Xdigits:\n");
	for(i=0;i<128;i++){
		if(isxdigit(i)) putchar(i);
	}
	printf("\n\n");
	printf("Alpha Numerics:\n");
	for(i=0;i<128;i++){
		if(isalnum(i)) putchar(i);
	}
	printf("\n\n");
	printf("Punctuations:\n");
	for(i=0;i<128;i++){
		if(ispunct(i)) putchar(i);
	}
	printf("\n\n");
	printf("Graphes:\n");
	for(i=0;i<128;i++){
		if(isgraph(i)) putchar(i);
	}
	printf("\n\n");
	printf("Printable:\n");
	for(i=0;i<128;i++){
		if(isprint(i)) putchar(i);
	}
	return 0;
}
