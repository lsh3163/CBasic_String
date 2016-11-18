#include<stdio.h>
#include<string.h>
int main(){
	char dest[20];
	char src[50] = "i love you,i love you,i love you";
	int len;
	strcpy(src,"Tutorials Point");
	len = strxfrm(dest,src,20);
	printf("Length of string %s is %d",dest,len);
	return 0;
}
