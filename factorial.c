#include "factorial.h"

int calcularFactorial(int  n){
	if(n<=1){
		return 1;
	}
	return n*calcularFactorial(n-1);
}

void imprimirFactorial(){
	printf("Introduza  o numero pelo qual deseja calcular o factorial\n" );
	int n=0;
	scanf("%d",&n);
	int  resulltado = calcularFactorial(n);

	printf("factorial de %d e' %d\n", n,resulltado );

}

