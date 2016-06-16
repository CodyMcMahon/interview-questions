//Find pairs in an integer array whose sum is equal to 10 (bonus: do it in linear time)

#include <stdio.h>

int findpairs(int* arr, int size){
	int foundnum[11] = {0};
	int i;
	for(i = 0;i < size; i++){
		if (arr[i]<=10){
			foundnum[arr[i]] = 1;
		}
	}
	for(i = 0;i <= 5; i++){
		if(foundnum[i] && foundnum[10-i]){
			printf("match of %d and %d\n", i,10-i);
		}
	}
}


int main(){
	int arr1[] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int arr2[] = {1,9,4,55,235};
	int arr3[] = {0,10,2,55};
	findpairs(arr1,12);
	findpairs(arr2,5);
	findpairs(arr3,4);



}
