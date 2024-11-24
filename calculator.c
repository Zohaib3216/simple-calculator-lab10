#include<stdio.h>
int main(){
	float a,b;
	printf("enter the numbers");
	scanf("%f%f",&a,&b);
	char op;
	printf("enter the operation");
	scanf("%c",&op);
	switch(op){
		case '+':
			printf("%f",a+b);
		case '-':
			printf("%f",a-b);
		case '*':
			printf("%f",a*b);
		case '/':
			printf("%f",a/b);	
	}
	
}
