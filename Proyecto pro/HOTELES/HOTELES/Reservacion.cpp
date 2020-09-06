/* File:
 * Author: Luis Ignacio López Castro y Anderson Mora Aguero
 * Created on 26 de agosto de 2020, 7:35 PM
 */
#include "Reservacion.h"
Reservacion::Reservacion() {
	Adultos = 0;
	Ninos = 0;
	Ndias = 0;
	Monto = 0.0;
	Estancia = false;
}

Reservacion::Reservacion(int A, int N, int D, float M, bool E) {
	Adultos = A;	
	Ninos = N;
	Ndias = D;
	Monto = M;
	Estancia = E;
}

string Reservacion::ImprimeReservacion() {
	stringstream s;
	s << "Cantidad de Adultos: " << Adultos << endl;
	s << "Cantidad de Niños: " << Ninos << endl;
	s << "Cantidad de Dias de Estancia: " << Ndias << endl;
	s << "Monto a Pagar: " << Monto << endl;
	s << "Tipo de Estancia: " << Estancia << endl;
	return s.str();
}
