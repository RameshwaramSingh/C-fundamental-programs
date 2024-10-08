#include<stdio.h>
int main(){
    int n;
    int ans =0;
    printf("Enter the number \n");
    scanf("%d",&n);
    for(int i =1; i<=n; i++){
        ans =i*i*i;
        printf("Cube of %d = %d \n",i,ans);
    }
    return 0;
}