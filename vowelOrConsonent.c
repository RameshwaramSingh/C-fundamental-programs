#include<stdio.h>
int main(){
	char ap;
	printf("Enter the alphabet you want to check whether it is vowel or consonent\n");
	scanf("%c",&ap);
	if(ap == 'a' || ap == 'e' || ap == 'i' || ap == 'o' || ap == 'u'){
		printf("Entered alphabet is vowel ");
	}
	else{
		printf("Entered alphabet is consonent ");
	}
	return 0;
}
