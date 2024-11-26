#include<stdio.h>
int main(){
	int arr[] = {5,7,2,8};
	int target = 2;
	int i = 0;
	while(i<4){
		if(arr[i]==target){
			printf("Element found %d",target);
		}
		i++;
	}
}
