//Implement binary search of a sorted array of integers
//Implement binary search in a rotated array (ex. {5,6,7,8,1,2,3})
#include <stdio.h>



int rotbinsearch(int *arr,int size,int target){
	int high = size-1;
	int low = 0;
	int bias = 1;
	int cur;
	//find bias
	while(bias < size-1){
		if(arr[bias-1]>arr[bias]){
			break;
		}
		bias++;
	}

	while(high >= low){
		cur = (high+low) / 2;
		if(arr[(cur+bias)%size]>target){
			high = cur - 1;	
		}
		else if(arr[(cur+bias)%size]<target){
			low = cur + 1;
		}
		else{
			return (cur+bias)%size;
		}
	}
	return -1;
}

int normbinsearch(int *arr,int size,int target){
	int high = size-1;
	int low = 0;
	int cur;
	while(high >= low){
		cur = (high+low) / 2;
		if(arr[cur]>target){
			high = cur - 1;	
		}
		else if(arr[cur]<target){
			low = cur + 1;
		}
		else{
			return cur;
		}
	}
	return -1;
}

int main(){
	int arr[] = {0,1,2,3,4,5,6,7};
	int arr2[]= {4,5,6,7,0,1,2,3};
	printf("%d\n",normbinsearch(arr,8,1));
	
	printf("%d\n",normbinsearch(arr,8,3));
	printf("%d\n",normbinsearch(arr,8,7));
	printf("%d\n",normbinsearch(arr,8,2));
	printf("%d\n",normbinsearch(arr,8,99));
	printf("%d\n",normbinsearch(arr,8,0));
	
	printf("%d\n",rotbinsearch(arr2,8,3));
	printf("%d\n",rotbinsearch(arr2,8,7));
	printf("%d\n",rotbinsearch(arr2,8,2));
	printf("%d\n",rotbinsearch(arr2,8,99));
	printf("%d\n",rotbinsearch(arr2,8,0));
}

/*
console output


1
3
7
2
-1
0
7
3
6
-1
4





*/
