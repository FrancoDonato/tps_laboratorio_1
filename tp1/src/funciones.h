#ifndef FUNCIONES_H_
#define FUNCIONES_H_

#include <stdio.h>
#include <stdlib.h>
#include "conio.h"

/// @fn int menuOpciones(int*, int*, float*, float*, float*)
/// @brief esta funcion te lleva al menu de opciones
/// @pre
/// @post
/// @param flagMenu1
/// @param flagMenu2
/// @param kilometros
/// @param precioAero
/// @param precioLat
/// @return retorna la opcion que el usuario eligio
int menuOpciones(int* flagMenu1, int* flagMenu2, float* kilometros, float* precioAero, float* precioLat);
/// @fn int ingresarKilometros(float*, int*)
/// @brief esta funcion se utiliza para que el usuario ingrese los Km
/// @pre
/// @post
/// @param kilometros
/// @param flagMenu1
/// @return retorna una validacion para realizar los calculos
int ingresarKilometros(float* kilometros, int* flagMenu1);
/// @fn int ingresarPrecios(float*, float*, int*)
/// @brief esta funcion se utiliza para que el usuario ingrese los costos
/// @pre
/// @post
/// @param precioAerolinea
/// @param precioLatam
/// @param flagMenu2
/// @return retorna una validacion para poder realizar los calculos
int ingresarPrecios(float* precioAerolinea, float* precioLatam, int* flagMenu2);
/// @fn int calcular(float, float, float, int*, float*, float*, float*, float*, float*, float*, float*, float*, float*)
/// @brief esta funcion realiza los calculos, muestra el precio unitario y la diferencia de precios
/// @pre
/// @post
/// @param kilometros
/// @param precioAero
/// @param precioLat
/// @param flag
/// @param debitoLatam
/// @param debitoAerolineas
/// @param creditoLatam
/// @param creditoAerolineas
/// @param btcLatam
/// @param btcAerolineas
/// @param precioPorKmAero
/// @param precioPorKmLat
/// @param diferenciaDePrecios
/// @return retorna una validacion para poder realizar el informe de resultados
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
/// @fn void informarResultados(float, float, float, float*, float*, float*, float*, float*, float*, float*, float*, float*)
/// @brief esta funcion muestra los resultados de los calculos echos en la funcion anterior
/// @pre
/// @post
/// @param kilometros
/// @param precioLat
/// @param precioAero
/// @param debitoLatam
/// @param debitoAerolineas
/// @param creditoLatam
/// @param creditoAerolineas
/// @param btcLatam
/// @param btcAerolineas
/// @param precioPorKmLatam
/// @param precioPorKmAerolineas
/// @param diferenciaDePrecios
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
/// @fn void cargaForzada(float*, float*, float*, int*)
/// @brief esta funcion ingresa datos predeterminados sin que el usuario pueda escojerlos
/// @pre
/// @post
/// @param kilometros
/// @param precioAero
/// @param precioLat
/// @param flag
void cargaForzada(float* kilometros, float* precioAero, float* precioLat, int* flag);
/// @fn char finalizarPrograma()
/// @brief esta funcion se utiliza para salir del programa
/// @pre
/// @post
/// @return retorna una variable char que permite que el usuario salga del bucle
char finalizarPrograma();

#endif /* FUNCIONES_H_ */
