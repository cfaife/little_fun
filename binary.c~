#include <stdio.h>

int read_number();
char *  converter(int num);
int main (){

	int num =read_number();

	char * bin = converter(num);
	
	printf("\n");
	printf("\n");
	int i=0;
	for(i =0;i<8;i++){
		printf("%c",bin[i]);
	}
	return 0;
}

int read_number(){

	printf("induza um valor de 0-255  para ser convertido em  binario \n");
	int num=0;
	scanf("%d",&num);

	printf("valor: %d \n",num);
	return num;
}

char *  converter(int num){

	char bin[8] ={'0','0','0','0','0','0','0','0'};
	if(num==0){
		return bin;
	}
}
