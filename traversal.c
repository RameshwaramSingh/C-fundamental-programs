#include<stdio.h>
int main(){
	int arr[8] = {1,0,1,0,1,0,0,1};
	int size = sizeof(arr)/sizeof(arr[0]);
	int new[size];
	int c =0;
	int i =0 , j =0;
	for(i = 0; i<=size; i++){
		if(arr[i]==0){
			new[c] = arr[i];
			printf("%d",new[c]);
			c++;
		}
	}
	for(j = 0; j<=size;j++){
		if(arr[j]==1){
			new[c] = arr[j];
			printf("%d",new[c]);
			c++;
		}
	}

	return 0;
}
