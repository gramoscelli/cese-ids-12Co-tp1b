/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/

//! alumno_t: Tipo definido a partir de una estructura para manejar datos de alunos
typedef struct alumno_s {
    char apellidos[30];  //!< texto del apellido(s) del alumno
    char nombres[30];    //!< texto del nombre(s) del alumno
    char documento[11];  //!< texto del número de DNI del alumno
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/


/** 
 * @brief Convierte la estructura de tipo alumno_t en un dato JSON
 * 
 * @param cadena    Puntero al string donde devuelve el JSON
 * @param espacio   Longitud del string cadena
 * @param alumno    Puntero a la estructura con los datos del alumno
 * @return true     Los datos del alumno se serializaron de forma correcta
 * @return false    Fallo la serialización de los datos del alumno
 */
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);

/** 
 * @brief Serializa todos los alumnos del arreglo ALUMNOS y los devuelve en formato JSON
 * 
 * @param cadena    Puntero al string donde se cargan los JSON con los datos de los alumnos
 * @param espacio   Tamaño del string cadena
 * @return true     Se serializaron correctamente todos los alumnos de la lista
 * @return false    Falló la serialización de los alumnos
 */
bool SerializarAlumnos(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
