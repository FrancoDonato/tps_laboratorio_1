
#include "funciones.h"

int menuOpciones(int* flagMenu1, int* flagMenu2, float* kilometros, float* precioAero, float* precioLat){
	int opcion;
	int cant;

	system("cls");

	if(* flagMenu1 == 0 && * flagMenu2 == 0){
	printf("1-Ingresar Kilometros: ");
	printf("\n2-Ingresar Precio de Vuelos: ");
	printf("\n3-Calcular todos los costos: ");
	printf("\n4-Informar Resultados: ");
	printf("\n5-Carga forzada de datos");
	printf("\n6-Salir");
	printf("\nElija la opcion que desee...");
	fflush(stdin);
	cant = scanf("%d", &opcion);

	if(cant == 0){
		opcion = 7;
	}
	}
	else
		if(* flagMenu1 == 1 && * flagMenu2 == 0){
			printf("\nLos Km ingresados son: %.2f Km", * kilometros);
			printf("\n\n1-Ingresar Kilometros: ");
			printf("\n2-Ingresar Precio de Vuelos: ");
			printf("\n3-Calcular todos los costos: ");
			printf("\n4-Informar Resultados: ");
			printf("\n5-Carga forzada de datos");
			printf("\n6-Salir");
			printf("\nElija la opcion que desee...");
			fflush(stdin);
			cant = scanf("%d", &opcion);

			if(cant == 0){
					opcion = 7;
				}
		}
		else
			if(* flagMenu1 == 0 && * flagMenu2 == 1){
				printf("1-Ingresar Kilometros: ");
				printf("\n2-Ingresar Precio de Vuelos: ");
				printf("\n\n  a)Precio ingresado de Aerolineas: $ %.2f", * precioAero);
				printf("\n  b)Precio ingresado de Latam: $ %.2f\n", * precioLat);
				printf("\n3-Calcular todos los costos: ");
				printf("\n4-Informar Resultados: ");
				printf("\n5-Carga forzada de datos");
				printf("\n6-Salir");
				printf("\nElija la opcion que desee...");
				fflush(stdin);
				cant = scanf("%d", &opcion);

				if(cant == 0){
						opcion = 7;
					}
			}
				else
					if(* flagMenu1 == 1 && * flagMenu2 == 1){
						printf("\nLos Km ingresados son: %.2f Km", * kilometros);
						printf("\n\n1-Ingresar Kilometros: ");
						printf("\n2-Ingresar Precio de Vuelos: ");
						printf("\n\n  a)Precio ingresado de Aerolineas: $ %.2f", * precioAero);
						printf("\n  b)Precio ingresado de Latam: $ %.2f\n", * precioLat);
						printf("\n3-Calcular todos los costos: ");
						printf("\n4-Informar Resultados: ");
						printf("\n5-Carga forzada de datos");
						printf("\n6-Salir");
						printf("\nElija la opcion que desee...");
						fflush(stdin);
						cant = scanf("%d", &opcion);

						if(cant == 0){
							opcion = 7;
						}
					}
	return opcion;
}

int ingresarKilometros(float* kilometros, int* flagMenu1){
	float km;
	int validacion;

	printf("\nIngrese los kilometros del vuelo: ");
	scanf("%f", &km);
	while (km <= 0){
		printf ("\nError, ingrese un numero mayor a 0...");
		scanf("%f", &km);
		}

	* kilometros = km;
	* flagMenu1 = 1;

	validacion = 1;

	return validacion;
}


int ingresarPrecios(float* precioAerolinea, float* precioLatam, int* flagMenu2){

   float precioAero;
   float precioLa;
   int validacion;


	printf("\nIngrese el precio de Aerolinea : ");
	scanf("%f", &precioAero);

	while (precioAero <= 0){
			printf ("\nError, ingrese un numero mayor a 0...");
			scanf("%f", &precioAero);
			}


	printf("\nIngrese el precio de Latam : ");
	scanf("%f", &precioLa);

	while (precioLa <= 0){
			printf ("\nError, ingrese un numero mayor a 0...");
			scanf("%f", &precioLa);
			}

	* precioAerolinea = precioAero;

	* precioLatam = precioLa;

	* flagMenu2 = 1;

	validacion = 1;

	return validacion;

}


int calcular (
		float kilometros,
		float precioAero,
		float precioLat,
		int* flag,
		float* debitoLatam,
		float* debitoAerolineas,
		float* creditoLatam,
		float* creditoAerolineas,
		float* btcLatam,
		float* btcAerolineas,
		float* precioPorKmAero,
		float* precioPorKmLat,
		float* diferenciaDePrecios){
	int validacion;
	float BTC = 4606954.55;

	system("cls");

	* debitoAerolineas = precioAero * 0.9;
	* debitoLatam = precioLat * 0.9;
	* creditoAerolineas = precioAero * 1.25;
	* creditoLatam = precioLat * 1.25;
	* btcAerolineas = precioAero / BTC;
	* btcLatam = precioLat / BTC;
	* precioPorKmAero = precioAero / kilometros;
	* precioPorKmLat = precioLat / kilometros;
	* diferenciaDePrecios = precioLat - precioAero;

	if(* flag == 0){
	printf("\nEl precio por Km de Aerolineas es : $ %.2f\n", * precioPorKmAero);

	printf("\nEl precio por Km de Latam es : $ %.2f", * precioPorKmLat);

	printf("\n\nLa diferencia entre el precio en debito de Aerolineas y Latam es de $ %.2f \n\n", * diferenciaDePrecios);
	}

	validacion = 1;

	return validacion;
}

void informarResultados (
		float kilometros,
		float precioLat,
		float precioAero,
		float* debitoLatam,
		float* debitoAerolineas,
		float* creditoLatam,
		float* creditoAerolineas,
		float* btcLatam,
		float* btcAerolineas,
		float* precioPorKmLatam,
		float* precioPorKmAerolineas,
		float* diferenciaDePrecios){
	system("cls");
	printf("\n\n---Informe de resultados---\n");

	printf("\nLos kilometros ingresados son: %.2f km \n", kilometros);

	printf("\nLatam: $ %.2f", precioLat);
	printf("\n a)Precio con tarjeta de debito: $ %.2f", * debitoLatam);
	printf("\n b)Precio con tarjeta de credito: $ %.2f", * creditoLatam);
	printf("\n c)Precio pagando con bitcoin: $ %.6f", * btcLatam);
	printf("\n d)Precio unitario: $ %.2f", * precioPorKmLatam);

	printf("\n\nAerolineas: $ %.2f", precioAero);
	printf("\n a)Precio con tarjeta de debito: $ %.2f", * debitoAerolineas);
	printf("\n b)Precio con tarjeta de credito: $ %.2f", * creditoAerolineas);
	printf("\n c)Precio pagando con bitcoin: $ %.6f", * btcAerolineas);
	printf("\n d)Precio unitario: $ %.2f", * precioPorKmAerolineas);

	printf("\n\nLa diferencia de precios es: $ %.2f\n\n", * diferenciaDePrecios);
}

void cargaForzada (float* kilometros, float* precioAero, float* precioLat, int* flag){
	* kilometros = 7090;
	* precioAero = 162965;
	* precioLat = 159339;
	* flag = 1;
}

char finalizarPrograma(){
	char salir = 's';
	system("cls");
	printf("\n\n---Gracias por utilizar el Programa de Franco Donato Gonzalez---\n\n");
	return salir;
}


