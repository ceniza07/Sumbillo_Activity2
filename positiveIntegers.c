#include <stdio.h>
#include <math.h>
#include <ctype.h>

int isInteger(int, int);
int isPositive(int, int);
 
int main() {
    
    int num1,num2, result, check1, check2;
    
    printf("Enter first integer: ");
    check1 = scanf("%d",&num1);
    printf("Enter second integer: ");
    check2 = scanf("%d",&num2);
    
    if(isInteger(check1, check2) == 1){
    	 isPositive(num1, num2);
	} else {
		printf("\nInput valid integers.");
	}
    
    return 0;
}

int isInteger(check1, check2){
	int isValid;
	
	if(check1 == 1 && check2 == 1){
		isValid = 1;
	} else {
		isValid = 0;
	}
	
	return isValid;
}

int isPositive(num1, num2){
	if(num1 >= 0 && num2 >= 0){
    	int result = num1 + num2;
    	printf("\nThe sum of two numbers is = %d",result);
	} else {
		printf("\nInput positive numbers.");
	}
	
	return 0;
}
