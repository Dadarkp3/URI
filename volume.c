#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(){
	double A,B,C,Triangulo, Circulo, Trapezio, Quadrado, Retangulo;
	scanf("%lf %lf %lf",&A,&B,&C);	
	Triangulo=(A*C)/2.0;
	Circulo=pow(C,2)*PI;
	Trapezio=((A+B)*C)/2.0;
	Quadrado=pow(B,2);
	scanf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\n QUADRADO: %.3lf\n RETANGULO: %.3lf\n",Triangulo,Circulo,Trapezio,Quadrado,Retangulo);
	return 0;	
}
