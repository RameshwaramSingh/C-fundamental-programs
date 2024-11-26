#include<stdio.h>
int main(){
	int arr[] ={2,7,8,12,56};
	int t = 12;
	int s = 0;
	int e = 4;
	while(s<=e){
		int m = s + (e-s)/2;
	if(arr[m]==t){
		printf("Element found at index %d",m);
	}
	if(arr[m]>t){
		e = m-1;
	}
	else{
		s = m+1;
	}
}
	return 0;
}
