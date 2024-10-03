#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the value in integer \n");
    scanf("%d",&m);
    if(m == 0){
        n = 0;
        printf("Value = %d",n);
    }
    else if(m>0){
        n = 1;
        printf("Value = %d",n);
    }
    else{
        n = -1;
        printf("Value = %d",n);
    }
    return 0;
}