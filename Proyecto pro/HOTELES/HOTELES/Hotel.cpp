/* File:
 * Author: Luis Ignacio López Castro y Anderson Mora Aguero
 * Created on 26 de agosto de 2020, 7:35 PM
 */
#include "Hotel.h"
Hotel::Hotel() {
	for(int i=0;i<x;i++){
		for (int j = 0; j < x; j++) {
			matriz[i][j] = NULL;
		}
	}
}
void Hotel::añadeHabitacion(Habitacion* H, int a, int b) {
	matriz[a][b] = H;
}
Hotel::~Hotel() {
	//NO SE QUE HACER XD
}
string Hotel::ImprimeHotel() {
	stringstream s;
	for (int i = 0; i < x; i++) {
		s << endl;
		for (int j = 0; j < y; j++) {
			s << "[ "<<matriz[i][j]->ImprimeHabitacion() << " ]" ;
		}
	}
	return s.str();
}
string Hotel::ImprimeHabitacionesPorTipo(string z) {
	stringstream s;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (matriz[i][j]->getclase() == z)
				s << "[" << matriz[i][j]->ImprimeHabitacion() << "]" << endl;
		}
	}
	return s.str();
}
string Hotel::ImprimeHabitacionesXcamas(int z) {
	stringstream s;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (matriz[i][j]->getpacama() == z)
				s << "[" << matriz[i][j]->ImprimeHabitacion() << "]" << endl;
		}
	}
	return s.str();
}

string Hotel::ImprimeHabitacion(string h) {
	stringstream s;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (matriz[i][j]->getIdentificador() == h)
				s << matriz[i][j]->ImprimeHabitacionConReserva() << endl;
		}
	}
	return s.str();
}

bool Hotel::Comprobar(string ide) {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (matriz[i][j]->getIdentificador() == ide) {
				char est = matriz[i][j]->getEstado();
				if (est == 'L')
					return true;
			}			
		}
	}
	return false;
}

