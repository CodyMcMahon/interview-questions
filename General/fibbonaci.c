#include <stdio.h>

void fib_help(int cur,int count,int max){
	if(cur >= max){
		return;
	}
	
	printf("%d, ",cur);
	fib_help(cur+count++,count,max);
}
void fib_rec(int max){
	fib_help(0,0,max);
	printf("\n");
}

void fib_itt(int max){
	int curr = 0;
	int i;
	for(i = 0;curr<max;i++){
		printf("%d, ",curr);
		curr+=i;
	}
	printf("\n");
}

int main(){
	fib_rec(10);
	fib_itt(10);
	fib_rec(9999);
	fib_itt(9999);
}
