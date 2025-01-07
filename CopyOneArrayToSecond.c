#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i;
printf("Enter the number opf element ");
scanf("%d",&n);
int *ptr1,*ptr2;
ptr1 = (int*)malloc(n*sizeof(int));
if(ptr1==NULL){
	printf("Memory Not Allocated\n");
}
else{
	printf("MEmory allocated for ptr1\");
}
ptr2 = (int*)malloc(n*sizeof(int));
if(ptr1==NULL){
	printf("Memory Not Allocated");
}
else{
	printf("MEmory allocated for ptr2");
}
printf("Enter the element of array ");
for( i =0; i<n;++i){
	scanf("%d",ptr1+i);
}
//copy all the element from one array to second
for( i =0; i<n;++i){
	ptr2[i]= *(ptr1+i);
}
//print all the element of 2nd array
for(i =0; i<n;++i){
	printf("%d\n",*(ptr2+i));
}
return 0;
}
