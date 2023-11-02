#include <stdio.h>
#include <stdlib.h>


int main()
{
	char ch;
	double a, b;
	
	printf("\t\t\t\tWelcome to the Simple Calculator\n");
	printf("\t\t\t\t................................\n\n\n");
	
	while (1) {
		printf("Enter an operator (+, -, *, /), "
			"if want to exit press x: ");
		scanf(" %c", &ch);

	
		if (ch == 'x')
			exit(0);
		printf("Enter the first operand : ");
		scanf("%lf", &a);
		
		printf("Enter the second operand : ");
		scanf("%lf",&b);
		
		switch (ch) {

		
		case '+':
			printf("\n%.1lf + %.1lf = %.1lf\n", a, b, a + b);
			break;

		
		case '-':
			printf("\n%.1lf - %.1lf = %.1lf\n", a, b, a - b);
			break;

	
		case '*':
			printf("\n%.1lf * %.1lf = %.1lf\n", a, b, a * b);
			break;

	
		case '/':
			printf("\n%.1lf / %.1lf = %.1lf\n", a, b, a / b);
			break;

	
		default:
			printf(
				"\nError! please write a valid operator\n");
		}

		printf("\n");
	}
}

