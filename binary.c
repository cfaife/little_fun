#include <stdio.h>

int read_number();
char *  converter(int num);
int main (){

	int num =read_number();

	char * bin ;

	bin=converter(num);
	
	printf("\n");
	printf("\n");
	int i=0;
	
	printf("%s",&bin);
	
	return 0;
}

int read_number(){

	printf("induza um valor de 0-255  para ser convertido em  binario \n");
	int num=0;
	scanf("%d",&num);

	return num;

}

char *  converter(int num){

	char bin [] ="00000000";
	if(num==0){
		return bin;
	}

	return bin;
}
