#include <stdio.h>
#include <math.h>

int main(){
	float x , f , df;
	printf("Ingrese el valor de x donde desea calcular la derivada: ");
	scanf("%f", &x);
	f = pow(sin(x), 2);
	df = sin(2*x);
	printf("La derivada en el punto x=%.2f es df/dx=%.2f\n", x, df);
	return (0);
}
