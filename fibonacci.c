#include <stdio.h>

int main (){

	int array [100];
	//iniciando ao array
	array[0]=0;
	array[1]=1;
	int  i=0;
	for (i=2;i<100;i++){
		array[i]=array[i-1]+array[i-2];
	}
	i=0;
	while(i<40){
		printf("%d \n",array[i]);
		i++;
	}

	return 0;

}
