#include "binary.h"
 


/** Basic structure for the algoritm
 * 0-----0-----0-----0-----0-----0-----0-----0
 *2^7---2^6---2^5---2^4---2^3---2^2---2^1---2^0
 *128---64----32----16-----8-----4-----2-----1 
 */
	
void read_number(){

	printf("induza um valor de 0-255  para ser convertido em  binario \n");
	int num=0;
	scanf("%d",&num);
	converter( num);
	

}

void  converter(int number){

	char binary_array [8] ="00000000";
	int pattern_array [8] = {128,64,32,16,8,4,2,1};
	
	if(number >255){
		printf("Numero demasiado grande \n");
		return;
	}
	
	for(int j=0;j<8;j++){
		if(number==pattern_array[j]){
			binary_array[j]='1';
			
		}else if(number>pattern_array[j]){
			 number-= pattern_array[j];
			 binary_array[j]='1';

 		}
 		if((number - pattern_array[j])==0 ){
 			break;
 		}
	}
	
	for(int i=0;i<8;i++){
		printf("%c",binary_array[i]);
	}
	printf("\n");
}

