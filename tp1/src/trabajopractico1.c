#include <stdio.h>
#include <stdlib.h>
#include "conio.h"

int menuOpciones();

int main(void) {
	setbuf(stdout, NULL);
	char salir = 'n';

	do{
		switch(menuOpciones()){
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:

			break;
		default:
			printf("Opcion invalida, por favor seleccione una opcion correcta\n");
		}

		system("pause");

	}while(salir == 'n');
}

int menuOpciones(){
	int opcion;
	int cant;
	system("cls");
	printf("1-Ingresar Kilometros: ");
	printf("\n2-Ingresar Precio de Vuelos: ");
	printf("\n3-Calcular todos los costos: ");
	printf("\n4-Informar Resultados: ");
	printf("\n5-Carga forzada de datos");
	printf("\n6-Salir");
	fflush(stdin);
	cant = scanf("%d", &opcion);

	if(cant == 0){
		opcion = 7;
	}

	return opcion;
}
