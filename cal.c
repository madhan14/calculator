#include <stdio.h>

int main()
{
	float a;
	float b;
	int o;
	float r;
	
	printf("Entre the first number: ");
	scanf("%f", &a);
	
	printf("Enter the second number: ");
	scanf("%f", &b);
	
	printf("Enter the calculation method: \n 1. Add\n 2. Sub\n 3. Mul\n 4. Div\n");
	scanf("%d", &o);
	
	switch (o) {
		
		case 1:
		printf("%f + %f = %f",a, b, r=a+b);
		break;
		
		case 2:
		printf("%f - %f = %f",a, b, r=a-b);
		break;
		
		case 3:
		printf("%f * %f = %f",a, b, r=a*b);
		break;
		
		case 4:
		printf("%f / %f = %f",a, b, r=a/b);
		break;
		
	}
}
