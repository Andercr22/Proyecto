/* File:
 * Author: Luis Ignacio López Castro y Anderson Mora Aguero
 * Created on 26 de agosto de 2020, 7:35 PM
 */
#include "Habitacion.h"
Habitacion::Habitacion() {
	Identificador = "";
	clase = "";
	Estado = ' ';
	camas = 0;
	HabiClie = NULL;
	HabiReser = NULL;
}

Habitacion::Habitacion(string I,string z, char E,int x) {
	Identificador = I;
	clase = z;
	camas = x;
	Estado = E;
	HabiClie = NULL;
	HabiReser = NULL;
}
void Habitacion::setEstado(char x) {
	Estado = x;
}
void Habitacion::setHabiClie(Cliente* c) {
	HabiClie = c;
}
void Habitacion::setHabiReser(Reservacion* r) {
	HabiReser = r;
}
char Habitacion::getEstado() {
	return Estado;
}
Cliente* Habitacion::getHabiClie() {
	return HabiClie;
}
Reservacion* Habitacion::getHabiReser() {
	return HabiReser;
}
string Habitacion::getclase() {
	return clase;
}
int Habitacion::getpacama() {
	return camas;
}
string Habitacion::ImprimeHabitacionConReserva() {
	stringstream s;
	s << "Tipo de habitacion: " << clase << endl;
	s << "Cantidad de camas" << camas << endl;
	s << "Estado: " << Estado << endl;
	s << "Costo de la habitacion sin todo incluido: " <</*llamar metodo tostring*/endl;
	s << "Costo de la habitacion con todo incluido: " <</*llamar metodo tostring*/endl;
	if (HabiClie != NULL) {
		s << "La reservacion actual seria: " << endl << HabiReser->ImprimeReservacion();
	}
	return s.str();
}
string Habitacion::ImprimeHabitacion() {
	stringstream s;
	s << Identificador << "(" << Estado << ")";
	return s.str();

}
Habitacion::~Habitacion() {
	//preguntar como liberar memoria asosiativa
}/*
string Habitacion::ImprimeMontoPagar() {
	

}*/