#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(){
	int i;
	float y,x,df;
	float s = 4*PI/50;
	printf ("Valores que toma la funcion entre x = 0 y x = 4*PI son:\n\n");
	for(i = 0; i <= 50 ; i++){
		x = s*i;
		y = sin(x);
		printf("y(%.3f) = %.3f\n\n", x, y);
	}
	printf ("Valores que toma la funcion derivada entre x = 0 y x = 4*PI son:\n\n");
	for(i = 0; i <= 50 ; i++){
		x = s*i;
		df = cos(x);
		printf("df(%.3f) = %.3f\n\n", x, df);
	}
	return (0);
}
