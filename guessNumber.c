#include<stdio.h>
#include<stdbool.h>
int main(){
    printf("Guess the number from 1 to 20\n");
    int guess = 8;
    int num;
    bool result = false;
    while(result!= true){
        printf("Enter the number ");
        scanf("%d",&num);
        if(guess == num){
            result = true;
            printf("Congrats you guess the correct number");
        }
        else{
            printf("Wrong answer\n Enter the number again\n");
        }
    }
    return 0;
}