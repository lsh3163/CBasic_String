#include<stdio.h>
#include<math.h>
int main(){


	char name[100];
	char address[100];
	printf("이름을 입력하시오:");
	gets(name);
	printf("주소를 입력하시오:");
	gets(address);
	puts(name);
	puts(address);
	return 0;
}
