#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i,max=0,max2=0;
printf("Enter the number opf element ");
scanf("%d",&n);
int *ptr1,*ptr2;
ptr1 = (int*)malloc(n*sizeof(int));
if(ptr1==NULL){
	printf("Memory Not Allocated\n");
}
else{
	printf("MEmory allocated for ptr1\n");
}
ptr2 = (int*)calloc(n,sizeof(int));
if(ptr1==NULL){
	printf("Memory Not Allocated\n");
}
else{
	printf("MEmory allocated for ptr2\n");
}
printf("Enter the element of array1\n ");
for( i =0; i<n;++i){
	scanf("%d\n",ptr1+i);
}
printf("Enter the element of Array 2\n ");
for( i =0; i<n;++i){
	scanf("%d\n",ptr2+i);
}
//largest elemnt of array1
for(i =0; i<n;i++){
	if(max<ptr1[i]){
		max = ptr1[i];
	}
}
//largest elemnt of array2
for(i =0; i<n;i++){
	if(max2<ptr2[i]){
		max2 = ptr2[i];
	}
}
printf("Maximum Element of Array 1 = %d\n",max);
printf("Maximum Element of Array 2 = %d\n",max2);
if(max>max2){
	printf("Maximun element from array is %d",max);
}
else{
	printf("Maximun element from array is %d",max2);
}
return 0;
}
