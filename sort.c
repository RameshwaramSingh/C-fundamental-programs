#include<stdio.h>
void swap(int,int);
int main(){
	int arr[] = {9,4,3,8,3,8,5};
	int size =  sizeof(arr)/sizeof(arr[0]);
	int i =0, j =1;
	for(i=0; i<size; i++){
		for(j=1;j<size; j++){
			if(arr[j-1]>arr[j]){
				int temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
		}
		
	}
	for( i = 0; i<size; i++){
		printf("%d",arr[i]);
	}
} 

