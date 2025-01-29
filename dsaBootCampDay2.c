#include <stdio.h>
int calculateFactorial(int n){
    int fact =1;
    for(int i =1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}


int factorialUsingRecursion(int n){
    if(n==0){
        return 1;
    }
    return n*factorialUsingRecursion(n-1);
}


int fibonacci(int n){
    if(n<=1){
        return n;
    }
    
    return fibonacci(n-2)+fibonacci(n-1);
}

int fibonacciSequence(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    else{
    return fibonacciSequence(n-2)+fibonacciSequence(n-1);
    }
}

int sumOfNaturalNumber(int n){
    if(n==1){
        return 1;
    }
    return n+sumOfNaturalNumber(n-1);
}

void print(int n){
    if(n==1){
        printf("%d ",n);
        return ;
    }
    printf("%d ",n);
    return print(n-1);
}

void print2(int n){
    if(n==1){
        printf("%d ",n);
        return ;
    }
     print2(n-1);
    printf("%d ",n);
    return;
}

int powerOfTwo(int n){
    if(n==0){
        return 1;
    }
    return 2*(powerOfTwo(n-1));
}

int sumOfDigit(int n){
    if(n==0){
        return 0;
    }
    return (n%10)+sumOfDigit(n/10);
}

int count(int n){
    static int c =0;
    if(n<=0){
        return c;
    }
    c++;
    count((n/10));
}

int main() {
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int ans = count(n);
    printf("ans = %d", ans);
    // for(int i =0;i<=n;i++){
    //     printf("%d ",fibonacciSequence(i));
    // }

    return 0;
}
