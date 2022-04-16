#ifndef FUNCIONES_H_
#define FUNCIONES_H_

#include <stdio.h>
#include <stdlib.h>
#include "conio.h"


int menuOpciones();
int ingresarKilometros(float* kilometros);
int ingresarPrecios(float* precioAerolinea, float* precioLatam);
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
		float* diferenciaDePrecios);
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
		float* diferenciaDePrecios);
void cargaForzada(float* kilometros, float* precioAero, float* precioLat, int* flag);
char finalizarPrograma();

#endif /* FUNCIONES_H_ */
