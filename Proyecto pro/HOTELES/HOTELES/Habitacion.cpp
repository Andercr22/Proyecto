/* File:
 * Author: Luis Ignacio López Castro y Anderson Mora Aguero
 * Created on 26 de agosto de 2020, 7:35 PM
 */
#include "Habitacion.h"
Habitacion::Habitacion() {
	Identificador = ' ';
	Estado = ' ';
	Habitacion1 = NULL;
	Habitacion2 = NULL;			
}

Habitacion::Habitacion(char I, char E) {
	Identificador = I;
	Estado = E;
	Habitacion1 = NULL;
	Habitacion2 = NULL;
}

string Habitacion::ImprimeHabitacion() {
	stringstream s;
	s << "# Identificador: " << Identificador << endl;
	s << "Estado de la Habitacion: " << Estado << endl;
}

Habitacion::~Habitacion() {
}