#include "binary.h";
	
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
