#include <stdio.h>

int rand7(){
	int i;
	int temp = 0;
	for(i = 0; i < 8; i++){
		temp += rand5();
	}
	return temp%8;
}
//im not writing a main because rand5 is not implemented
