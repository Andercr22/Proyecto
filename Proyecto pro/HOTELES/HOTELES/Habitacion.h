/* File:
 * Author: Luis Ignacio López Castro y Anderson Mora Aguero
 * Created on 26 de agosto de 2020, 7:35 PM
 */

#ifndef HABITACION_H
#define	HABITACION_H
#include "Reservacion.h"
#include "Cliente.h"
class Habitacion {
private:
	char Identificador;
	char Estado;
	Cliente* Habitacion1;
	Reservacion* Habitacion2;
public:
	Habitacion();
	Habitacion(char, char);
	string ImprimeHabitacion();
	~Habitacion();

};

#endif /* HABITACION_H */