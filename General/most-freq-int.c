//Find the most frequent integer in an array

#include <stdio.h>
#include <stdlib.h>

int find_mode(int* arr,int size){
	int i,i2,temp,answer,count;
	int max = 0;
	for(i=0;i<size;i++){
		count = 0;
		temp = arr[i];
		for(i2=0;i2<size;i2++){
			if(i==i2){
				continue;
			}
			if(arr[i] == arr[i2]){
				count++;
			}
			
		}
		if(count > max){
			max = count;
			answer = arr[i];
		}
	}
	return answer;
}

int main(){
	int arr[] = {2,5,6,3,6,2,2,2,2,2,2,6,6,6,4,3,77};
	int size = 17;
	int arr2[] = {2,1,1,1,7};
	printf("%d\n",find_mode(arr,size));
	printf("%d\n",find_mode(arr2,5));
}
