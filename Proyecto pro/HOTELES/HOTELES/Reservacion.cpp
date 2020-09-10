/* File:
 * Author: Luis Ignacio L�pez Castro y Anderson Mora Aguero
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
	Tipo = "";
}

Reservacion::Reservacion(string l,int A, int N, int D, float M, bool E,string z,string v,int x,int y, Cliente* c,string T) {
	NumeroDeReser = l;
	Adultos = A;
	Ninos = N;
	Ndias = D;
	Monto = M;
	todoIN = E;
	DiaEn = z;
	DiaSalida = v;
	horadEntr = x;
	horaSali = y;
	reservacionClie = c;
	Tipo = T;
}

void Reservacion::setTipo(string t) {
	Tipo = t;
}
string Reservacion::getTipo() {
	return Tipo;
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
	s << "Ni�os: " << Ninos << endl;
	s << "Dias de Estancia: " << Ndias << endl;
	s << "Dia de entrada: " << DiaEn << endl;
	s << "Dia de salida: " << DiaSalida <<endl;
	s << "Hora de entrada: " << horadEntr << endl;
	s << "Hora salida: " << horaSali << endl;
	return s.str();
}