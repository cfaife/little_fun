#include "menu.h"
#include "fibonacci.h"
#include "factorial.h"
#include "binary.h"



void show_menu_options(){

	printf("************************************************\n");
	printf("********* BEM vindo ao LITTLE_FUN **************\n");
	printf("************************************************\n");
	printf("|----------------------------------------------|\n");
	printf("|   1 - Serie de Fibonacci (n=40)              |\n");
	printf("|   2 - Conversao em Binario                   |\n");
	printf("|   3 - Numeros Romanos                        |\n");		
	printf("|   4 - Calculo Factorial  de N  	           |\n");
	printf("|     	                                       |\n");
	printf("|   *Selecione uma das opcoes                  |\n");
	printf("|                                              |\n");
	printf("|----------------------------------------------|\n");
	printf("|**********************************************|\n");

	

	read_menu_option_choice();
}



void read_menu_option_choice(){
	int  menu_option;
	scanf("%d", &menu_option);

	if(menu_option==1){
		show_fibonnacy_serie ();	
	}
	if(menu_option==2){
		read_number();	
	}

	if(menu_option==4){
		imprimirFactorial();	
	}

}


