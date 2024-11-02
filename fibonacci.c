#include<stdio.h>
int main(){
    int num;
    int first = 0, second = 1, nextTerm = first + second;
    printf("Entert the number of term \n");
    scanf("%d",&num);
    printf("Fibonacci Serries of %d term : %d, %d,",num,first,second);
    for(int i=3; i<=num; i++){
        printf("%d,",nextTerm);
        first = second;
        second = nextTerm;
        nextTerm = first + second;
    }
    return 0;
}