#include<stdio.h>
#include<string.h>
int main(){

	char s[] = "language";
	char c = 'g';
	char *p;
	int loc;
	p = strchr(s,c);
	loc = (int) (p-s);
	if(p!=NULL)
		printf("%c %d\n",c,loc);
	else{
		printf("%c",c);
	}
	return 0;
}
