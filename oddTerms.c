#include<stdio.h>
int main(){
    int n;
    printf("Enter the number \n");
    scanf("%d",&n);
    printf("All the odd term till %d are \n",n);
    for(int i =0; i<=n; i++){
        if(i%2 != 0){
            printf("%d \n",i);
        }
    }
    return 0;
}