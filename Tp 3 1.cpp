#include <stdio.h>
#include <math.h>

int main(){
	float radio;
	float longitud, area,volumen;
	char op;
	float PI = 3.141592;
	
	printf ("Elija una opci�n\n");
	printf ("a)-C�lculo de la longitud de la circunferencia\n");
	printf ("b)-C�lculo del �rea del c�rculo\n");
	printf ("c)-C�lculo del volumen de la esfera\n\n");
	scanf("%c", &op);
	printf("Ingrese el radio : ");
	scanf ("%f", &radio);
	
	longitud = 2 * PI * radio;
	area = radio * radio * PI ;
	volumen = 4/3 * PI * pow(radio, 3);
	
	if((op=='a')||(op=='A')){
		printf("La longitud es: %f\n",longitud);
	}
	else if ((op=='b')||(op=='B')){
		printf("El area es: %f\n", area);
	}
	else if((op=='c')||(op=='C')){
		printf("El volumen es: %f\n", volumen);
	}
	return(0);
}
