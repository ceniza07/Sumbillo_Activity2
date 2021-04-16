#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double computation(double, double);

int main() {
    
    double num1, num2, diff;
    
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    
    diff = computation(num1, num2);
	
    printf("\nAbsolute Difference: %.0lf", diff);
    return 0;
}

double computation(double num1, double num2){
	return abs(num1 - num2);
}
