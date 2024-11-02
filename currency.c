#include<stdio.h>
int main(){
    int rs,note;
    printf("Enter the amount of money :");
    scanf("%d",&rs);
    while(rs!=0){
    if(rs>=500){
        note = rs/500;
        rs = rs%500;
        printf("%d 500 rupess note are require\n",note);
    }
    else if (rs>=200){
        note = rs/200;
        rs = rs%200;
        printf("%d 200 rupess note are require\n",note);
    }
    else if (rs>=100){
        note = rs/100;
        rs = rs%100;
        printf("%d 100 rupess note are require\n",note);
    }
    else if (rs>=50){
        note = rs/50;
        rs = rs%50;
        printf("%d 50 rupess note are require\n",note);
    }
    else if (rs>=20){
        note = rs/20;
        rs = rs%20;
        printf("%d 20 rupess note are require\n",note);
    }
    else if (rs>=10){
        note = rs/10;
        rs = rs%10;
        printf("%d 10 rupess note are require\n",note);
    }
    else if (rs>=5){
        note = rs/5;
        rs = rs%5;
        printf("%d 5 rupess note are require\n",note);
    }
    else if (rs>=2){
        note = rs/2;
        rs = rs%2;
        printf("%d 2 rupess note are require\n",note);
    }
    else if (rs>=1){
        note = rs/1;
        rs = rs%1;
        printf("%d 1 rupess note are require\n",note);
    }
    else{
        printf("Enter the valid amount");
    }
    }
    return 0;
}