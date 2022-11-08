#include<stdio.h>
main(){
	printf("Digital Calculator");
	float a, b, q, u, x, z, Choice;
	printf("\n specify your choice \n 1. Addition ;\n 2. Subtraction ;\n 3. Multiplication  ;\n 4. Division ;\n 5. sin ;\n 6. cos;\n 7. tan;\n 8. Exponential");
	scanf("%f",&Choice);
	
	
	if (Choice==1){
		printf("Enter first number");
	scanf("%f",&a);
	printf("Enter second number");
	scanf("%f",&b);
		x = a + b;
			printf("Answer is %f",x);
	}
	else if(Choice==2){
			printf("Enter first number");
	scanf("%f",&a);
	printf("Enter a number to be subtracted from first number");
	scanf("%f",&b);
		x = a - b;
			printf("Answer is %f",x);
	}
	else if(Choice==3){
			printf("Enter first number");
	scanf("%f",&a);
	printf("Enter second number");
	scanf("%f",&b);
		x = a * b;
			printf("Answer is %f",x);
	}
	else if(Choice==4){
			printf("Enter divident");
	scanf("%f",&a);
	printf("Enter divisor");
	scanf("%f",&b);
		x = a / b;
			printf("Answer is %f",x);
	}
	else if(Choice==5){
		printf("Enter angle in degrees");
		scanf("%f",&q);
		u = (3.14/180)*q;
		x = u - ((u*u*u)/6) + ((u*u*u*u*u)/120);
			printf("Answer is %f",x);
	}
	else if(Choice==6){
		printf("Enter angle in degrees");
		scanf("%f",&q);
		u = (3.14/180)*q;
		x = 1 - ((u*u)/2) + ((u*u*u*u)/24);
			printf("Answer is %f",x);
	}
	else if(Choice==7){
		printf("Enter angle in degrees");
		scanf("%f",&q);
		u = (3.14/180)*q;
		x = u + ((u*u*u)/3) + (((u*u*u*u*u)*2)/225);
			printf("Answer is %f",x);
	}
	else if(Choice==8){
		printf("Enter base");
		scanf("%f",&a);
		printf("Enter power");
		scanf("%f",&b);
		float k = 1;
		for(float i = 0; i < b; i++)
		{
		k = k * a;
		}
		printf("Answer is %f",k);
	}
	else{
		printf("Choice invalid");
	}
	
}
