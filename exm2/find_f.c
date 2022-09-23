#include <math.h>

float find_f(float x){
	float f=0;
	f = expf(-fabs(x))*cosf(x);
	return f;
}
