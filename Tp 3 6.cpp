#include <stdio.h>
#include <math.h>

  float f(float x) {
  return pow(sin(x), 2);
  }
  
int main(){
	float x1,x2,h,area = 0;
	int n;
	int i;
	
	printf("Ingrese x1:");
	scanf("%f",&x1);
	printf("Ingrse x2:");
	scanf("%f",&x2);
	printf("Ingrese n:");
	scanf("%d",&n);
	
	h = (x2 - x1) / n;
	
	for(i = 0; i < n; i++){
	area += f(x1 + i * h) * h;
	}
	
	printf("El area bajo la curva es:%f",area);
	return(0);
}
