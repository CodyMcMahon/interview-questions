#include <stdio.h>

void binhelp(int x){

	if(x){
		binhelp(x>>1);
		printf("%d",x&1);
	}
}
void binform(int x){
	printf("0b");
	if(x<0){
		printf("1");
		binhelp(x&0b01111111111111111111111111111111);
	}
	else{
		binhelp(x);
	}
	printf("\n");
	
}


int main(){
	binform(99);
	binform(2);
	binform(1);
	binform(-1);
	binform(-2);
	binform(-124124);
	binform(14214);
}
/*
console output

0b1100011
0b10
0b1
0b11111111111111111111111111111111
0b11111111111111111111111111111110
0b11111111111111100001101100100100
0b11011110000110




*/
