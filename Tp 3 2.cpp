#include <stdio.h>
#include <math.h>
int main(){
	char op;
	float radio;
	float longitud,area,volumen;
	float PI=3.14159;
	
	printf ("a)-C�lculo de la longitud de la circunferencia\n");
	printf ("b)-C�lculo del �rea del c�rculo\n");
	printf ("c)-C�lculo del volumen de la esfera\n\n");
	printf ("Elija una opci�n: ");
	scanf("%c", &op);
	printf ("Ingrese el radio: ");
	scanf ("%f", &radio);
	
	switch (op){
	case 'a':
	{
		longitud = 2 * PI * radio;
		printf("La longitud es: %f\n",longitud);
		break;
	}
	case 'b':
	{
		area = radio * radio * PI ;
		printf("El area es: %f\n", area);
		break;
	}
	case 'c':
	{
		volumen = 4/3 * PI * pow(radio, 3);
		printf("El volumen es: %f\n", volumen);
		break;
	}
	default:
	{
		printf ("Opcion no valida");
		break;
	}
	}
	return(0);
}
