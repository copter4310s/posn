#include <stdio.h>

int main()
{
    float userTemp, outTemp;
    int userType;
    
    printf("*--- Temperature Converter ---*\n");
    printf("  1: Celsius -> Fahrenheit\n");
    printf("  2: Fahrenheit -> Celsius\n");
    printf("\n");
    printf("  Enter your value: ");
    scanf("%f", &userTemp);
    
    //USER INPUT CELSIUS
	printf("  Enter your unit: ");
	scanf("%i", &userType);
	
	if (userType == 1) {
		outTemp = ((userTemp - 32) / 9) * 5;
		printf("  Result: %.2f Fahrenheit\n", outTemp);
	} else if (userType == 2) {
		outTemp = ((userTemp / 5) * 9) + 32;
		printf("  Result: %.2f Celsius\n", outTemp);
	} else {
		printf("  Invalid argument, Try again!\n");
	}
    
    printf("*----------------------------*");

    return 0;
}
