#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main(){

	int c;
	while((c=getchar())!=EOF){
		if(islower(c)){
			c = toupper(c);
		}
		else{
			c = tolower(c);
		}
		putchar(c);
	}
	
	return 0;
}
