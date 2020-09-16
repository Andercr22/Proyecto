/* File:
 * Author: Luis Ignacio López Castro y Anderson Mora Aguero
 * Created on 26 de agosto de 2020, 7:35 PM
 */
#include "Reservacion.h"
Reservacion::Reservacion() {
	NumeroDeReser = "";
	Adultos = 0;
	Ninos = 0;
	Ndias = 0;
	Monto = 0;
	todoIN = false;
	DiaEn = "";
	DiaSalida = "";
	horadEntr =0;
	horaSali = 0;
	reservacionClie = NULL;
	MesEN = 0;
	AnoEN = 0;
	MesSalida = 0;
	AnoSalida = 0;
}

Reservacion::Reservacion(string l,int A, int N, int D, bool E, int z, int m, int B, int v, int ms, int Bs, int x,int y, Cliente* c) {
	NumeroDeReser = l;
	Adultos = A;
	Ninos = N;
	Ndias = D;
	Monto = 0;
	todoIN = E;
	DiaEn = z;
	MesEN = m;
	AnoEN = B;
	DiaSalida = v;
	MesSalida = ms;
	AnoSalida = Bs;
	horadEntr = x;
	horaSali = y;
	reservacionClie = c;
	
}


int Reservacion::getAdultos() {
	return Adultos;
}
int Reservacion::getNinos() {
	return Ninos;
}

void Reservacion::settodoIN(bool in) {
	todoIN = in;

}
bool Reservacion::gettodoIN() {
	return todoIN;
}

int Reservacion::getHoraEntra() {
	return horadEntr;
}

int Reservacion::getNdias() {
	return Ndias;
}
Cliente* Reservacion::getCliente() {
	return reservacionClie;
}

string Reservacion::getNumeroDeReser() {
	return NumeroDeReser;
}

void Reservacion::setCosto(float m) {
	Monto = m;
}
float Reservacion::getCosto() {
	return Monto;
}

string Reservacion::ImprimeReservacion() {
	stringstream s;
	s << "Num de reservacion: " << NumeroDeReser << endl;
	s << reservacionClie->imprimeCliente();
	if (todoIN)//revisar lo que le esta entrando a este booleano
		s << "Todo incluido: si" << endl;
	else
		s << "Todo includo: no" << endl;
	s << "Personas: " << Ninos + Adultos << endl;
	s << "Adultos: " << Adultos << endl;
	s << "Niños: " << Ninos << endl;
	s << "Dias de Estancia: " << Ndias << endl;
	s << "Dia de entrada: " << DiaEn << "/" << MesEN << "/" << AnoEN << endl;
	s << "Dia de salida: " << DiaSalida << "/" << MesSalida << "/" << AnoSalida << endl;
	s << "Hora de entrada: " << horadEntr << endl;
	s << "Hora salida: " << horaSali << endl;
	return s.str();
}

string Reservacion::ImprimeIDre() {
	stringstream s;
	s << NumeroDeReser << endl;
	return s.str();
}