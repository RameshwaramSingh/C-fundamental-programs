#include<stdio.h>
int main(){
    int num,c;
    int i = 2;
    int sum =0;
    printf("Enter the number\n");
    scanf("%d",&num);
    while(i<=num){
        if(i%2==0){
            c = i*i*i;
            sum = sum+c;
            printf("Cube of %d = %d\n",i,c);
        }
        i++;
    }
    printf("Sum of the cube = %d",sum);
}