#include <stdio.h>
#include <math.h>

float formula(float, float, float, float);

int main() {
	float x1, y1, x2, y2, distance;
	printf("Input x1: ");
	scanf("%f", &x1);
	printf("Input y1: ");
	scanf("%f", &y1);
    printf("Input x2: ");
	scanf("%f", &x2);
	printf("Input y2: ");
	scanf("%f", &y2);
	
	distance = formula(x1, y1, x2, y2);
	
	printf("Distance: %.4f", distance);
	
	return 0;
}

float formula(float x1, float y1, float x2, float y2){
	float ans, result;
	
	ans = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	result = sqrt(ans);
	
	return result;
}
