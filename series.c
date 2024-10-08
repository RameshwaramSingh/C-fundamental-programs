#include<stdio.h>
int main(){
    int target;
    int ans =0;
    int n;
    int rem;
    printf("Enter the target number \n");
    scanf("%d",&target);
    rem = target;
    printf("Enter number of times \n");
    scanf("%d",&n);
    for(int i =1; i<=n; i++){

        printf(" %d ",target);
        ans = ans+target;
        target = target*10+rem;
    }
    printf(" \n sum of the target = %d",ans);
    return 0;
}