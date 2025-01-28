#include <stdio.h>
int main(){
     /*char ch;
     printf("Enter the character\n");
     scanf("%c",&ch);
     int a = (int)(ch);
     switch(a){
         case 97: printf("%c is vowel",ch);
         break;
         case 101: printf("%c is vowel",ch);
         break;
         case 105: printf("%c is vowel",ch);
         break;
         case 111: printf("%c is vowel",ch);
         break;
         case 117: printf("%c is vowel",ch);
         break;
         default: printf("%c is consonanat",ch);
     }*/
   /* int a;
    printf("Enter the number");
    scanf("%d",&a);
    int sum =0;
    printf("Using Loop\n");
    for(int i =1; i<=a;i++){
        sum = sum+i;
    }
    printf(" sum of natural number = %d",sum);
    printf("without using loop\n");
    int s = a*(a+1)/2;
    printf(" sum of natural number = %d",s);
    */
    
    //digit count
   /* int n;
    printf("Enter the number");
    scanf("%d",&n);
    int count =0;
    while(n>0){
        n = n/10;
        count++;
    }
    printf("Number of digit = %d",count);*/
    
    //sum of digit
    /* int n;
    printf("Enter the number");
    scanf("%d",&n);
    int sum =0;
    while(n>0){
        int rem = n%10;
        sum = sum +rem;
        n = n/10;
    }
    printf("Sum of digit = %d",sum);*/
    
    
    //reverse number
    /*int n;
    printf("Enter the number");
    scanf("%d",&n);
    int rev =0;
    while(n>0){
        int rem = n%10;
        rev = rev*10+rem;
        n = n/10;
    }
    printf("Reverse of digit = %d",sum);*/
    
    
    
    //palindrome number
    /*int n;
    printf("Enter the number");
    scanf("%d",&n);
    int t =n;
    int rev =0;
    while(n>0){
        int rem = n%10;
        rev = rev*10+rem;
        n = n/10;
    }
    if(rev==t){
        printf("%d is palindrome", t);
    }
    else{
        printf("%d is not palindrome",t);
    }*/
    
    //armstrong number
    /*int n;
    printf("Enter the number");
    scanf("%d",&n);
    int t= n;
    int sum =0;
    while(n>0){
        int rem = n%10;
        sum = sum+(rem*rem*rem);
        n = n/10;
    }
    printf(" number = %d\n",sum);
    if(sum == t){
        printf("%d is armstrong number",t);
    }
    else{
        printf("%d is not an armstrong number",t);
    }*/
    
    //factorial of digits
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int t= n;
    int sum =0;
    while(n>0){
        int rem = n%10;
        int fac =1;
        for(int i =1;i<=rem;i++){
            
            fac = fac*i;
        }
        sum = sum +fac;
        fac =1;
        n = n/10;
    }
    printf("Factorial of sum of digit = %d\n",sum);
    if(sum == t){
        printf("%d is strong number",t);
    }
    else{
        printf("%d is not strong number",t);
    }
    }
    
