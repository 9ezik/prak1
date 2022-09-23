#include <math.h>

float find_g(float x){
	float g=0;
	g = expf(-fabs(x))*cosf(x);
	return g;
}
