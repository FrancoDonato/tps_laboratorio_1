#include "funciones.h"

int main(void) {
	setbuf(stdout, NULL);
	char salir = 'n';
	int flagIngresokm = 0;
	int flagIngresoprecios = 0;
	int flagCalculos = 0;
	int flag = 0;
	float kilometros;
	float precioAero;
	float precioLat;
	float debitoLatam;
	float debitoAerolineas;
	float creditoLatam;
	float creditoAerolineas;
	float btcLatam;
	float btcAerolineas;
	float precioPorKmAero;
	float precioPorKmLat;
	float diferenciaDePrecios;

	do{
		switch(menuOpciones()){
		case 1:
			flagIngresokm = ingresarKilometros(&kilometros);
			break;
		case 2:
			flagIngresoprecios = ingresarPrecios(&precioAero, &precioLat);
			break;
		case 3:
			if(flagIngresokm == 0 || flagIngresoprecios == 0){
				printf("\nAun faltan datos para realizar los calculos, ingrese todos los datos y vuelva a intentar.\n");
			}
			else{
				flagCalculos =  calcular(
						kilometros,
						precioAero,
						precioLat,
						&flag,
						&debitoLatam,
						&debitoAerolineas,
						&creditoLatam,
						&creditoAerolineas,
						&btcLatam,
						&btcAerolineas,
						&precioPorKmAero,
						&precioPorKmLat,
						&diferenciaDePrecios);
			}
			break;
		case 4:
			if(flagCalculos == 1){
				informarResultados(
						kilometros,
						precioLat,
						precioAero,
						&debitoLatam,
						&debitoAerolineas,
						&creditoLatam,
						&creditoAerolineas,
						&btcLatam,
						&btcAerolineas,
						&precioPorKmLat,
						&precioPorKmAero,
						&diferenciaDePrecios);
				flagIngresokm = 0;
				flagIngresoprecios = 0;
				flagCalculos = 0;

			}
			else{
				printf("\nAun no se han realizado los calculos, realicelos e intente de nuevo.\n");
			}
			break;
		case 5:
			cargaForzada(&kilometros, &precioAero, &precioLat, &flag);
			flagCalculos =  calcular(
								kilometros,
								precioAero,
								precioLat,
								&flag,
								&debitoLatam,
								&debitoAerolineas,
								&creditoLatam,
								&creditoAerolineas,
								&btcLatam,
								&btcAerolineas,
								&precioPorKmAero,
								&precioPorKmLat,
								&diferenciaDePrecios);
			informarResultados(
					            kilometros,
								precioLat,
								precioAero,
								&debitoLatam,
								&debitoAerolineas,
								&creditoLatam,
								&creditoAerolineas,
								&btcLatam,
								&btcAerolineas,
								&precioPorKmLat,
								&precioPorKmAero,
								&diferenciaDePrecios);
			flagIngresokm = 0;
			flagIngresoprecios = 0;
			flagCalculos = 0;
			break;
		case 6:
			salir = finalizarPrograma();
			break;
		case 7:
			printf("Esta opcion no es un numero, por favor seleccione una opcion valida.\n");
			break;
		default:
			printf("Opcion invalida, por favor seleccione una opcion correcta\n");
		}

		system("pause");

	}while(salir == 'n');

	return EXIT_SUCCESS;

}


