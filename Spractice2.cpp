#include<stdio.h>
#include<conio.h>
int main(){
	int ch;
  //No Buffer Use
	while((ch=_getch())!='q'){
			_putch(ch);
	}
	return 0;
}
