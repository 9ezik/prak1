#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float find_f(float x);
float find_g(float x);

int main(){
	float x;
	printf("Enter x: ");
	scanf("%f",&x);
	
	printf("g(x) = %f\n",find_g(x));
	printf("f(x) = %f\n",find_f(x));

	return 0;
}

float find_f(float x){
	float f=0;
	f = expf(-fabs(x))*sinf(x);
	return f;
}

float find_g(float x){
	float g=0;
	g = expf(-fabs(x))*cosf(x);
	return g;
}
