#include<stdio.h>
#include<string.h>
int main(){
	char *s1 = "937402992";
	char *s2 = "3097544";
	int length;
	length = strspn(s1,s2);
	printf("%d ",length);
	return 0;
}
