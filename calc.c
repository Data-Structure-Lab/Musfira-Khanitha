//simple calculator

#include<stdio.h>
int main()
{
 char operation;
 double n1,n2;
 
 printf("Enter an operator (+, -, *, /):");
 scanf("%c",&operation);
 printf("Enter two operands:");
 scanf("%lf %lf",&n1,&n2);
 switch(operation)
 {
	case '+':
		printf("%lf + %lf = %f",n1,n2,n1+n2);
		break;
		
	case '-':
		printf("%lf - %lf = %f",n1,n2,n1-n2);	
		break;
	
	case '*':
		printf("%lf * %lf = %f",n1,n2,n1*n2);	
		break;

	case '/':
		printf("%lf / %lf = %f",n1,n2,n1/n2);	
		break;

	default:
		printf("Errror! operator is not correct");

 }
   return 0;
}
