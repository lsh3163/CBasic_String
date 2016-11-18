#include<stdio.h>
#include<string.h>
int main(){
	char pString[] = "This is a sample string";
	char *pFind = " ";
	char *pPos = pString;
	char *Token = pString;
	printf("ALL : ");
	puts(Token);
	puts("");
	while(1){
		Token = strpbrk(Token,pFind);
		if(Token == NULL){
			break;
		}
		printf("token:");
		puts(Token++);
		puts("");
	}
	return 0;
}
