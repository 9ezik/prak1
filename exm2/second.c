#include <stdio.h>

extern float find_f(float x);
extern float find_g(float x);

int main(){
	float x;
	printf("Enter x: ");
	scanf("%f",&x);
	
	printf("g(x) = %f\n",find_g(x));
	printf("f(x) = %f\n",find_f(x));

	return 0;
}
