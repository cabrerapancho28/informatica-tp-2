#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(){
	int i;
	float y,x;
	float s = 4*PI/50;
	for(i = 0; i <= 50 ; i++){
		x = s*i;
		y = sin(x) + 0.7 * cos(2 * x) + 0.5 * sin(3 * x);
		printf("y(%.3f) = %.3f\n", x, y);
	}
	return (0);
}
