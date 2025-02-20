/*
 * defines.h
 *
 *  Created on: Nov 26, 2016
 *      Author: axellucas
 */

#ifndef DEFINES_H_
#define DEFINES_H_

#define ENABLED			1
#define DISABLED		0

#define SALIDA			1
#define ENTRADA			0

#define PORT0			0
#define PORT1			1
#define PORT2			2
#define PORT3			3
#define PORT4			4

// Defines DAC

#define pi    3.14159265358979

#define PUERTO(X)             	X
#define PIN(X)                 	X

#define NUMERO_MUESTRAS     	1000 // cantidad de muestras de las señales precalculadas
#define DMA_SIZE            	NUMERO_MUESTRAS
#define VALOR_MEDIO_DAC     	512 //valor medio salida dac en cuentas (de 10 bits) de tension para 1.5V

//#define CLOCK_DAC_HZ        30000000    // CCLK divido por 4. NOTA: Clock que trae por defecto con ésta configuración: 120MHz.

#define BARRIDO_CICLICO 		0
#define BARRIDO_LINEAL 			1

// Defines ADC
#define CANAL_CORRIENTE			ADC_CH0
#define CANAL_TENSION			ADC_CH1
#define ADC_SAMPL_FREC      	50000
#define ADC_N_COLA 				1 //se pone 1 medicion (punto) por cada mensaje de USB
#define TAMANIO_MAX_COLA_ADC 	2000 //cantidad maxima de mediciones (puntos) en la cola ADC
#define TAMANIO_MAX_COLA_USB	100 //cantidad maxima de mensajes en la cola USB
#define LARGO_MENSAJE			8 //igual a la cantidad de bytes de los reports de entrada y de salida de USB

#define TICKS_MUESTREO          1 // delay entre lecturas de ADC, determina la frecuencia de muestreo (con el error propio de los ticks del sistema)

#define ADC_DR_RESULT(n)        (((n) & 0xFFF))

// Definiciones de los códigos de operación
#define OC_INITMEASUREMENTLINEAL 	0xA1
#define OC_INITMEASUREMENTCYCLICAL 	0xA2
#define OC_ABORTMEASUREMENT 		0xB1
#define OC_ENDMEASUREMENT 			0xB2
#define OC_SENDDATA 				0xC
#define OC_CYCLEEND 				0xD1
#define OC_SENDDATAEND 				0xD2
#define OC_ACK 						0xE
#define OC_SENDDATA_ERR 			0xF



#endif /* DEFINES_H_ */
